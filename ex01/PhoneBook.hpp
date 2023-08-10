/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 19:56:17 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/03/15 14:47:34 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# include "Contact.hpp"
# include "StringUtils.hpp"
# include <sstream>

# define C_RESET 	"\x1b[0m"
# define C_ERROR	"\x1b[31m\x1b[1m"
# define C_OK		"\x1b[32m\x1b[1m"

class	PhoneBook {

	private:
		Contact	_contacts[8];
		int		_i;

	public:
		PhoneBook(void);
		~PhoneBook(void);

		void				addContact(Contact contact);
		void				addContactPrompt(void);
		void				searchPrompt(void);
		void				displayContacts(void);

};

#endif