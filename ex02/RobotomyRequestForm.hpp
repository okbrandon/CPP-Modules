/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 18:39:35 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/11/20 20:37:22 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"
# include <cstdlib>

class RobotomyRequestForm : public AForm {

	private:
		std::string	_target;

	public:
		/* Constructors & Destructors */
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &robotomyRequestForm);
		~RobotomyRequestForm(void);

		/* Functions */
		virtual void	executeRequirements(Bureaucrat const &executor) const;

		/* Overloaded operators */
		RobotomyRequestForm	&operator=(const RobotomyRequestForm &robotomyRequestForm);
		
};

#endif