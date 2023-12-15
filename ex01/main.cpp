/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 11:23:43 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/11/29 12:17:27 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

#define BRED	"\033[1;31m"
#define BGRN	"\033[1;32m"
#define BYEL	"\033[1;33m"
#define BBLU	"\033[1;34m"
#define BMAG	"\033[1;35m"
#define BCYN	"\033[1;36m"
#define BWHT	"\033[1;37m"
#define CRESET	"\033[0m"

void	testPrint(void) {
	std::cout << BWHT "\n>>> RUNNING PRINT TESTS\n" CRESET << std::endl;
	/* Printing each elem of int array */
	std::cout << BWHT << "-------" << CRESET << std::endl;
	std::cout << BWHT "[!] Testing with type int." CRESET << std::endl;
	{
		int	arr[6] = {1, 2, 3, 4, 5, 6};

		std::cout << BCYN << std::endl;
		::iter(arr, 6, &display<int>);
		std::cout << CRESET << std::endl;
	}
	/* Printing each elem of char array */
	std::cout << BWHT << "-------" << CRESET << std::endl;
	std::cout << BWHT "[!] Testing with type char." CRESET << std::endl;
	{
		char	arr[5] = {'a', 'b', 'c', 'd', 'e'};
		
		std::cout << BCYN << std::endl;
		::iter(arr, 5, &display<char>);
		std::cout << CRESET << std::endl;
	}
	/* Printing each elem of string array */
	std::cout << BWHT << "-------" << CRESET << std::endl;
	std::cout << BWHT "[!] Testing with type string." CRESET << std::endl;
	{
		std::string	arr[3] = {"Hello", "World", "!"};

		std::cout << BCYN << std::endl;
		::iter(arr, 3, &display<std::string>);
		std::cout << CRESET << std::endl;
	}

	/* Tests done */
	std::cout << BWHT << "-------" << CRESET << std::endl;
	std::cout << BWHT "[!] Print tests are done." CRESET << std::endl;
}

void	testIncr(void) {
	std::cout << BWHT "\n>>> RUNNING INCR TESTS\n" CRESET << std::endl;
	/* Incrementing each elem of int array */
	std::cout << BWHT << "-------" << CRESET << std::endl;
	std::cout << BWHT "[!] Testing with type int." CRESET << std::endl;
	{
		int	arr[6] = {1, 2, 3, 4, 5, 6};

		std::cout << BYEL "Before incrementation..." << CRESET << std::endl;
		std::cout << BCYN << std::endl;
		::iter(arr, 6, &display<int>);
		std::cout << CRESET << std::endl;
		::iter(arr, 6, &incr<int>);
		std::cout << BYEL "After incrementation..." << CRESET << std::endl;
		std::cout << BCYN << std::endl;
		::iter(arr, 6, &display<int>);
		std::cout << CRESET << std::endl;
	}
	/* Incrementing each elem of char array */
	std::cout << BWHT << "-------" << CRESET << std::endl;
	std::cout << BWHT "[!] Testing with type char." CRESET << std::endl;
	{
		char	arr[5] = {'a', 'b', 'c', 'd', 'e'};
		
		std::cout << BYEL "Before incrementation..." << CRESET << std::endl;
		std::cout << BCYN << std::endl;
		::iter(arr, 5, &display<char>);
		std::cout << CRESET << std::endl;
		::iter(arr, 5, &incr<char>);
		std::cout << BYEL "After incrementation..." << CRESET << std::endl;
		std::cout << BCYN << std::endl;
		::iter(arr, 5, &display<char>);
		std::cout << CRESET << std::endl;
	}

	/* Tests done */
	std::cout << BWHT << "-------" << CRESET << std::endl;
	std::cout << BWHT "[!] Incr tests are done." CRESET << std::endl;
}

void	testDecr(void) {
	std::cout << BWHT "\n>>> RUNNING DECR TESTS\n" CRESET << std::endl;
	/* Decrementing each elem of int array */
	std::cout << BWHT << "-------" << CRESET << std::endl;
	std::cout << BWHT "[!] Testing with type int." CRESET << std::endl;
	{
		int	arr[6] = {1, 2, 3, 4, 5, 6};

		std::cout << BYEL "Before decrementation..." << CRESET << std::endl;
		std::cout << BCYN << std::endl;
		::iter(arr, 6, &display<int>);
		std::cout << CRESET << std::endl;
		::iter(arr, 6, &decr<int>);
		std::cout << BYEL "After decrementation..." << CRESET << std::endl;
		std::cout << BCYN << std::endl;
		::iter(arr, 6, &display<int>);
		std::cout << CRESET << std::endl;
	}
	/* Decrementing each elem of char array */
	std::cout << BWHT << "-------" << CRESET << std::endl;
	std::cout << BWHT "[!] Testing with type char." CRESET << std::endl;
	{
		char	arr[5] = {'a', 'b', 'c', 'd', 'e'};
		
		std::cout << BYEL "Before decrementation..." << CRESET << std::endl;
		std::cout << BCYN << std::endl;
		::iter(arr, 5, &display<char>);
		std::cout << CRESET << std::endl;
		::iter(arr, 5, &decr<char>);
		std::cout << BYEL "After decrementation..." << CRESET << std::endl;
		std::cout << BCYN << std::endl;
		::iter(arr, 5, &display<char>);
		std::cout << CRESET << std::endl;
	}

	/* Tests done */
	std::cout << BWHT << "-------" << CRESET << std::endl;
	std::cout << BWHT "[!] Decr tests are done." CRESET << std::endl;
}

int	main(void) {
	testPrint();
	testIncr();
	testDecr();
	return (0);
}