/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:13:50 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/03/12 20:24:10 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	phoneBook;
	Contact		contact;

	contact.setLastName("Soubaigne");
	contact.setNickname("bsoubaig");
	contact.setPhoneNumber("0000000000");
	contact.setDarkestSecret("i hate men");

	for (int i = 0; i < 8; i++)
	{
		std::string	firstName = "Brandon #";
		firstName += std::to_string(i);
		contact.setFirstName(firstName);
		phoneBook.addContact(contact);
	}
	phoneBook.display(0);
	return (0);
}