/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 13:54:36 by bsoubaig          #+#    #+#             */
/*   Updated: 2024/01/08 11:00:32 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#define BRED	"\033[1;31m"
#define BGRN	"\033[1;32m"
#define BYEL	"\033[1;33m"
#define BBLU	"\033[1;34m"
#define BMAG	"\033[1;35m"
#define BCYN	"\033[1;36m"
#define BWHT	"\033[1;37m"
#define CRESET	"\033[0m"

void	testExceptions(void) {
	std::cout << BWHT "\n>>> RUNNING EXCEPTIONS TESTS\n" CRESET << std::endl;
	/* Accessing index out of bounds */
	std::cout << BWHT << "-------" << CRESET << std::endl;
	std::cout << BWHT "[!] Accessing index 6 in array of 4" CRESET << std::endl;
	try {
		Array<int>	arr(4);

		arr[6] = 2;
	} catch (std::exception &exception) {
		std::cout << BRED "[Array] " CRESET "Exception caught!" << std::endl;
		std::cout << exception.what() << std::endl;
	}
	std::cout << BWHT << "-------" << CRESET << std::endl;
	std::cout << BWHT "[!] Accessing index -2 in array of 4" CRESET << std::endl;
	try {
		Array<int>	arr(4);

		arr[-2] = 2;
	} catch (std::exception &exception) {
		std::cout << BRED "[Array] " CRESET "Exception caught!" << std::endl;
		std::cout << exception.what() << std::endl;
	}

	/* Tests done */
	std::cout << BWHT << "-------" << CRESET << std::endl;
	std::cout << BWHT "[!] Exceptions tests are done." CRESET << std::endl;
}

void	testValid(void) {
	std::cout << BWHT "\n>>> RUNNING VALID TESTS\n" CRESET << std::endl;
	/* Accessing valid index */
	std::cout << BWHT << "-------" << CRESET << std::endl;
	std::cout << BWHT "[!] Accessing index 2 in array of 4" CRESET << std::endl;
	try {
		Array<int>	arr(4);

		std::cout << "arr[2] before: " BCYN << arr[2] << CRESET << std::endl;
		arr[2] = 42;
		std::cout << "arr[2] after: " BCYN << arr[2] << CRESET << std::endl;
	} catch (std::exception &exception) {
		std::cout << BRED "[Array] " CRESET "Exception caught!" << std::endl;
		std::cout << exception.what() << std::endl;
	}
	/* Iterating over array of 4 */
	std::cout << BWHT << "-------" << CRESET << std::endl;
	std::cout << BWHT "[!] Interating in array of 4" CRESET << std::endl;
	try {
		Array<char>	arr(4);

		for (int i = 0; i < 4; i++)
			arr[i] = 'a' + i;
		for (int i = 0; i < 4; i++)
			std::cout << "arr[" << i << "] = " BCYN << arr[i] << CRESET << std::endl;
	} catch (std::exception &exception) {
		std::cout << BRED "[Array] " CRESET "Exception caught!" << std::endl;
		std::cout << exception.what() << std::endl;
	}

	/* Tests done */
	std::cout << BWHT << "-------" << CRESET << std::endl;
	std::cout << BWHT "[!] Valid tests are done." CRESET << std::endl;
}

/* Complex class */
class Complex {
	
	private:
		int	_value;

	public:
		Complex(void): _value(0) {}
		Complex(int value): _value(value) {}
		Complex	&operator=(const Complex &origin) { _value = origin._value; return (*this); }
		int		getValue(void) const { return _value; }
		void	setValue(int value) { _value = value; }

};

void	testComplexType(void) {
	std::cout << BWHT "\n>>> RUNNING COMPLEX TESTS\n" CRESET << std::endl;
	/* Iterating over array of Complex */
	try {
		Array<Complex>	arr(4);

		for (int i = 0; i < 4; i++)
			arr[i].setValue(i + 1);
		for (int i = 0; i < 4; i++)
			std::cout << "arr[" << i << "] = " BCYN << arr[i].getValue() << CRESET << std::endl;
	} catch (std::exception &exception) {
		std::cout << BRED "[Array] " CRESET "Exception caught!" << std::endl;
		std::cout << exception.what() << std::endl;
	}
}

int	main(void) {
	testExceptions();
	testValid();
	testComplexType();
	return (0);
}