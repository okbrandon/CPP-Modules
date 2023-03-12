/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 19:56:17 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/03/12 20:40:45 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H

# include "Contact.hpp"
# include <iostream>

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