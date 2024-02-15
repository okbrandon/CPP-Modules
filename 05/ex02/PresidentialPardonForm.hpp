/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 10:47:36 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/11/21 10:49:55 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class PresidentialPardonForm : public AForm {
	
	private:
		std::string	_target;

	public:
		/* Constructors & Destructors */
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &presidentialPardonForm);
		~PresidentialPardonForm(void);

		/* Functions */
		virtual void	executeRequirements(Bureaucrat const &executor) const;

		/* Overloaded operators */
		PresidentialPardonForm	&operator=(const PresidentialPardonForm &presidentialPardonForm);
	
};

#endif