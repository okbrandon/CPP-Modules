/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 11:41:24 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/11/21 16:47:35 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"
# include "ShruberryCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern {

	private:

	public:
		/* Constructors & Destructors */
		Intern(void);
		Intern(const Intern &intern);
		~Intern(void);

		/* Exceptions */
		class FormNotFound: public std::exception {
			public:
				virtual const char* what() const throw();
		};

		/* Functions */
		AForm	*makeForm(std::string formName, std::string target) const;

		/* Overloaded operators */
		Intern	&operator=(const Intern &intern);
	
};

#endif