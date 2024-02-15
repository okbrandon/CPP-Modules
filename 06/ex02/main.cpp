/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 11:11:53 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/12/19 14:04:55 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>
#include <cstdlib>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#define BRED	"\033[1;31m"
#define BGRN	"\033[1;32m"
#define BYEL	"\033[1;33m"
#define BBLU	"\033[1;34m"
#define BMAG	"\033[1;35m"
#define BCYN	"\033[1;36m"
#define BWHT	"\033[1;37m"
#define CRESET	"\033[0m"

Base	*generate(void) {
	int	rand = std::rand() % 3;

	if (rand == 0) {
		std::cout << BGRN "[Base] " CRESET "A class generated" << std::endl;
		return (new A());
	}
	else if (rand == 1) {
		std::cout << BGRN "[Base] " CRESET "B class generated" << std::endl;
		return (new B());	
	} else {
		std::cout << BGRN "[Base] " CRESET "C class generated" << std::endl;
		return (new C());
	}
}

void	identify(Base *p) {
	if (dynamic_cast<A*>(p))
		std::cout << BYEL "[Base] " CRESET "Identify as " BCYN "A" CRESET << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << BYEL "[Base] " CRESET "Identify as " BCYN "B" CRESET << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << BYEL "[Base] " CRESET "Identify as " BCYN "C" CRESET << std::endl;
	else
		std::cout << BRED "[Base] " CRESET "An error occured while identifying" << std::endl;
}

void	identify(Base &p) {
	try {
		A	&tmp = dynamic_cast<A&>(p);
		
		std::cout << BYEL "[Base] " CRESET "Identify as " BCYN "A" CRESET << std::endl;
		(void)tmp;
		return ;
	} catch (std::exception &exception) {}
	try {
		B	&tmp = dynamic_cast<B&>(p);
		
		std::cout << BYEL "[Base] " CRESET "Identify as " BCYN "B" CRESET << std::endl;
		(void)tmp;
		return ;
	} catch (std::exception &exception) {}
	try {
		C	&tmp = dynamic_cast<C&>(p);
		
		std::cout << BYEL "[Base] " CRESET "Identify as " BCYN "C" CRESET << std::endl;
		(void)tmp;
		return ;
	} catch (std::exception &exception) {}
	std::cout << BRED "[Base] " CRESET "An error occured while identifying" << std::endl;
}

int	main(void) {
	Base	*base;

	srand(time(NULL));
	std::cout << BWHT "\n>>> RUNNING SUBJECT TESTS\n" CRESET << std::endl;
	/* Generating random class */
	base = generate();
	identify(base);
	identify(*base);
	delete base;

	// Tests are done
	std::cout << BYEL "All tests completed. Want to check for leaks? Run 'make debug'" CRESET << std::endl;
	return (0);
}