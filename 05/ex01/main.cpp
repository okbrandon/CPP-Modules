/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:06:49 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/12/07 12:07:34 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

void	testExceptions(void) {
	std::cout << BWHT "\n>>> RUNNING EXCEPTION TESTS\n" CRESET << std::endl;
	/* Creating a Form with a too high sign grade */
	std::cout << BWHT "[!] Testing exceptions on sign grade." CRESET << std::endl;
	try {
		Form	dummy("Dummy", 0, 1);
	} catch (std::exception	&exception) {
		std::cout << BRED "[Form] " CRESET "Exception caught!" << std::endl;
		std::cout << exception.what() << std::endl;
	}
	/* Creating a Form with a too low sign grade */
	try {
		Form	dummy("Dummy", 151, 1);
	} catch (std::exception &exception) {
		std::cout << BRED "[Form] " CRESET "Exception caught!" << std::endl;
		std::cout << exception.what() << std::endl;
	}
	/* Creating a Form with a too high exec grade */
	std::cout << BWHT << "-------" << CRESET << std::endl;
	std::cout << BWHT "[!] Testing exceptions on exec grade." CRESET << std::endl;
	try {
		Form	dummy("Dummy", 1, 0);
	} catch (std::exception	&exception) {
		std::cout << BRED "[Form] " CRESET "Exception caught!" << std::endl;
		std::cout << exception.what() << std::endl;
	}
	/* Creating a Form with a too low exec grade */
	try {
		Form	dummy("Dummy", 1, 151);
	} catch (std::exception &exception) {
		std::cout << BRED "[Form] " CRESET "Exception caught!" << std::endl;
		std::cout << exception.what() << std::endl;
	}

	/* Tests done */
	std::cout << BWHT << "-------" << CRESET << std::endl;
	std::cout << BWHT "[!] Exceptions tests are done." CRESET << std::endl;
}

void	testSign(void) {
	std::cout << BWHT "\n>>> RUNNING FORM SIGNING TESTS\n" CRESET << std::endl;
	Form	dummyForm("Dummy Form", 21, 1); // Required grade from 1 to 21 included
	/* Bureaucrat is signing with a too low grade */
	Bureaucrat	badBureaucrat("Bad Bureaucrat", 22);
	badBureaucrat.signForm(dummyForm);
	/* Bureaucrat is signing with a required grade */
	Bureaucrat	goodBureaucrat("Good Bureaucrat", 21);
	goodBureaucrat.signForm(dummyForm);
}

void	testGetters(void) {
	std::cout << BWHT "\n>>> RUNNING GETTERS TESTS\n" CRESET << std::endl;
	/* Getting attributes */
	Form	dummy("Dummy", 42, 1);

	std::cout << "What's your name? " BCYN << dummy.getName() << CRESET << std::endl;
	std::cout << "Are you signed? " << (!dummy.isSigned() ? BRED"no" : BGRN"yes") << CRESET << std::endl;
	std::cout << "What's your required sign grade? " BCYN << dummy.getRequiredSign() << CRESET << std::endl;
	std::cout << "What's your required exec grade? " BCYN << dummy.getRequiredExec() << CRESET << std::endl;
}

void	testStreamInsertion(void) {
	std::cout << BWHT "\n>>> RUNNING STREAM INSERT TESTS\n" CRESET << std::endl;
	/* Calling operator << */
	Form	dummy("Dummy", 21, 1);
	
	std::cout << dummy << std::endl;
}

int	main(void)
{
	testExceptions();
	testSign();
	testGetters();
	testStreamInsertion();

	// Tests are done
	std::cout << BYEL "All tests completed. Want to check for leaks? Run 'make debug'" CRESET << std::endl;
	return (0);
}