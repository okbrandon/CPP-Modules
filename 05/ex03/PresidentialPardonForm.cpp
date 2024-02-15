/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 10:51:00 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/11/21 10:56:56 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/* Constructors & Destructors */
PresidentialPardonForm::PresidentialPardonForm(void): AForm("PresidentialPardonForm", 25, 5) {
	this->_target = "unidentified";
	std::cout << BGRN "[PresidentialPardonForm] " CRESET "New object with target '" BCYN << \
		this->_target << CRESET "'..." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("PresidentialPardonForm", 25, 5) {
	this->_target = target;
	std::cout << BGRN "[PresidentialPardonForm] " CRESET "New object with target '" BCYN << \
		this->_target << CRESET "'..." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &presidentialPardonForm): AForm(presidentialPardonForm) {
	*this = presidentialPardonForm;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {
	std::cout << BRED "[PresidentialPardonForm] " CRESET "Deleting object with target '" BCYN << \
		this->_target << CRESET "'..." << std::endl;
}

/* Functions */
void	PresidentialPardonForm::executeRequirements(Bureaucrat const &executor) const {
	std::cout << BYEL "[PresidentialPardonForm] " BCYN << this->_target << CRESET \
		" has been pardoned by " BCYN "Zaphod Beeblebrox" CRESET "..." << std::endl;
	(void) executor;
}


/* Overloaded operators */
PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &presidentialPardonForm) {
	if (this != &presidentialPardonForm)
		this->_target = presidentialPardonForm._target;
	return (*this);
}