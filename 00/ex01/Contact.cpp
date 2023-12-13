/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 19:24:55 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/21 09:28:45 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

/**
 * @brief Construct a new Contact:: Contact object
 */
Contact::Contact(void) {}

/**
 * @brief Destroy the Contact:: Contact object
 */
Contact::~Contact(void) {}

/**
 * @brief Method used to print current contact's data
 */
void	Contact::printData(void) {
	std::cout << "Displaying " << this->_nickname << "'s informations..." << std::endl;
	std::cout << "   First Name: " << this->_firstName << std::endl;
	std::cout << "   Last Name: " << this->_lastName << std::endl;
	std::cout << "   Nickname: " << this->_nickname << std::endl;
	std::cout << "   Phone number: " << this->_phoneNumber << std::endl;
	std::cout << "   Darkest secret: " << this->_darkestSecret << std::endl;
}

/**
 * @brief Method used to get the first name
 * 
 * @return std::string 			- The first name
 */
std::string	Contact::getFirstName(void) const {
	return (this->_firstName);
}

/**
 * @brief Method used to get the last name
 * 
 * @return std::string 			- The last name
 */
std::string	Contact::getLastName(void) const {
	return (this->_lastName);
}

/**
 * @brief Method used to get the nickname
 * 
 * @return std::string 			- The nickname
 */
std::string	Contact::getNickname(void) const {
	return (this->_nickname);
}

/**
 * @brief Method used to get the phone number
 * 
 * @return std::string 			- The phone number
 */
std::string	Contact::getPhoneNumber(void) const {
	return (this->_phoneNumber);
}

/**
 * @brief Method used to get the darkest secret
 * 
 * @return std::string 			- The darkest secret
 */
std::string	Contact::getDarkestSecret(void) const {
	return (this->_darkestSecret);
}

/**
 * @brief Method used to define the first name
 * 
 * @param firstName				- New first name to set
 */
void	Contact::setFirstName(std::string firstName) {
	this->_firstName = firstName;
}

/**
 * @brief Method used to define the last name 
 * 
 * @param lastName				- New last name to set
 */
void	Contact::setLastName(std::string lastName) {
	this->_lastName = lastName;
}

/**
 * @brief Method used to define the nickname
 * 
 * @param nickname 				- New nickname to set
 */
void	Contact::setNickname(std::string nickname) {
	this->_nickname = nickname;
}

/**
 * @brief Method used to define the phone number
 * 
 * @param phoneNumber 			- New phone number to set
 */
void	Contact::setPhoneNumber(std::string phoneNumber) {
	this->_phoneNumber = phoneNumber;
}

/**
 * @brief Method used to define the darkest secret
 * 
 * @param darkestSecret 		- New darkest secret to set
 */
void	Contact::setDarkestSecret(std::string darkestSecret) {
	this->_darkestSecret = darkestSecret;
}