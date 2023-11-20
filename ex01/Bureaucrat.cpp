/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:31:57 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/11/20 15:11:07 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/* Constructors & Destructors */
Bureaucrat::Bureaucrat(void): _name("unidentified") {
	this->_grade = 150;
	std::cout << BGRN "[Bureaucrat] " CRESET "New object called '" BCYN << \
		this->_name << CRESET "' with grade " BCYN << this->_grade << CRESET \
		"..." << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade): _name(name) {
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = grade;
	std::cout << BGRN "[Bureaucrat] " CRESET "New object called '" BCYN << \
		this->_name << CRESET "' with grade " BCYN << this->_grade << CRESET \
		"..." << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat): _name(bureaucrat.getName()) {
	*this = bureaucrat;
	std::cout << BGRN "[Bureaucrat] " CRESET "Copied object called '" BCYN << \
		this->_name << CRESET "'..." << std::endl;
}

Bureaucrat::~Bureaucrat(void) {
	std::cout << BRED "[Bureaucrat] " CRESET "Deleting object called '" BCYN << \
		this->_name << CRESET "'..." << std::endl;
}

/* Exceptions */
const char*	Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Grade is too high! (from highest 1 to lowest 150)");
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Grade is too low! (from highest 1 to lowest 150)");
}

/* Functions */
void	Bureaucrat::incrementGrade(void) {
	int	oldGrade = this->_grade;

	this->_grade--;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	std::cout << BYEL "[Bureaucrat] " CRESET "Grade incrementation succeeded. " << \
		"(from " BCYN << oldGrade << CRESET " to " BCYN << this->_grade << CRESET ")" << std::endl;
}

void	Bureaucrat::decrementGrade(void) {
	int	oldGrade = this->_grade;

	this->_grade++;
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	std::cout << BYEL "[Bureaucrat] " CRESET "Grade decrementation succeeded. " << \
		"(from " BCYN << oldGrade << CRESET " to " BCYN << this->_grade << CRESET ")" << std::endl;
}

void	Bureaucrat::signForm(Form &form) {
	if (form.isSigned()) {
		std::cout << BYEL "[Bureaucrat] " BCYN << this->_name << CRESET " couldn't sign " << \
			BCYN << form.getName() << CRESET " because it's already signed!" << std::endl;
		return ;
	}
	try {
		form.beSigned(*this);
		std::cout << BYEL "[Bureaucrat] " BCYN << this->_name << CRESET " signed " \
			BCYN << form.getName() << CRESET "..." << std::endl;
	} catch (std::exception &exception) {
		std::cout << BYEL "[Bureaucrat] " BCYN << this->_name << CRESET " couldn't sign " \
			BCYN << form.getName() << CRESET " because '" << BCYN << exception.what() << \
			CRESET << "'..." << std::endl;
	}
}

/* Getters */
const std::string	&Bureaucrat::getName(void) const {
	return (this->_name);
}

int	Bureaucrat::getGrade(void) const {
	return (this->_grade);
}

/* Overloaded operators */
Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &bureaucrat) {
	if (this != &bureaucrat)
		this->_grade = bureaucrat.getGrade();
	return (*this);
}

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &bureaucrat) {
	out << BYEL "[Bureaucrat] " BCYN << bureaucrat.getName() << \
		CRESET ", bureaucrat grade " BCYN << bureaucrat.getGrade() << CRESET ".";
	return (out);
}