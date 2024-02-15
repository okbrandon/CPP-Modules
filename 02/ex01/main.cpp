/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 16:41:52 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/26 19:01:22 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

void	testSubject(void) {
	std::cout << BWHT "\n>>> RUNNNING SUBJECT TESTS\n" CRESET << std::endl;
	Fixed		a;
	Fixed const	b(10);
	Fixed const	c(42.42f);
	Fixed const	d(b);

	a = Fixed(1234.4321f);

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
}

void	testToFloat(void) {
	std::cout << BWHT "\n>>> RUNNNING TO_FLOAT TESTS\n" CRESET << std::endl;
	Fixed const	a(10);

	std::cout << "a is " << a << std::endl;
	std::cout << "a is " << a.toFloat() << " as float" << std::endl;
}

int	main(void) {
	testSubject();
	testToFloat();

	// Tests are done
	std::cout << BYEL "All tests completed. Want to check for leaks? Run 'make debug'" CRESET << std::endl;
	return (0);
}