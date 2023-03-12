/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 19:24:55 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/03/12 19:57:35 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

Contact::Contact(void)
{
	return ;
}

Contact::Contact(std::string firstName, std::string lastName, std::string nickname, \
				std::string phoneNumber, std::string darkestSecret)
{
	this->_firstName = firstName;
	this->_lastName = lastName;
	this->_nickname = nickname;
	this->_phoneNumber = phoneNumber;
	this->_darkestSecret = darkestSecret;
	return ;
}

Contact::~Contact(void)
{
	return ;
}

void	Contact::setFirstName(std::string firstName)
{
	this->_firstName = firstName;
	return ;
}

void	Contact::setLastName(std::string lastName)
{
	this->_lastName = lastName;
	return ;
}

void	Contact::setNickname(std::string nickname)
{
	this->_nickname = nickname;
	return ;
}

void	Contact::setPhoneNumber(std::string phoneNumber)
{
	this->_phoneNumber = phoneNumber;
	return ;
}

void	Contact::setDarkestSecret(std::string darkestSecret)
{
	this->_darkestSecret = darkestSecret;
	return ;
}

void	Contact::printData(void)
{
	std::cout << "Printing " << this->_nickname << "'s informations..." << std::endl;
	std::cout << "---\nFirst Name: " << this->_firstName << std::endl;
	std::cout << "Last Name: " << this->_lastName << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Phone number: " << this->_phoneNumber << std::endl;
	std::cout << "Darkest secret: " << this->_darkestSecret << std::endl;
	return ;
}