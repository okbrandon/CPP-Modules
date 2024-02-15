/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 16:41:52 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/26 18:54:27 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

void	testSubject(void) {
	std::cout << BWHT "\n>>> RUNNNING SUBJECT TESTS\n" CRESET << std::endl;
	Fixed	a;
	Fixed	b(a);
	Fixed	c;

	c = b;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
}

void	testSetter(void) {
	std::cout << BWHT "\n>>> RUNNNING SETTER TESTS\n" CRESET << std::endl;
	Fixed	a;
	
	a.setRawBits(42);
	std::cout << a.getRawBits() << std::endl;
}

int	main(void) {
	testSubject();
	testSetter();

	// Tests are done
	std::cout << BYEL "All tests completed. Want to check for leaks? Run 'make debug'" CRESET << std::endl;
	return (0);
}