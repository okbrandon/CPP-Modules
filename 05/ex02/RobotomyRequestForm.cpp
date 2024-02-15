/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 18:42:42 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/11/20 20:41:32 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/* Constructors & Destructors */
RobotomyRequestForm::RobotomyRequestForm(void): AForm("RobotomyRequestForm", 72, 45) {
	this->_target = "unidentified";
	std::cout << BGRN "[RobotomyRequestForm] " CRESET "New object with target '" BCYN << \
		this->_target << CRESET "'..." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("RobotomyRequestForm", 72, 45) {
	this->_target = target;
	std::cout << BGRN "[RobotomyRequestForm] " CRESET "New object with target '" BCYN << \
		this->_target << CRESET "'..." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &robotomyRequestForm): AForm(robotomyRequestForm) {
	*this = robotomyRequestForm;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {
	std::cout << BRED "[RobotomyRequestForm] " CRESET "Deleting object with target '" BCYN << \
		this->_target << CRESET "'..." << std::endl;
}

/* Functions */
void	RobotomyRequestForm::executeRequirements(Bureaucrat const &executor) const {
	std::cout << BYEL "[RobotomyRequestForm] " CRESET "*some drilling noises*" << std::endl;
	srand((unsigned) time(NULL));
	if (rand() % 2 == 0)
		std::cout << BYEL "[RobotomyRequestForm] " BCYN << this->getName() << CRESET \
			" has been robotomized." << std::endl;
	else
		std::cout << BYEL "[RobotomyRequestForm] " BCYN << this->getName() << CRESET \
			"'s robotomy has failed." << std::endl;
	(void) executor;
}

/* Overloaded operators */
RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &robotomyRequestForm) {
	if (this != &robotomyRequestForm)
		this->_target = robotomyRequestForm._target;
	return (*this);
}