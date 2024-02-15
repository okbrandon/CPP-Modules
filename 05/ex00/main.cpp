/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:06:49 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/11/20 11:27:49 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void	testExceptions(void) {
	std::cout << BWHT "\n>>> RUNNING EXCEPTION TESTS\n" CRESET << std::endl;
	/* Creating a Bureaucrat with a too high grade */
	try {
		Bureaucrat	dummy("Dummy", 0);
	} catch (std::exception	&exception) {
		std::cout << BRED "[Bureaucrat] " CRESET "Exception caught!" << std::endl;
		std::cout << exception.what() << std::endl;
	}
	/* Creating a Bureaucrat with a too low grade */
	try {
		Bureaucrat	dummy("Dummy", 151);
	} catch (std::exception &exception) {
		std::cout << BRED "[Bureaucrat] " CRESET "Exception caught!" << std::endl;
		std::cout << exception.what() << std::endl;
	}
}

void	testGradeIncrementation(void) {
	std::cout << BWHT "\n>>> RUNNING GRADE INCR TESTS\n" CRESET << std::endl;
	/* Incrementation until exception */
	Bureaucrat	dummy("Dummy", 4);

	for (int i = 0; i < 4; i++) {
		try {
			dummy.incrementGrade();
		} catch (std::exception &exception) {
			std::cout << BRED "[Bureaucrat] " CRESET "Exception caught!" << std::endl;
			std::cout << exception.what() << std::endl;
		}
	}
}

void	testGradeDecrementation(void) {
	std::cout << BWHT "\n>>> RUNNING GRADE DECR TESTS\n" CRESET << std::endl;
	/* Incrementation until exception */
	Bureaucrat	dummy("Dummy", 147);

	for (int i = 0; i < 4; i++) {
		try {
			dummy.decrementGrade();
		} catch (std::exception &exception) {
			std::cout << BRED "[Bureaucrat] " CRESET "Exception caught!" << std::endl;
			std::cout << exception.what() << std::endl;
		}
	}
}

void	testGetters(void) {
	std::cout << BWHT "\n>>> RUNNING GETTERS TESTS\n" CRESET << std::endl;
	/* Getting attributes */
	Bureaucrat	dummy("Dummy", 42);

	std::cout << "What's your name? " BCYN << dummy.getName() << CRESET << std::endl;
	std::cout << "What's your grade? " BCYN << dummy.getGrade() << CRESET << std::endl;
}

void	testStreamInsertion(void) {
	std::cout << BWHT "\n>>> RUNNING STREAM INSERT TESTS\n" CRESET << std::endl;
	/* Calling operator << */
	Bureaucrat	dummy("Dummy", 21);
	
	std::cout << dummy << std::endl;
}

int	main(void)
{
	testExceptions();
	testGradeIncrementation();
	testGradeDecrementation();
	testGetters();
	testStreamInsertion();

	// Tests are done
	std::cout << BYEL "All tests completed. Want to check for leaks? Run 'make debug'" CRESET << std::endl;
	return (0);
}