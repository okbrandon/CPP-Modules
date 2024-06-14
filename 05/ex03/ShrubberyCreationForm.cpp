/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 16:28:09 by bsoubaig          #+#    #+#             */
/*   Updated: 2024/06/14 14:15:48 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/* Constructors & Destructors */
ShrubberyCreationForm::ShrubberyCreationForm(void): AForm("ShrubberyCreationForm", 145, 137) {
	this->_target = "unidentified";
	std::cout << BGRN "[ShrubberyCreationForm] " CRESET "New object with target '" BCYN << \
		this->_target << CRESET "'..." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("ShrubberyCreationForm", 145, 137) {
	this->_target = target;
	std::cout << BGRN "[ShrubberyCreationForm] " CRESET "New object with target '" BCYN << \
		this->_target << CRESET "'..." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &shrubberyCreationForm): AForm(shrubberyCreationForm) {
	*this = shrubberyCreationForm;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
	std::cout << BRED "[ShrubberyCreationForm] " CRESET "Deleting object with target '" BCYN << \
		this->_target << CRESET "'..." << std::endl;
}

/* Functions */
void	ShrubberyCreationForm::executeRequirements(Bureaucrat const &executor) const {
	std::string		fileName = this->_target + "_shruberry";
	std::ofstream	outfile(fileName.c_str());
	
	if (!outfile.is_open()) {
		std::cout << BYEL "[ShrubberyCreationForm] " CRESET "An error occured while creating outfile." << std::endl;
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
	(void) executor;
}

/* Overloaded operators */
ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &shrubberyCreationForm) {
	if (this != &shrubberyCreationForm)
		this->_target = shrubberyCreationForm._target;
	return (*this);
}