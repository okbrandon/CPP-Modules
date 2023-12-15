/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 18:39:59 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/12/15 19:35:35 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

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
	/* Test with vector */
	std::cout << BWHT << "-------" << CRESET << std::endl;
	std::cout << BWHT "[!] Testing with vector." CRESET << std::endl;
	try {
		std::vector<int>	vect;
		int					search = 10;

		vect.push_back(2);
		vect.push_back(1);
		vect.push_back(3);
		vect.push_back(5);
		vect.push_back(4);

		std::vector<int>::iterator it = easyfind(vect, search);
		std::cout << "Found " BCYN << search << CRESET " at index " BCYN \
			<< std::distance(vect.begin(), it) << CRESET << std::endl;
	} catch (std::exception &exception) {
		std::cout << BRED "[EasyFind] " CRESET "Exception caught!" << std::endl;
		std::cout << exception.what() << std::endl;
	}
	/* Test with list */
	std::cout << BWHT << "-------" << CRESET << std::endl;
	std::cout << BWHT "[!] Testing with type int." CRESET << std::endl;
	try {
		std::list<char>	list;
		char			search = 'z';

		list.push_back('a');
		list.push_back('b');
		list.push_back('c');
		list.push_back('d');
		list.push_back('e');

		std::list<char>::iterator it = easyfind(list, search);
		std::cout << "Found " BCYN << search << CRESET " at index " BCYN \
			<< std::distance(list.begin(), it) << CRESET << std::endl;
	} catch (std::exception &exception) {
		std::cout << BRED "[EasyFind] " CRESET "Exception caught!" << std::endl;
		std::cout << exception.what() << std::endl;
	}

	/* Tests done */
	std::cout << BWHT << "-------" << CRESET << std::endl;
	std::cout << BWHT "[!] Exceptions tests are done." CRESET << std::endl;
}

void	testValid(void) {
	std::cout << BWHT "\n>>> RUNNING VALID TESTS\n" CRESET << std::endl;
	/* Test with vector */
	std::cout << BWHT << "-------" << CRESET << std::endl;
	std::cout << BWHT "[!] Testing with vector." CRESET << std::endl;
	try {
		std::vector<int>	vect;
		int					search = 5;

		vect.push_back(2);
		vect.push_back(1);
		vect.push_back(3);
		vect.push_back(5);
		vect.push_back(4);

		std::vector<int>::iterator it = easyfind(vect, search);
		std::cout << "Found " BCYN << search << CRESET " at index " BCYN \
			<< std::distance(vect.begin(), it) << CRESET << std::endl;
	} catch (std::exception &exception) {
		std::cout << BRED "[EasyFind] " CRESET "Exception caught!" << std::endl;
		std::cout << exception.what() << std::endl;
	}
	/* Test with list */
	std::cout << BWHT << "-------" << CRESET << std::endl;
	std::cout << BWHT "[!] Testing with type int." CRESET << std::endl;
	try {
		std::list<char>	list;
		char			search = 'd';

		list.push_back('a');
		list.push_back('b');
		list.push_back('c');
		list.push_back('d');
		list.push_back('e');

		std::list<char>::iterator it = easyfind(list, search);
		std::cout << "Found " BCYN << search << CRESET " at index " BCYN \
			<< std::distance(list.begin(), it) << CRESET << std::endl;
	} catch (std::exception &exception) {
		std::cout << BRED "[EasyFind] " CRESET "Exception caught!" << std::endl;
		std::cout << exception.what() << std::endl;
	}

	/* Tests done */
	std::cout << BWHT << "-------" << CRESET << std::endl;
	std::cout << BWHT "[!] Valid tests are done." CRESET << std::endl;
}

int	main(void) {
	testExceptions();
	testValid();
	return (0);
}