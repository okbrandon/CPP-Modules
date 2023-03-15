/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:13:50 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/03/15 12:38:16 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	phoneBook;
	std::string	input;

	std::cout << "---\nWelcome to your PhoneBook!\n---" << std::endl;
	while (input != "EXIT")
	{
		if (!std::cin.eof()) std::cout << "Command > ";
		std::getline(std::cin, input);
		if (!input.compare("ADD"))
			phoneBook.addContactPrompt();
		else if (!input.compare("SEARCH"))
			phoneBook.searchPrompt();
	}
	std::cout << "---\nSeen you soon, bye!\n---" << std::endl;
	return (0);
}