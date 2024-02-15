/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 16:19:44 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/12/19 18:58:31 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void	testSubject(void) {
	std::cout << BWHT "\n>>> RUNNING SUBJECT TESTS\n" CRESET << std::endl;
	Span	sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

void	testExceptions(void) {
	std::cout << BWHT "\n>>> RUNNING EXCEPTIONS TESTS\n" CRESET << std::endl;
	/* Overfilling the span */
	std::cout << BWHT << "-------" << CRESET << std::endl;
	std::cout << BWHT "[!] Overfilling the span." << std::endl;
	try {
		Span	sp = Span(2);

		sp.addNumber(1);
		sp.addNumber(2);
		sp.addNumber(3);
	} catch (std::exception &exception) {
		std::cout << BRED "[Span] " CRESET "Exception caught!" << std::endl;
		std::cout << exception.what() << std::endl;
	}
	/* Getting shortest span without enough values */
	std::cout << BWHT << "-------" << CRESET << std::endl;
	std::cout << BWHT "[!] Requesting shortest span without enough values." << std::endl;
	try {
		Span	sp = Span(1);

		sp.addNumber(1);
		std::cout << sp.shortestSpan() << std::endl;
	} catch (std::exception &exception) {
		std::cout << BRED "[Span] " CRESET "Exception caught!" << std::endl;
		std::cout << exception.what() << std::endl;
	}
	/* Getting longest span without enough values */
	std::cout << BWHT << "-------" << CRESET << std::endl;
	std::cout << BWHT "[!] Requesting longest span without enough values." << std::endl;
	try {
		Span	sp = Span(1);

		sp.addNumber(1);
		std::cout << sp.longestSpan() << std::endl;
	} catch (std::exception &exception) {
		std::cout << BRED "[Span] " CRESET "Exception caught!" << std::endl;
		std::cout << exception.what() << std::endl;
	}

	/* Tests done */
	std::cout << BWHT << "-------" << CRESET << std::endl;
	std::cout << BWHT "[!] Exceptions tests are done." CRESET << std::endl;
}

void	testRandomFill(void) {
	std::cout << BWHT "\n>>> RUNNING RANDOM-FILL TESTS\n" CRESET << std::endl;
	/* Randomly filling span, getting shortest and longest */
	try {
		Span	sp = Span(10000);

		sp.randomFill(10000);
		std::cout << "Shortest span: " BCYN << sp.shortestSpan() << CRESET << std::endl;
		std::cout << "Longest span: " BCYN << sp.longestSpan() << CRESET << std::endl;
	} catch (std::exception &exception) {
		std::cout << BRED "[Span] " CRESET "Exception caught!" << std::endl;
		std::cout << exception.what() << std::endl;
	}
}

int	main(void) {
	testSubject();
	testExceptions();
	testRandomFill();

	// Tests are done
	std::cout << BYEL "All tests completed. Want to check for leaks? Run 'make debug'" CRESET << std::endl;
	return (0);
}