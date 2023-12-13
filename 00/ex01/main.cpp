/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:13:50 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/21 09:28:58 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void) {
	PhoneBook	phoneBook;
	std::string	input;

	std::cout << "---\nWelcome to your PhoneBook!\n---" << std::endl;
	while (1)
	{
		if (!std::cin.eof()) std::cout << "Command > ";
		if (!std::getline(std::cin, input)) {
			std::cout << "EXIT" << std::endl;
			break ;
		}
		if (!input.compare("ADD")) phoneBook.addContactPrompt();
		else if (!input.compare("SEARCH")) phoneBook.searchPrompt();
		else if (!input.compare("EXIT")) break ;
	}
	std::cout << "---\nSee you soon, bye!\n---" << std::endl;
	return (0);
}