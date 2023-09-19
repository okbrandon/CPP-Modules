/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 13:09:39 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/19 14:20:07 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#define C_RESET 	"\x1b[0m"
#define C_RED		"\x1b[31m\x1b[1m"
#define C_GRY		"\x1b[90m\x1b[1m"
#define C_GRN		"\x1b[32m\x1b[1m"

int	main(void) {
	Animal	*animals[4];

	std::cout << C_RED "\n>>> FILLING ARRAY SEMI DOG, SEMI CAT\n" C_RESET << std::endl;

	for (int i = 0; i < 4; i++) {
		if (i < 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	std::cout << C_GRY "Filling done. Deleting every Animal..." C_RESET << std::endl;

	for (int i = 0; i < 4; i++)
		delete animals[i];
	// -----------------------------------
	std::cout << C_RED << "\n>>> DEEP COPY TESTING\n" << C_RESET << std::endl;
	std::cout << C_GRY << "--- Dog's behavior ---" << C_RESET << std::endl;
	Dog	dogA;
	Dog dogB;

	std::cout << C_GRY << "-------" << C_RESET << std::endl;
	dogA.getBrain()->ideas[0] = "DogA's idea";
	dogB.getBrain()->ideas[0] = "DogB's idea";
	std::cout << "DogA's address (" << &dogA << ")..." << std::endl;
	std::cout << "    idea[0]=" << C_GRN << dogA.getBrain()->ideas[0] << C_RESET << " (" << &dogA.getBrain()->ideas[0] << ")" << std::endl;
	std::cout << "DogB's address (" << &dogB << ")..." << std::endl;
	std::cout << "    idea[0]=" << C_GRN << dogB.getBrain()->ideas[0] << C_RESET <<" (" << &dogB.getBrain()->ideas[0] << ")" << std::endl;

	std::cout << C_GRY << "-------" << C_RESET << std::endl;
	dogB = dogA;
	std::cout << "DogA's address (" << &dogA << ")..." << std::endl;
	std::cout << "    idea[0]=" << C_GRN << dogA.getBrain()->ideas[0] << C_RESET << " (" << &dogA.getBrain()->ideas[0] << ")" << std::endl;
	std::cout << "DogB's address (" << &dogB << ")..." << std::endl;
	std::cout << "    idea[0]=" << C_GRN << dogB.getBrain()->ideas[0] << C_RESET <<" (" << &dogB.getBrain()->ideas[0] << ")" << std::endl;

	std::cout << C_GRY << "--- Cat's behavior ---" << C_RESET << std::endl;
	Cat	catA;
	Cat catB;

	std::cout << C_GRY << "-------" << C_RESET << std::endl;
	catA.getBrain()->ideas[0] = "CatA's idea";
	catB.getBrain()->ideas[0] = "CatB's idea";
	std::cout << "CatA's address (" << &catA << ")..." << std::endl;
	std::cout << "    idea[0]=" << C_GRN << catA.getBrain()->ideas[0] << C_RESET << " (" << &catA.getBrain()->ideas[0] << ")" << std::endl;
	std::cout << "CatB's address (" << &catB << ")..." << std::endl;
	std::cout << "    idea[0]=" << C_GRN << catB.getBrain()->ideas[0] << C_RESET <<" (" << &catB.getBrain()->ideas[0] << ")" << std::endl;

	std::cout << C_GRY << "-------" << C_RESET << std::endl;
	catB = catA;
	std::cout << "CatA's address (" << &catA << ")..." << std::endl;
	std::cout << "    idea[0]=" << C_GRN << catA.getBrain()->ideas[0] << C_RESET << " (" << &catA.getBrain()->ideas[0] << ")" << std::endl;
	std::cout << "CatB's address (" << &catB << ")..." << std::endl;
	std::cout << "    idea[0]=" << C_GRN << catB.getBrain()->ideas[0] << C_RESET <<" (" << &catB.getBrain()->ideas[0] << ")" << std::endl;
	// -----------------------------------
	std::cout << C_RED "\n>>> RUNNING TESTS FROM SUBJECT\n" C_RESET << std::endl;
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();
	
	delete j;
	delete i;
	// -----------------------------------
	std::cout << C_GRN "All tests are done. Wanna check leaks? Run 'make debug'" C_RESET << std::endl;
	return (0);
}