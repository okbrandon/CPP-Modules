/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 20:44:42 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/08/13 16:41:30 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	complainFinder(char *argv)
{
	std::string	levels[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == argv)
			return (i);
	}
	return (-1);
}

int main(int argc, char **argv)
{
	Harl	harl;

	if (argc != 2)
	{
		std::cerr << C_RED << "./harlFilter [DEBUG|INFO|WARNING|ERROR]" << C_RESET << std::endl;
		return (1);
	}
	switch (complainFinder(argv[1]))
	{
		case 0:
			harl.complain("DEBUG");
			__attribute__((fallthrough));
		case 1:
			harl.complain("INFO");
			__attribute__((fallthrough));
		case 2:
			harl.complain("WARNING");
			__attribute__((fallthrough));
		case 3:
			harl.complain("ERROR");
			break ;
		default:
			std::cerr << C_RED << "[ Probably complaining about insignificant problems ]" << C_RESET << std::endl;
			break ;
	}
	return (0);
}