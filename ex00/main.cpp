/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 16:14:43 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/11/24 16:33:25 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

#define BRED	"\e[1;31m"
#define BGRN	"\e[1;32m"
#define BYEL	"\e[1;33m"
#define BBLU	"\e[1;34m"
#define BMAG	"\e[1;35m"
#define BCYN	"\e[1;36m"
#define BWHT	"\e[1;37m"
#define CRESET	"\e[0m"

void	testSwap(void) {
	std::cout << BWHT "\n>>> RUNNING SWAP TESTS\n" CRESET << std::endl;
	/* Test with integers */
	std::cout << BWHT << "-------" << CRESET << std::endl;
	std::cout << BWHT "[!] Testing with type int." CRESET << std::endl;
	{
		int	a = 1;
		int	b = 2;

		std::cout << "a = " BCYN << a << CRESET " | b = " BCYN << b << CRESET << std::endl;
		swap(&a, &b);
		std::cout << "a = " BCYN << a << CRESET " | b = " BCYN << b << CRESET << std::endl;
	}
	/* Test with character */
	std::cout << BWHT << "-------" << CRESET << std::endl;
	std::cout << BWHT "[!] Testing with type char." CRESET << std::endl;
	{
		char	a = 'a';
		char	b = 'b';

		std::cout << "a = '" BCYN << a << CRESET "' | b = '" BCYN << b << CRESET "'" << std::endl;
		swap(&a, &b);
		std::cout << "a = '" BCYN << a << CRESET "' | b = '" BCYN << b << CRESET "'" << std::endl;
	}
	/* Test with string */
	std::cout << BWHT << "-------" << CRESET << std::endl;
	std::cout << BWHT "[!] Testing with type string." CRESET << std::endl;
	{
		std::string	a = "Hello";
		std::string	b = "World";

		std::cout << "a = \"" BCYN << a << CRESET "\" | b = \"" BCYN << b << CRESET "\"" << std::endl;
		swap(&a, &b);
		std::cout << "a = \"" BCYN << a << CRESET "\" | b = \"" BCYN << b << CRESET "\"" << std::endl;
	}

	/* Tests done */
	std::cout << BWHT << "-------" << CRESET << std::endl;
	std::cout << BWHT "[!] Swap tests are done." CRESET << std::endl;
}

void	testMin(void) {
	std::cout << BWHT "\n>>> RUNNING MIN TESTS\n" CRESET << std::endl;
	/* Test with integers */
	std::cout << BWHT << "-------" << CRESET << std::endl;
	std::cout << BWHT "[!] Testing with type int." CRESET << std::endl;
	{
		int	a = 1;
		int	b = 2;

		std::cout << "a = " BCYN << a << CRESET " | b = " BCYN << b << CRESET << std::endl;
		std::cout << "min(a, b) = " BCYN << min(a, b) << CRESET << std::endl;
	}
	/* Test with character */
	std::cout << BWHT << "-------" << CRESET << std::endl;
	std::cout << BWHT "[!] Testing with type char." CRESET << std::endl;
	{
		char	a = 'a';
		char	b = 'b';

		std::cout << "a = '" BCYN << a << CRESET "' | b = '" BCYN << b << CRESET "'" << std::endl;
		std::cout << "min(a, b) = '" BCYN << min(a, b) << CRESET "'" << std::endl;
	}
	/* Test with string */
	std::cout << BWHT << "-------" << CRESET << std::endl;
	std::cout << BWHT "[!] Testing with type string." CRESET << std::endl;
	{
		std::string	a = "Hello";
		std::string	b = "World";

		std::cout << "a = \"" BCYN << a << CRESET "\" | b = \"" BCYN << b << CRESET "\"" << std::endl;
		std::cout << "min(a, b) = \"" BCYN << min(a, b) << CRESET "\"" << std::endl;
	}

	/* Tests done */
	std::cout << BWHT << "-------" << CRESET << std::endl;
	std::cout << BWHT "[!] Min tests are done." CRESET << std::endl;
}

void	testMax(void) {
	std::cout << BWHT "\n>>> RUNNING MAX TESTS\n" CRESET << std::endl;
	/* Test with integers */
	std::cout << BWHT << "-------" << CRESET << std::endl;
	std::cout << BWHT "[!] Testing with type int." CRESET << std::endl;
	{
		int	a = 1;
		int	b = 2;

		std::cout << "a = " BCYN << a << CRESET " | b = " BCYN << b << CRESET << std::endl;
		std::cout << "max(a, b) = " BCYN << max(a, b) << CRESET << std::endl;
	}
	/* Test with character */
	std::cout << BWHT << "-------" << CRESET << std::endl;
	std::cout << BWHT "[!] Testing with type char." CRESET << std::endl;
	{
		char	a = 'a';
		char	b = 'b';

		std::cout << "a = '" BCYN << a << CRESET "' | b = '" BCYN << b << CRESET "'" << std::endl;
		std::cout << "max(a, b) = '" BCYN << max(a, b) << CRESET "'" << std::endl;
	}
	/* Test with string */
	std::cout << BWHT << "-------" << CRESET << std::endl;
	std::cout << BWHT "[!] Testing with type string." CRESET << std::endl;
	{
		std::string	a = "Hello";
		std::string	b = "World";

		std::cout << "a = \"" BCYN << a << CRESET "\" | b = \"" BCYN << b << CRESET "\"" << std::endl;
		std::cout << "max(a, b) = \"" BCYN << max(a, b) << CRESET "\"" << std::endl;
	}

	/* Tests done */
	std::cout << BWHT << "-------" << CRESET << std::endl;
	std::cout << BWHT "[!] Max tests are done." CRESET << std::endl;
}

int	main(void) {
	testSwap();
	testMin();
	testMax();

	// Tests are done
	std::cout << BYEL "All tests completed. Want to check for leaks? Run 'make debug'" CRESET << std::endl;
	return (0);
}