/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 13:09:39 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/14 12:35:00 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#define C_RESET 	"\x1b[0m"
#define C_RED		"\x1b[31m\x1b[1m"
#define C_GRY		"\x1b[90m\x1b[1m"
#define C_GRN		"\x1b[32m\x1b[1m"

int	main(void) {
	AAnimal	*animals[4];

	std::cout << C_RED "Filling array of Animal objects..." C_RESET << std::endl;

	for (int i = 0; i < 4; i++) {
		if (i < 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	std::cout << C_RED "Filling done. Deleting every Animal..." C_RESET << std::endl;

	for (int i = 0; i < 4; i++)
		delete animals[i];
	
	std::cout << C_GRY "-----------------------------------" C_RESET << std::endl;
	// -----------------------------------
	std::cout << C_RED "Deep copying Dog class using copy constructor..." C_RESET << std::endl;
	Dog *dogA = new Dog();
	Dog *dogB = new Dog(*dogA);
	
	(void) dogB;

	delete dogA;
	delete dogB;

	std::cout << C_RED "Deep copying Cat class using copy constructor..." C_RESET << std::endl;
	Cat *catA = new Cat();
	Cat *catB = new Cat(*catA);
	
	(void) catB;

	delete catA;
	delete catB;
	
	std::cout << C_GRY "-----------------------------------" C_RESET << std::endl;
	// -----------------------------------
	std::cout << C_RED "Running test from subject..." C_RESET << std::endl;
	const AAnimal*	j = new Dog();
	const AAnimal*	i = new Cat();
	
	delete j;
	delete i;
	// -----------------------------------
	std::cout << C_GRN "All tests are done. Wanna check leaks? Run 'make debug'" C_RESET << std::endl;
	return (0);
}