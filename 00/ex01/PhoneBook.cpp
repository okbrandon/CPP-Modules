/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:04:46 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/22 11:16:40 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

/* Constructors & Destructors */

/**
 * @brief Construct a new Phone Book:: Phone Book object
 */
PhoneBook::PhoneBook(void) {
	this->_i = 0;
}

/**
 * @brief Destroy the Phone Book:: Phone Book object
 */
PhoneBook::~PhoneBook(void) {}

/* Private functions */

/**
 * @brief Add a Contact object to the contact list
 *
 * @param contact 				- The contact to add
 */
void	PhoneBook::_addContact(Contact contact) {
	if (this->_i >= 8)
		this->_i = 0;
	this->_contacts[this->_i++] = contact;
}

/**
 * @brief Display all contacts registered
 */
void	PhoneBook::_displayContacts(void) {
	std::ostringstream	oss;
	Contact				contact;
	int					i;
	const char			originalFill = std::cout.fill();

	i = 0;
	std::cout << "o----------o----------o----------o----------o" << std::endl;
	std::cout << std::setfill(' ') \
			<< "|" BCYN << std::setw(10) << "index" \
			<< CRESET "|" BCYN << std::setw(10) << "first name" \
			<< CRESET "|" BCYN << std::setw(10) << "last name" \
			<< CRESET "|" BCYN << std::setw(10) << "nickname" \
			<< CRESET "|" << std::endl;
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
			<< "|" << std::setw(10) << _fixWidth(oss.str()) \
			<< "|" << std::setw(10) << _fixWidth(contact.getFirstName()) \
			<< "|" << std::setw(10) << _fixWidth(contact.getLastName()) \
			<< "|" << std::setw(10) << _fixWidth(contact.getNickname()) \
			<< "|" << std::setfill(originalFill) << std::endl;
		i++;
	}
	std::cout << "o----------o----------o----------o----------o" << std::endl;
}

/* Functions */

/**
 * @brief Ask the user, data about the new user using prompts
 * It'll automatically add the new contact to the contact list at the end
 */
void	PhoneBook::addContactPrompt(void) {
	std::ostringstream	oss;
	Contact				contact;

	oss << this->_i % 8;
	std::cout << "Let's add a new contact. It'll be contact #" \
			<< BGRN << oss.str() << CRESET << std::endl;
	if (this->_i >= 8)
		std::cout << BRED "Your new contact will overwrite '" CRESET << \
			this->_contacts[0].getNickname() << BRED "'..." CRESET << std::endl;
	/* Asking for the first name */
	contact.setFirstName(_linePrompt("First name"));
	/* Asking for the last name */
	contact.setLastName(_linePrompt("Last name"));
	/* Asking for the nickname */
	contact.setNickname(_linePrompt("Nickname"));
	/* Asking for the phone number */
	contact.setPhoneNumber(_linePrompt("Phone number"));
	/* Asking for the darkest secret */
	contact.setDarkestSecret(_linePrompt("Darkest secret"));
	/* Adding the contact */
	_addContact(contact);
	std::cout << BGRN "New contact made! Added '" CRESET << \
		contact.getNickname() << BGRN "'..." CRESET << std::endl;
}

/**
 * @brief Ask the user which contact to display
 * It'll first display all the existing contacts
 */
void	PhoneBook::searchPrompt(void) {
	int			id;
	std::string	input;

	_displayContacts();
	std::cout << "Alright, let's search a contact." << std::endl;
	/* Asking the user which ID to display */
	input = _linePrompt("Contact ID");
	if (input == "NULL")
		return ;
	for (int i = 0; i < (int) input.length(); i++)
	{
		if (!std::isdigit(input.at(i)))
		{
			std::cout << BRED "This value is invalid." CRESET << std::endl;
			PhoneBook::searchPrompt();
			return ;
		}
	}
	std::istringstream(input) >> id;
	if (id < 0 || id >= 8)
	{
		std::cout << BRED "You can only display contacts from index 0 to 8." CRESET << std::endl;
		return ;
	}
	if (this->_contacts[id].getFirstName().empty())
	{
		std::cout << BRED "This contact is unknown, please refer to your list." CRESET << std::endl;
		return ;
	}
	this->_contacts[id].printData();
}

/* Utils*/

/**
 * @brief Ask input with a specific prompt
 *
 * @param prompt				- What you want from the user
 * @return std::string 			- Returned input if valid
 */
std::string	PhoneBook::_linePrompt(std::string prompt) {
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
 * @brief Utils method used to fix the width of a string.
 * It'll add a dot a the end of the string if its length is
 * greater than 10 caracters.
 *
 * @param str 					- The string to fix
 * @return std::string 			- The fixed string
 */
std::string	PhoneBook::_fixWidth(std::string str) {
	if ((int) str.length() > 10)
	{
		str = str.substr(0, 9);
		str.push_back('.');
	}
	return (str);
}
