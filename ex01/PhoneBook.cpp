/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:04:46 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/03/12 20:16:23 by bsoubaig         ###   ########.fr       */
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