/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 11:47:56 by bsoubaig          #+#    #+#             */
/*   Updated: 2024/06/14 14:20:23 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

/* Constructors & Destructors */
Intern::Intern(void) {
	std::cout << BGRN "[Intern] " CRESET "New object." << std::endl;
}

Intern::Intern(const Intern	&intern) {
	*this = intern;
}

Intern::~Intern(void) {
	std::cout << BRED "[Intern] " CRESET "Deleting object..." << std::endl;
}

/* Exceptions */
const char*	Intern::FormNotFound::what() const throw() {
	return ("Form not found");
}

/* Functions */
AForm	*Intern::makeForm(std::string formName, std::string target) const {
	AForm	*forms[3];
	AForm	*returned = NULL;

	forms[0] = new ShrubberyCreationForm(target);
	forms[1] = new RobotomyRequestForm(target);
	forms[2] = new PresidentialPardonForm(target);
	for (int i = 0; i < 3; i++) {
		if (formName == forms[i]->getName())
			returned = forms[i];
	}
	for (int i = 0; i < 3; i++) {
		if (forms[i] != returned)
			delete forms[i];
	}
	if (!returned)
		throw Intern::FormNotFound();
	std::cout << BYEL "[Intern] " CRESET "I just made a form named " BCYN << \
		returned->getName() << CRESET "..." << std::endl;
	return (returned);
}

/* Overloaded operators */
Intern	&Intern::operator=(const Intern &intern) {
	(void) intern;
	return (*this);
}