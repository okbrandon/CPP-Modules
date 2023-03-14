/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 19:20:49 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/03/13 10:21:09 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class	Contact {

	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickname;
		std::string _phoneNumber;
		std::string _darkestSecret;	

	public:
		Contact(void);
		Contact(std::string firstName, std::string lastName, std::string nickname, \
				std::string phoneNumber, std::string darkestSecret);
		~Contact(void);

		void		setFirstName(std::string firstName);
		void		setLastName(std::string lastName);
		void		setNickname(std::string nickname);
		void		setPhoneNumber(std::string phoneNumber);
		void		setDarkestSecret(std::string darkestSecret);

		std::string	getFirstName(void) const;
		std::string	getLastName(void) const;
		std::string getNickname(void) const;
		std::string	getPhoneNumber(void) const;
		std::string	getDarkestSecret(void) const;

		void	printData(void);

};

#endif