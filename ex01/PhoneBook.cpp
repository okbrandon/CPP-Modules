/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:04:46 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/03/13 10:56:09 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->_i = 0;
}

PhoneBook::~PhoneBook(void) {}

void	PhoneBook::addContact(Contact contact)
{
	if (this->_i >= 8)
	{
		std::cout << C_RESET << C_RED << C_BOLD << "Overwriting contact '" << \
			C_RESET << this->_contacts[0].getNickname() << C_RED << C_BOLD << \
			"' with '" << C_RESET << contact.getNickname() << C_RED << C_BOLD << \
			"'..." << C_RESET << std::endl;
		this->_i = 0;
	}
	this->_contacts[this->_i++] = contact;
}

void	PhoneBook::addContactPrompt(void)
{
	Contact		contact;
	std::string	input;

	std::cout << "Let's add a new contact. It'll be contact #" \
			<< std::to_string(this->_i % 8) << std::endl;
	/* Asking for the first name */
	std::cout << "   First name: ";
	while (std::getline(std::cin, input))
	{
		if (!input.empty()) break ;
		if (!std::cin.eof()) std::cout << "   First name: ";
	}
	contact.setFirstName(input);

	/* Asking for the last name */
	std::cout << "   Last name: ";
	while (std::getline(std::cin, input))
	{
		if (!input.empty()) break ;
		if (!std::cin.eof()) std::cout << "   Last name: ";
	}
	contact.setLastName(input);

	/* Asking for the nickname */
	std::cout << "   Nickname: ";
	while (std::getline(std::cin, input))
	{
		if (!input.empty()) break ;
		if (!std::cin.eof()) std::cout << "   Nickname: ";
	}
	contact.setNickname(input);

	/* Asking for the phone number */
	std::cout << "   Phone number: ";
	while (std::getline(std::cin, input))
	{
		if (!input.empty()) break ;
		if (!std::cin.eof()) std::cout << "   Phone number: ";
	}
	contact.setPhoneNumber(input);

	/* Asking for the darkest secret */
	std::cout << "   Darkest secret: ";
	while (std::getline(std::cin, input))
	{
		if (!input.empty()) break ;
		if (!std::cin.eof()) std::cout << "   Darkest secret: ";
	}
	contact.setDarkestSecret(input);

	this->addContact(contact);
	std::cout << "New contact made! Added '" << contact.getNickname() << "'..." << std::endl;
}

void	PhoneBook::display(int i)
{
	if (i < 0 || i >= 8)
	{
		std::cout << "Contact range from 0 to 8" << std::endl;
		return ;
	}
	this->_contacts[i].printData();
}