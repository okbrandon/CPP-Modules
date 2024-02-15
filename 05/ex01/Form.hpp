/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:36:51 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/12/07 12:01:24 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

/*
 * Form doesn't know what Bureaucrat is because it hasn't been declared yet.
 * We then have to forward the declaration of the Bureaucrat class.
 * This will inform the compiler that there is class named Bureaucrat that will
 * be defined later.
*/
class Bureaucrat;

class Form {

	private:
		const std::string	_name;
		const int			_requiredSign;
		const int			_requiredExec;
		bool				_signed;

	public:
		/* Constructors & Destructors */
		Form(void);
		Form(const std::string &name, const int requiredSign, const int requiredExec);
		Form(const Form &form);
		~Form(void);

		/* Exceptions */
		class GradeTooHighException: public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException: public std::exception {
			public:
				virtual const char* what() const throw();
		};

		/* Functions */
		void	beSigned(Bureaucrat &bureaucrat);

		/* Getters */
		const std::string	&getName(void) const;
		const int			&getRequiredSign(void) const;
		const int			&getRequiredExec(void) const;
		bool				isSigned(void) const;

		/* Overloaded operators */
		Form	&operator=(const Form &form);

};

std::ostream	&operator<<(std::ostream &out, const Form &form);

#endif