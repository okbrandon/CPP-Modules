/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:36:51 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/11/20 18:27:05 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

/*
 * Form doesn't know what Bureaucrat is because it hasn't been declared yet.
 * We then have to forward the declaration of the Bureaucrat class.
 * This will inform the compiler that there is class named Bureaucrat that will
 * be defined later.
*/
class Bureaucrat;

class AForm {

	private:
		const std::string	_name;
		const int			_requiredSign;
		const int			_requiredExec;
		bool				_signed;

	public:
		/* Constructors & Destructors */
		AForm(void);
		AForm(const std::string &name, const int requiredSign, const int requiredExec);
		AForm(const AForm &form);
		~AForm(void);

		/* Exceptions */
		class GradeTooHighException: public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException: public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class UnsignedFormException: public std::exception {
			public:
				virtual const char* what() const throw();	
		};

		/* Functions */
		void			beSigned(Bureaucrat &bureaucrat);
		void			executeRequirements(Bureaucrat const &executor) const;
		virtual void	execute(Bureaucrat const &executor) const = 0;

		/* Getters */
		const std::string	&getName(void) const;
		const int			&getRequiredSign(void) const;
		const int			&getRequiredExec(void) const;
		bool				isSigned(void) const;

		/* Overloaded operators */
		AForm	&operator=(const AForm &form);

};

std::ostream	&operator<<(std::ostream &out, const AForm &form);

#endif