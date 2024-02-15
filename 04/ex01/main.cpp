/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 13:09:39 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/10/05 17:02:40 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void	testSubject(void) {
	std::cout << BWHT "\n>>> RUNNING SUBJECT TESTS\n" CRESET << std::endl;
	/* Subject asking to create and make an array with half Dog and half Cat */
	Animal	*animals[4];

	for (int i = 0; i < 4; i++) {
		if (i < 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	/* Testing destructors order (Brain > Dog/Cat > Animal) */
	std::cout << BWHT "Filling done. Deleting every Animal..." CRESET << std::endl;
	for (int i = 0; i < 4; i++)
		delete animals[i];

	/* Provided by subject */
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();

	delete j;
	delete i;
}

void	testDeepCopy(void) {
	std::cout << BWHT "\n>>> RUNNING DEEPCOPY TESTS\n" CRESET << std::endl;
	std::cout << BWHT << "--- Dog's behavior ---" << CRESET << std::endl;
	Dog	dogA;
	Dog dogB;

	std::cout << BWHT << "-------" << CRESET << std::endl;
	dogA.getBrain()->ideas[0] = "DogA's idea";
	dogB.getBrain()->ideas[0] = "DogB's idea";
	std::cout << "DogA's address (" << &dogA << ")..." << std::endl;
	std::cout << "    idea[0]=" << BGRN << dogA.getBrain()->ideas[0] << CRESET << " (" << &dogA.getBrain()->ideas[0] << ")" << std::endl;
	std::cout << "DogB's address (" << &dogB << ")..." << std::endl;
	std::cout << "    idea[0]=" << BGRN << dogB.getBrain()->ideas[0] << CRESET <<" (" << &dogB.getBrain()->ideas[0] << ")" << std::endl;

	std::cout << BWHT << "-------" << CRESET << std::endl;
	dogB = dogA;
	std::cout << "DogA's address (" << &dogA << ")..." << std::endl;
	std::cout << "    idea[0]=" << BGRN << dogA.getBrain()->ideas[0] << CRESET << " (" << &dogA.getBrain()->ideas[0] << ")" << std::endl;
	std::cout << "DogB's address (" << &dogB << ")..." << std::endl;
	std::cout << "    idea[0]=" << BGRN << dogB.getBrain()->ideas[0] << CRESET <<" (" << &dogB.getBrain()->ideas[0] << ")" << std::endl;

	std::cout << BWHT << "--- Cat's behavior ---" << CRESET << std::endl;
	Cat	catA;
	Cat catB;

	std::cout << BWHT << "-------" << CRESET << std::endl;
	catA.getBrain()->ideas[0] = "CatA's idea";
	catB.getBrain()->ideas[0] = "CatB's idea";
	std::cout << "CatA's address (" << &catA << ")..." << std::endl;
	std::cout << "    idea[0]=" << BGRN << catA.getBrain()->ideas[0] << CRESET << " (" << &catA.getBrain()->ideas[0] << ")" << std::endl;
	std::cout << "CatB's address (" << &catB << ")..." << std::endl;
	std::cout << "    idea[0]=" << BGRN << catB.getBrain()->ideas[0] << CRESET <<" (" << &catB.getBrain()->ideas[0] << ")" << std::endl;

	std::cout << BWHT << "-------" << CRESET << std::endl;
	catB = catA;
	std::cout << "CatA's address (" << &catA << ")..." << std::endl;
	std::cout << "    idea[0]=" << BGRN << catA.getBrain()->ideas[0] << CRESET << " (" << &catA.getBrain()->ideas[0] << ")" << std::endl;
	std::cout << "CatB's address (" << &catB << ")..." << std::endl;
	std::cout << "    idea[0]=" << BGRN << catB.getBrain()->ideas[0] << CRESET <<" (" << &catB.getBrain()->ideas[0] << ")" << std::endl;
}

int	main(void) {
	testSubject();
	testDeepCopy();
	
	// Tests are done
	std::cout << BYEL "All tests completed. Want to check for leaks? Run 'make debug'" CRESET << std::endl;
	return (0);
}