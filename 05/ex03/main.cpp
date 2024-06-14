/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:06:49 by bsoubaig          #+#    #+#             */
/*   Updated: 2024/06/14 14:20:38 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

void	testExceptions(void) {
	std::cout << BWHT "\n>>> RUNNING EXCEPTIONS TESTS\n" CRESET << std::endl;
	/* Trying to make an unknown form */
	try {
		Intern	someRandomIntern;
		
		someRandomIntern.makeForm("Unknown form", "Useless");
	} catch (std::exception &exception) {
		std::cout << BRED "[Intern] " CRESET "Exception caught!" << std::endl;
		std::cout << exception.what() << std::endl;
	}

	/* Tests done */
	std::cout << BWHT << "-------" << CRESET << std::endl;
	std::cout << BWHT "[!] Exceptions tests are done." CRESET << std::endl;
}

void	testValidForms(void) {
	std::cout << BWHT "\n>>> RUNNING VALID-FORMS TESTS\n" CRESET << std::endl;
	/* Making ShrubberyCreationForm */
	std::cout << BWHT << "-------" << CRESET << std::endl;
	try {
		std::cout << BWHT "[!] Making ShrubberyCreationForm." CRESET << std::endl;
		Intern	someRandomIntern;
		AForm	*ref;
		
		ref = someRandomIntern.makeForm("ShrubberyCreationForm", "some target");
		delete ref;
	} catch (std::exception &exception) {
		std::cout << BRED "[Intern] " CRESET "Exception caught!" << std::endl;
		std::cout << exception.what() << std::endl;
	}
	/* Making RobotomyRequestForm */
	std::cout << BWHT << "-------" << CRESET << std::endl;
	try {
		std::cout << BWHT "[!] Making RobotomyRequestForm." CRESET << std::endl;
		Intern	someRandomIntern;
		AForm	*ref;
		
		ref = someRandomIntern.makeForm("RobotomyRequestForm", "some target");
		delete ref;
	} catch (std::exception &exception) {
		std::cout << BRED "[Intern] " CRESET "Exception caught!" << std::endl;
		std::cout << exception.what() << std::endl;
	}
	/* Making PresidentialPardonForm */
	std::cout << BWHT << "-------" << CRESET << std::endl;
	try {
		std::cout << BWHT "[!] Making PresidentialPardonForm." CRESET << std::endl;
		Intern	someRandomIntern;
		AForm	*ref;
		
		ref = someRandomIntern.makeForm("PresidentialPardonForm", "some target");
		delete ref;
	} catch (std::exception &exception) {
		std::cout << BRED "[Intern] " CRESET "Exception caught!" << std::endl;
		std::cout << exception.what() << std::endl;
	}

	/* Tests done */
	std::cout << BWHT << "-------" << CRESET << std::endl;
	std::cout << BWHT "[!] Valid tests are done." CRESET << std::endl;
}

int	main(void)
{
	testExceptions();
	testValidForms();

	// Tests are done
	std::cout << BYEL "All tests completed. Want to check for leaks? Run 'make debug'" CRESET << std::endl;
	return (0);
}