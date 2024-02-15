/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:00:10 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/12/07 12:03:54 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/* Constructors & Destructors */
Form::Form(void): _name("unidentified"), _requiredSign(150), _requiredExec(150) {
	this->_signed = false;
	std::cout << BGRN "[Form] " CRESET "New object called '" BCYN << \
		this->_name << CRESET "' with required sign " BCYN << \
		this->_requiredSign << CRESET " and required exec " BCYN << \
		this->_requiredExec << CRESET "..." << std::endl;
}

Form::Form(const std::string &name, const int requiredSign, const int requiredExec): _name(name), _requiredSign(requiredSign), _requiredExec(requiredExec) {
	if (requiredSign < 1 || requiredExec < 1)
		throw Form::GradeTooHighException();
	else if (requiredSign > 150 || requiredExec > 150)
		throw Form::GradeTooLowException();
	this->_signed = false;
	std::cout << BGRN "[Form] " CRESET "New object called '" BCYN << \
		this->_name << CRESET "' with required sign " BCYN << \
		this->_requiredSign << CRESET " and required exec " BCYN << \
		this->_requiredExec << CRESET "..." << std::endl;
}

Form::Form(const Form &form): _name(form.getName()), _requiredSign(form.getRequiredSign()), _requiredExec(form.getRequiredExec()) {
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
	if (bureaucrat.getGrade() > this->_requiredSign)
		throw Form::GradeTooLowException();
	if (!this->_signed)
		this->_signed = true;
}

/* Getters */
const std::string	&Form::getName(void) const {
	return (this->_name);
}

const int			&Form::getRequiredSign(void) const {
	return (this->_requiredSign);
}

const int			&Form::getRequiredExec(void) const {
	return (this->_requiredExec);
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
	out << BYEL "[AForm] " BCYN << form.getName() << \
		CRESET ", required sign " BCYN << form.getRequiredSign() << \
		CRESET ", required exec " BCYN << form.getRequiredExec() << \
		CRESET ", is signed " << (!form.isSigned() ? BRED"no" : BGRN"yes") << CRESET ".";
	return (out);
}