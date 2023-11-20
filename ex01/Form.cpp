/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:00:10 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/11/20 15:17:51 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/* Constructors & Destructors */
Form::Form(void): _name("unidentified"), _requiredGrade(150) {
	this->_signed = false;
	std::cout << BGRN "[Form] " CRESET "New object called '" BCYN << \
		this->_name << CRESET "' with required grade " BCYN << \
		this->_requiredGrade << CRESET "..." << std::endl;
}

Form::Form(const std::string &name, const int requiredGrade): _name(name), _requiredGrade(requiredGrade) {
	if (requiredGrade < 1)
		throw Form::GradeTooHighException();
	else if (requiredGrade > 150)
		throw Form::GradeTooLowException();
	this->_signed = false;
	std::cout << BGRN "[Form] " CRESET "New object called '" BCYN << \
		this->_name << CRESET "' with required grade " BCYN << \
		this->_requiredGrade << CRESET "..." << std::endl;
}

Form::Form(const Form &form): _name(form.getName()), _requiredGrade(form.getRequiredGrade()) {
	*this = form;
	std::cout << BGRN "[Form] " CRESET "Copied object called '" BCYN << \
		this->_name << CRESET "'..." << std::endl;
}

Form::~Form(void) {
	std::cout << BRED "[Form] " CRESET "Deleting object called '" BCYN << \
		this->_name << CRESET "'..." << std::endl;
}

/* Exceptions */
const char*	Form::GradeTooHighException::what() const throw() {
	return ("Grade is too high!");
}

const char*	Form::GradeTooLowException::what() const throw() {
	return ("Grade is too low!");
}

/* Functions */
void	Form::beSigned(Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() > this->_requiredGrade)
		throw Form::GradeTooLowException();
	if (!this->_signed)
		this->_signed = true;
}

/* Getters */
const std::string	&Form::getName(void) const {
	return (this->_name);
}

const int			&Form::getRequiredGrade(void) const {
	return (this->_requiredGrade);
}

bool				Form::isSigned(void) const {
	return (this->_signed);
}

/* Overloaded operators */
Form	&Form::operator=(const Form &form) {
	if (this != &form)
		this->_signed = form.isSigned();
	return (*this);
}

std::ostream	&operator<<(std::ostream &out, const Form &form) {
	out << BYEL "[Form] " BCYN << form.getName() << \
		CRESET ", required grade " BCYN << form.getRequiredGrade() << \
		CRESET ", is signed " << (!form.isSigned() ? BRED"no" : BGRN"yes") << CRESET ".";
	return (out);
}