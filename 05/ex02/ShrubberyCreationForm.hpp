/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 16:06:19 by bsoubaig          #+#    #+#             */
/*   Updated: 2024/06/14 14:15:24 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"
# include <fstream>

class ShrubberyCreationForm : public AForm {
	
	private:
		std::string	_target;

	public:
		/* Constructors & Destructors */
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &shrubberyCreationForm);
		~ShrubberyCreationForm(void);

		/* Functions */
		virtual void	executeRequirements(Bureaucrat const &executor) const;

		/* Overloaded operators */
		ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &shrubberyCreationForm);
	
};

#endif