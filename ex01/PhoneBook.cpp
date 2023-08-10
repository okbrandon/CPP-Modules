/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:04:46 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/08/10 17:55:33 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

/**
 * @brief Construct a new Phone Book:: Phone Book object
 */
PhoneBook::PhoneBook(void)
{
	this->_i = 0;
}

/**
 * @brief Destroy the Phone Book:: Phone Book object
 */
PhoneBook::~PhoneBook(void) {}

/**
 * @brief Ask input with a specific prompt
 *
 * @param prompt				- What you want from the user
 * @return std::string 			- Returned input if valid
 */
std::string	linePrompt(std::string prompt)
{
	std::string	input;
	std::cout << "   " << prompt << ": ";
	while (1)
	{
		if (!std::getline(std::cin, input)) {
			std::cout << "NULL" << std::endl;
			input = "NULL";
			break ;
		}
		if (!input.empty()) break ;
		if (!std::cin.eof()) std::cout << "   " << prompt << ": ";
	}
	return (input);
}

/**
 * @brief Add a Contact object to the contact list
 *
 * @param contact 				- The contact to add
 */
void	PhoneBook::addContact(Contact contact)
{
	if (this->_i >= 8)
		this->_i = 0;
	this->_contacts[this->_i++] = contact;
}

/**
 * @brief Ask the user, data about the new user using prompts
 * It'll automatically add the new contact to the contact list at the end
 */
void	PhoneBook::addContactPrompt(void)
{
	std::ostringstream	oss;
	Contact				contact;

	oss << this->_i % 8;
	std::cout << "Let's add a new contact. It'll be contact #" \
			<< oss.str() << std::endl;
	if (this->_i >= 8)
		std::cout << C_ERROR << "Your new contact will overwrite '" << \
			this->_contacts[0].getNickname() << "'..." << C_RESET << std::endl;
	/* Asking for the first name */
	contact.setFirstName(linePrompt("First name"));
	/* Asking for the last name */
	contact.setLastName(linePrompt("Last name"));
	/* Asking for the nickname */
	contact.setNickname(linePrompt("Nickname"));
	/* Asking for the phone number */
	contact.setPhoneNumber(linePrompt("Phone number"));
	/* Asking for the darkest secret */
	contact.setDarkestSecret(linePrompt("Darkest secret"));
	/* Adding the contact */
	this->addContact(contact);
	std::cout << C_OK << "New contact made! Added '" << C_RESET << \
		contact.getNickname() << C_OK << "'..." << C_RESET << std::endl;
}

/**
 * @brief Ask the user which contact to display
 * It'll first display all the existing contacts
 */
void	PhoneBook::searchPrompt(void)
{
	int			id;
	std::string	input;

	PhoneBook::displayContacts();
	std::cout << "Alright, let's search a contact." << std::endl;
	/* Asking the user which ID to display */
	input = linePrompt("Contact ID");
	if (input == "NULL")
		return ;
	for (int i = 0; i < (int) input.length(); i++)
	{
		if (!std::isdigit(input.at(i)))
		{
			std::cout << C_ERROR << "This value is invalid." << C_RESET << std::endl;
			PhoneBook::searchPrompt();
			return ;
		}
	}
	std::istringstream(input) >> id;
	if (id < 0 || id >= 8)
	{
		std::cout << C_ERROR << "You can only display contacts from index 0 to 8." \
			<< C_RESET << std::endl;
		return ;
	}
	if (this->_contacts[id].getFirstName().empty())
	{
		std::cout << C_ERROR << "This contact is unknown, please refer to your list." \
			<< C_RESET << std::endl;
		return ;
	}
	this->_contacts[id].printData();
}

/**
 * @brief Utils method used to fix the width of a string.
 * It'll add a dot a the end of the string if its length is
 * greater than 10 caracters.
 *
 * @param str 					- The string to fix
 * @return std::string 			- The fixed string
 */
std::string	fixWidth(std::string str)
{
	if ((int) str.length() > 10)
	{
		str = str.substr(0, 9);
		str.push_back('.');
	}
	return (str);
}

/**
 * @brief Display all contacts registered
 */
void	PhoneBook::displayContacts(void)
{
	std::ostringstream	oss;
	Contact				contact;
	int					i;

	i = 0;
	std::cout << "o----------o----------o----------o----------o" << std::endl;
	std::cout << std::setfill(' ') \
			<< "|" << std::setw(10) << "index" \
			<< "|" << std::setw(10) << "first name" \
			<< "|" << std::setw(10) << "last name" \
			<< "|" << std::setw(10) << "nickname" \
			<< "|" << std::endl;
	std::cout << "o----------o----------o----------o----------o" << std::endl;
	while (i < 8)
	{
		contact = this->_contacts[i];
		if (contact.getFirstName().empty())
		{
			if (i == 0) std::cout << "|      You have no contacts registered.     |" << std::endl;
			break ;
		}
		oss.str("");
		oss.clear();
		oss << i;
		std::cout << std::setfill(' ') \
			<< "|" << std::setw(10) << fixWidth(oss.str()) \
			<< "|" << std::setw(10) << fixWidth(contact.getFirstName()) \
			<< "|" << std::setw(10) << fixWidth(contact.getLastName()) \
			<< "|" << std::setw(10) << fixWidth(contact.getNickname()) \
			<< "|" << std::endl;
		i++;
	}
	std::cout << "o----------o----------o----------o----------o" << std::endl;
}
