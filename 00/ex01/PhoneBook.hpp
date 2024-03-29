/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 19:56:17 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/22 11:09:58 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# include "Contact.hpp"
# include <sstream>
# include <iomanip>

# define BRED	"\e[1;31m"
# define BGRN	"\e[1;32m"
# define BYEL	"\e[1;33m"
# define BBLU	"\e[1;34m"
# define BMAG	"\e[1;35m"
# define BCYN	"\e[1;36m"
# define BWHT	"\e[1;37m"
# define CRESET	"\e[0m"

class	PhoneBook {

	private:
		Contact	_contacts[8];
		int		_i;
		
		/* Private functions */
		void				_addContact(Contact contact);
		void				_displayContacts(void);
		std::string			_linePrompt(std::string prompt);
		std::string			_fixWidth(std::string str);

	public:
		/* Constructors & Destructors */
		PhoneBook(void);
		~PhoneBook(void);

		/* Functions */
		void				addContactPrompt(void);
		void				searchPrompt(void);

};

#endif