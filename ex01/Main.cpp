/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:13:50 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/03/12 20:50:10 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	phoneBook;
	std::string	input;

	std::cout << "---\nWelcome to your PhoneBook!\n---" << std::endl;
	while (std::cin >> input && input.compare("EXIT") != 0)
	{
		std::cout << "[debug] input=" << input << std::endl;
		if (!input.compare("ADD"))
		{
			phoneBook.addContactPrompt();
		}
	}
	std::cout << "---\nSeen you soon, bye!\n---" << std::endl;
	return (0);
}