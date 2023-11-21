/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShruberryCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 16:06:19 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/11/20 18:48:54 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBERRYCREATIONFORM_HPP
# define SHRUBERRYCREATIONFORM_HPP

# include "AForm.hpp"
# include <fstream>

class ShruberryCreationForm : public AForm {
	
	private:
		std::string	_target;

	public:
		/* Constructors & Destructors */
		ShruberryCreationForm(void);
		ShruberryCreationForm(std::string target);
		ShruberryCreationForm(const ShruberryCreationForm &shruberryCreationForm);
		~ShruberryCreationForm(void);

		/* Functions */
		virtual void	executeRequirements(Bureaucrat const &executor) const;

		/* Overloaded operators */
		ShruberryCreationForm	&operator=(const ShruberryCreationForm &shruberryCreationForm);
	
};

#endif