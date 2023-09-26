/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 16:41:52 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/26 19:26:25 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

void	testSubject(void) {
	std::cout << BWHT "\n>>> RUNNNING SUBJECT TESTS\n" CRESET << std::endl;
	Fixed		a;
	Fixed const	b(Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max(a, b) << std::endl;
}

void	testMinMax(void) {
	std::cout << BWHT "\n>>> RUNNNING MIN & MAX TESTS\n" CRESET << std::endl;
	Fixed		a(42);
	Fixed		b(24);
	Fixed		c(24.1f);
	
	std::cout << "a=" << a << std::endl;
	std::cout << "b=" << b << std::endl;
	std::cout << "c=" << c << std::endl;

	std::cout << BWHT "Comparing a and b... Displaying the minimal one." CRESET << std::endl;
	std::cout << "min=" << Fixed::min(a, b) << std::endl;

	std::cout << BWHT "Comparing b and c... Displaying the minimal one." CRESET << std::endl;
	std::cout << "min=" << Fixed::min(b, c) << std::endl;

	std::cout << BWHT "Comparing a and b... Displaying the maximal one." CRESET << std::endl;
	std::cout << "max=" << Fixed::max(a, b) << std::endl;

	std::cout << BWHT "Comparing b and c... Displaying the maximal one." CRESET << std::endl;
	std::cout << "max=" << Fixed::max(b, c) << std::endl;
}

void	testComparison(void) {
	std::cout << BWHT "\n>>> RUNNNING COMPARISON TESTS\n" CRESET << std::endl;
	Fixed		a(42);
	Fixed		b(24);
	Fixed		c(42);
	
	std::cout << "a=" << a << std::endl;
	std::cout << "b=" << b << std::endl;
	std::cout << "c=" << c << std::endl;

	std::cout << BWHT "Is a smaller than b? " CRESET << (a < b ? BGRN "yes" CRESET : BRED "no" CRESET) << std::endl;
	std::cout << BWHT "Is a greather than b? " CRESET << (a > b ? BGRN "yes" CRESET : BRED "no" CRESET) << std::endl;
	std::cout << BWHT "Is a smaller or equal to b? " CRESET << (a <= b ? BGRN "yes" CRESET : BRED "no" CRESET) << std::endl;
	std::cout << BWHT "Is a smaller or equal to c? " CRESET << (a <= c ? BGRN "yes" CRESET : BRED "no" CRESET) << std::endl;
	std::cout << BWHT "Is a greather or equal to b? " CRESET << (a >= b ? BGRN "yes" CRESET : BRED "no" CRESET) << std::endl;
	std::cout << BWHT "Is a greather or equal to c? " CRESET << (a >= c ? BGRN "yes" CRESET : BRED "no" CRESET) << std::endl;
	std::cout << BWHT "Is a strictly equal to b? " CRESET << (a == b ? BGRN "yes" CRESET : BRED "no" CRESET) << std::endl;
	std::cout << BWHT "Is a strictly equal to c? " CRESET << (a == c ? BGRN "yes" CRESET : BRED "no" CRESET) << std::endl;
	std::cout << BWHT "Is a not strictly equal to b? " CRESET << (a != b ? BGRN "yes" CRESET : BRED "no" CRESET) << std::endl;
	std::cout << BWHT "Is a not strictly equal to c? " CRESET << (a != c ? BGRN "yes" CRESET : BRED "no" CRESET) << std::endl;
}

void	testOperators(void) {
	std::cout << BWHT "\n>>> RUNNNING COMPARISON TESTS\n" CRESET << std::endl;
	Fixed		a(42);
	Fixed		b(24);
	Fixed		c(42);
	
	std::cout << "a=" << a << std::endl;
	std::cout << "b=" << b << std::endl;
	std::cout << "c=" << c << std::endl;

	std::cout << BWHT "Let's add b to a, the result is... " BCYN << a + b << CRESET << std::endl;
	std::cout << BWHT "Let's add b to c, the result is..." BCYN << c + b << CRESET << std::endl;
	std::cout << BWHT "Let's substract b from a, the result is... " BCYN << a - b << CRESET << std::endl;
	std::cout << BWHT "Let's substract b from c, the result is... " BCYN << c - b << CRESET << std::endl;
	std::cout << BWHT "Let's multiply a and b, the result is... " BCYN << a * b << CRESET << std::endl;
	std::cout << BWHT "Let's multiply a and c, the result is... " BCYN << a * c << CRESET << std::endl;
	std::cout << BWHT "Let's divide a by b, the result is... " BCYN << a / b << CRESET << std::endl;
	std::cout << BWHT "Let's divide a by c, the result is... " BCYN << a / c << CRESET << std::endl;

}

int	main(void) {
	testSubject();
	testMinMax();
	testComparison();
	testOperators();

	// Tests are done
	std::cout << BYEL "All tests completed. Want to check for leaks? Run 'make debug'" CRESET << std::endl;
	return (0);
}