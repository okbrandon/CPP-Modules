/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:07:15 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/11/20 15:47:36 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# define BRED	"\e[1;31m"
# define BGRN	"\e[1;32m"
# define BYEL	"\e[1;33m"
# define BBLU	"\e[1;34m"
# define BMAG	"\e[1;35m"
# define BCYN	"\e[1;36m"
# define BWHT	"\e[1;37m"
# define CRESET	"\e[0m"

# include <iostream>
# include "AForm.hpp"

/*
 * Bureaucrat doesn't know what Form is because it hasn't been declared yet.
 * We then have to forward the declaration of the Form class.
 * This will inform the compiler that there is class named Form that will
 * be defined later.
*/
class AForm;

class Bureaucrat {
	
	private:
		const std::string	_name;
		int					_grade;

	public:
		/* Constructors & Destructors */
		Bureaucrat(void);
		Bureaucrat(const std::string &name, int grade);
		Bureaucrat(const Bureaucrat &bureaucrat);
		~Bureaucrat(void);

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
		void				incrementGrade(void);
		void				decrementGrade(void);
		void				signForm(AForm &form);
		void				executeForm(AForm const &form);

		/* Getters */
		const std::string	&getName(void) const;
		int					getGrade(void) const;

		/* Overloaded operators */
		Bureaucrat	&operator=(const Bureaucrat &bureaucrat);

};

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &bureaucrat);

#endif