/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShruberryCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 16:28:09 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/11/20 18:49:02 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShruberryCreationForm.hpp"

/* Constructors & Destructors */
ShruberryCreationForm::ShruberryCreationForm(void): AForm("ShruberryCreationForm", 145, 137) {
	this->_target = "unidentified";
	std::cout << BGRN "[ShruberryCreationForm] " CRESET "New object with target '" BCYN << \
		this->_target << CRESET "'..." << std::endl;
}

ShruberryCreationForm::ShruberryCreationForm(std::string target): AForm("ShruberryCreationForm", 145, 137) {
	this->_target = target;
	std::cout << BGRN "[ShruberryCreationForm] " CRESET "New object with target '" BCYN << \
		this->_target << CRESET "'..." << std::endl;
}

ShruberryCreationForm::ShruberryCreationForm(ShruberryCreationForm const &shruberryCreationForm): AForm(shruberryCreationForm) {
	*this = shruberryCreationForm;
}

ShruberryCreationForm::~ShruberryCreationForm(void) {
	std::cout << BRED "[ShruberryCreationForm] " CRESET "Deleting object with target '" BCYN << \
		this->_target << CRESET "'..." << std::endl;
}

/* Functions */
void	ShruberryCreationForm::executeRequirements(Bureaucrat const &executor) const {
	std::string		fileName = this->_target + "_shruberry";
	std::ofstream	outfile(fileName.c_str());
	
	if (!outfile.is_open()) {
		std::cout << BYEL "[ShruberryCreationForm] " CRESET "An error occured while creating outfile." << std::endl;
		return ;
	}
	outfile << "	           ,@@@@@@@," << std::endl;
	outfile << "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
	outfile << "    ,&\%\%&\%&&\%,@@@@@/@@@@@@,8888\\88/8o" << std::endl;
	outfile << "   ,\%&\%&&\%&&\%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
	outfile << "   \%&&\%&\%&/\%&&\%@@\\@@/ /@@@88888\\88888'" << std::endl;
	outfile << "   \%&&\%/ \%&\%\%&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
	outfile << "   `&\%\\ ` /\%&'    |.|        \\ '|8'" << std::endl;
	outfile << "       |o|        | |         | |" << std::endl;
	outfile << "       |.|        | |         | |" << std::endl;
	outfile << "jgs \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_" << std::endl;
	outfile.close();
}

/* Overloaded operators */
ShruberryCreationForm	&ShruberryCreationForm::operator=(const ShruberryCreationForm &shruberryCreationForm) {
	if (this != &shruberryCreationForm)
		this->_target = shruberryCreationForm._target;
	return (*this);
}