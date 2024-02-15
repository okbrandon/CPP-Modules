/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:00:10 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/12/07 12:11:40 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

/* Constructors & Destructors */
AForm::AForm(void): _name("unidentified"), _requiredSign(150), _requiredExec(150) {
	this->_signed = false;
	std::cout << BGRN "[AForm] " CRESET "New object called '" BCYN << \
		this->_name << CRESET "' with required sign " BCYN << \
		this->_requiredSign << CRESET " and required exec " BCYN << \
		this->_requiredExec << CRESET "..." << std::endl;
}

AForm::AForm(const std::string &name, const int requiredSign, const int requiredExec): _name(name), _requiredSign(requiredSign), _requiredExec(requiredExec) {
	if (requiredSign < 1 || requiredExec < 1)
		throw AForm::GradeTooHighException();
	else if (requiredSign > 150 || requiredExec > 150)
		throw AForm::GradeTooLowException();
	this->_signed = false;
	std::cout << BGRN "[AForm] " CRESET "New object called '" BCYN << \
		this->_name << CRESET "' with required sign " BCYN << \
		this->_requiredSign << CRESET " and required exec " BCYN << \
		this->_requiredExec << CRESET "..." << std::endl;
}

AForm::AForm(const AForm &form): _name(form.getName()), _requiredSign(form.getRequiredSign()), _requiredExec(form.getRequiredExec()) {
	*this = form;
	std::cout << BGRN "[AForm] " CRESET "Copied object called '" BCYN << \
		this->_name << CRESET "'..." << std::endl;
}

AForm::~AForm(void) {
	std::cout << BRED "[AForm] " CRESET "Deleting object called '" BCYN << \
		this->_name << CRESET "'..." << std::endl;
}

/* Exceptions */
const char*	AForm::GradeTooHighException::what() const throw() {
	return ("Grade is too high!");
}

const char*	AForm::GradeTooLowException::what() const throw() {
	return ("Grade is too low!");
}

const char* AForm::UnsignedFormException::what() const throw() {
	return ("Form is unsigned!");
}

/* Functions */
void	AForm::beSigned(Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() > this->_requiredSign)
		throw AForm::GradeTooLowException();
	if (!this->_signed)
		this->_signed = true;
}

void	AForm::execute(Bureaucrat const &executor) const {
	if (!this->isSigned())
		throw AForm::UnsignedFormException();
	if (executor.getGrade() > this->_requiredExec)
		throw AForm::GradeTooLowException();
	executeRequirements(executor);
}

void	AForm::executeRequirements(Bureaucrat const &executor) const {
	(void) executor;
}

/* Getters */
const std::string	&AForm::getName(void) const {
	return (this->_name);
}

const int			&AForm::getRequiredSign(void) const {
	return (this->_requiredSign);
}

const int			&AForm::getRequiredExec(void) const {
	return (this->_requiredExec);
}

bool				AForm::isSigned(void) const {
	return (this->_signed);
}

/* Overloaded operators */
AForm	&AForm::operator=(const AForm &form) {
	if (this != &form)
		this->_signed = form.isSigned();
	return (*this);
}

std::ostream	&operator<<(std::ostream &out, const AForm &form) {
	out << BYEL "[AForm] " BCYN << form.getName() << \
		CRESET ", required sign " BCYN << form.getRequiredSign() << \
		CRESET ", required exec " BCYN << form.getRequiredExec() << \
		CRESET ", is signed " << (!form.isSigned() ? BRED"no" : BGRN"yes") << CRESET ".";
	return (out);
}