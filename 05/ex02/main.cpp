/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:06:49 by bsoubaig          #+#    #+#             */
/*   Updated: 2024/06/14 14:16:36 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void	testShrubbery(void) {
	std::cout << BWHT "\n>>> RUNNING SHRUBERRY-CREATION TESTS\n" CRESET << std::endl;
	/* Creating needed bureau */
	Bureaucrat	goodBureau("Good Bureau", 136);
	Bureaucrat	badSignBureau("Bad Sign Bureau", 146);
	Bureaucrat	badExecBureau("Bad Exec Bureau", 138);
	
	/* Testing good bureau */
	std::cout << BWHT << "-------" << CRESET << std::endl;
	try {
		std::cout << BWHT "[!] Good bureau will try to sign and execute the form." CRESET << std::endl;
		ShrubberyCreationForm	form("goodForm");

		goodBureau.signForm(form);
		goodBureau.executeForm(form);
	} catch (std::exception	&exception) {
		std::cout << BRED "[Form] " CRESET "Exception caught!" << std::endl;
		std::cout << exception.what() << std::endl;
	}

	/* Testing bad sign bureau */
	std::cout << BWHT << "-------" << CRESET << std::endl;
	try {
		std::cout << BWHT "[!] Bad sign bureau will try to sign and execute the form." CRESET << std::endl;
		ShrubberyCreationForm	form("badSignForm");

		badSignBureau.signForm(form);
		badSignBureau.executeForm(form);
	} catch (std::exception	&exception) {
		std::cout << BRED "[Form] " CRESET "Exception caught!" << std::endl;
		std::cout << exception.what() << std::endl;
	}
	
	/* Testing bad exec bureau */
	std::cout << BWHT << "-------" << CRESET << std::endl;
	try {
		std::cout << BWHT "[!] Bad exec bureau will try to sign and execute the form." CRESET << std::endl;
		ShrubberyCreationForm	form("badExecForm");

		badExecBureau.signForm(form);
		badExecBureau.executeForm(form);
	} catch (std::exception	&exception) {
		std::cout << BRED "[Form] " CRESET "Exception caught!" << std::endl;
		std::cout << exception.what() << std::endl;
	}

	/* Tests done */
	std::cout << BWHT << "-------" << CRESET << std::endl;
	std::cout << BWHT "[!] ShruberryCreation tests are done." CRESET << std::endl;
}

void	testRobotomy(void) {
	std::cout << BWHT "\n>>> RUNNING ROBOTOMY-REQUEST TESTS\n" CRESET << std::endl;
	/* Creating needed bureau */
	Bureaucrat	goodBureau("Good Bureau", 45);
	Bureaucrat	badSignBureau("Bad Sign Bureau", 73);
	Bureaucrat	badExecBureau("Bad Exec Bureau", 46);
	
	/* Testing good bureau */
	std::cout << BWHT << "-------" << CRESET << std::endl;
	try {
		std::cout << BWHT "[!] Good bureau will try to sign and execute the form." CRESET << std::endl;
		RobotomyRequestForm	form("goodForm");

		goodBureau.signForm(form);
		goodBureau.executeForm(form);
	} catch (std::exception	&exception) {
		std::cout << BRED "[Form] " CRESET "Exception caught!" << std::endl;
		std::cout << exception.what() << std::endl;
	}

	/* Testing bad sign bureau */
	std::cout << BWHT << "-------" << CRESET << std::endl;
	try {
		std::cout << BWHT "[!] Bad sign bureau will try to sign and execute the form." CRESET << std::endl;
		RobotomyRequestForm	form("badSignForm");

		badSignBureau.signForm(form);
		badSignBureau.executeForm(form);
	} catch (std::exception	&exception) {
		std::cout << BRED "[Form] " CRESET "Exception caught!" << std::endl;
		std::cout << exception.what() << std::endl;
	}
	
	/* Testing bad exec bureau */
	std::cout << BWHT << "-------" << CRESET << std::endl;
	try {
		std::cout << BWHT "[!] Bad exec bureau will try to sign and execute the form." CRESET << std::endl;
		RobotomyRequestForm	form("badExecForm");

		badExecBureau.signForm(form);
		badExecBureau.executeForm(form);
	} catch (std::exception	&exception) {
		std::cout << BRED "[Form] " CRESET "Exception caught!" << std::endl;
		std::cout << exception.what() << std::endl;
	}

	/* Tests done */
	std::cout << BWHT << "-------" << CRESET << std::endl;
	std::cout << BWHT "[!] RobotomyRequest tests are done." CRESET << std::endl;
}

void	testPresidential(void) {
	std::cout << BWHT "\n>>> RUNNING PRESIDENTIAL-PARDON TESTS\n" CRESET << std::endl;
	/* Creating needed bureau */
	Bureaucrat	goodBureau("Good Bureau", 1);
	Bureaucrat	badSignBureau("Bad Sign Bureau", 26);
	Bureaucrat	badExecBureau("Bad Exec Bureau", 6);
	
	/* Testing good bureau */
	std::cout << BWHT << "-------" << CRESET << std::endl;
	try {
		std::cout << BWHT "[!] Good bureau will try to sign and execute the form." CRESET << std::endl;
		PresidentialPardonForm	form("goodForm");

		goodBureau.signForm(form);
		goodBureau.executeForm(form);
	} catch (std::exception	&exception) {
		std::cout << BRED "[Form] " CRESET "Exception caught!" << std::endl;
		std::cout << exception.what() << std::endl;
	}

	/* Testing bad sign bureau */
	std::cout << BWHT << "-------" << CRESET << std::endl;
	try {
		std::cout << BWHT "[!] Bad sign bureau will try to sign and execute the form." CRESET << std::endl;
		PresidentialPardonForm	form("badSignForm");

		badSignBureau.signForm(form);
		badSignBureau.executeForm(form);
	} catch (std::exception	&exception) {
		std::cout << BRED "[Form] " CRESET "Exception caught!" << std::endl;
		std::cout << exception.what() << std::endl;
	}
	
	/* Testing bad exec bureau */
	std::cout << BWHT << "-------" << CRESET << std::endl;
	try {
		std::cout << BWHT "[!] Bad exec bureau will try to sign and execute the form." CRESET << std::endl;
		PresidentialPardonForm	form("badExecForm");

		badExecBureau.signForm(form);
		badExecBureau.executeForm(form);
	} catch (std::exception	&exception) {
		std::cout << BRED "[Form] " CRESET "Exception caught!" << std::endl;
		std::cout << exception.what() << std::endl;
	}

	/* Tests done */
	std::cout << BWHT << "-------" << CRESET << std::endl;
	std::cout << BWHT "[!] PresidentialPardon tests are done." CRESET << std::endl;
}

int	main(void)
{
	testShrubbery();
	testRobotomy();
	testPresidential();

	// Tests are done
	std::cout << BYEL "All tests completed. Want to check for leaks? Run 'make debug'" CRESET << std::endl;
	return (0);
}