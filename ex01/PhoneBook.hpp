/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 19:56:17 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/03/13 10:53:17 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# include "Contact.hpp"

# define C_RESET 	"\x1b[0m"
# define C_RED		"\x1b[31m"
# define C_GREEN	"\x1b[32m"
# define C_BOLD		"\x1b[1m"

class	PhoneBook {

	private:
		Contact	_contacts[8];
		int		_i;

	public:	
		PhoneBook(void);
		~PhoneBook(void);

		void	addContact(Contact contact);
		void	addContactPrompt(void);
		void	display(int i);

};

#endif