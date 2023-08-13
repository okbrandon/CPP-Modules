/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 20:44:42 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/08/13 11:58:59 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl	harl;

	if (argc != 2)
	{
		std::cerr << C_RED << "./harl [DEBUG|INFO|WARNING|ERROR]" << C_RESET << std::endl;
		return (1);
	}
	harl.complain(argv[1]);
	return (0);
}