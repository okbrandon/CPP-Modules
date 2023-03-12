/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:04:46 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/03/12 21:06:37 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->_i = 0;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

void	PhoneBook::addContact(Contact contact)
{
	if (this->_i >= 8)
		this->_i = 0;
	this->_contacts[this->_i++] = contact;
	return ;
}

void	PhoneBook::addContactPrompt(void)
{
	std::string	input;

	std::cout << "Let's add a new contact. It'll be contact #" \
			<< std::to_string(this->_i + 1) << std::endl;
	std::cout << "   First name: ";
	while (std::getline(std::cin, input))
	{
		if (!input.empty()) break ;
		std::cout << std::endl;
	}
	std::cout << "Good input: " << input << std::endl;
	return ;
}

void	PhoneBook::display(int i)
{
	if (i < 0 || i >= 8)
	{
		std::cout << "Contact range from 0 to 8" << std::endl;
		return ;
	}
	this->_contacts[i].printData();
	return ;
}