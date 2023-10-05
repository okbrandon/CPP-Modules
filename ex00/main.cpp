/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 13:09:39 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/10/05 16:34:26 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void	testSubject(void) {
	std::cout << BWHT "\n>>> RUNNNING SUBJECT TESTS\n" CRESET << std::endl;
	const Animal*	meta = new Animal();
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	j->makeSound();
	i->makeSound();
	meta->makeSound();

	delete i;
	delete j;
	delete meta;
}

void	testWrongCat(void) {
	std::cout << BWHT "\n>>> RUNNNING WRONGCAT TESTS\n" CRESET << std::endl;
	const WrongAnimal*	meta = new WrongAnimal();
	const Animal*		l = new Dog();
	const WrongAnimal*	k = new WrongCat();

	std::cout << l->getType() << " " << std::endl;
	std::cout << k->getType() << " " << std::endl;
	l->makeSound();
	k->makeSound();
	meta->makeSound();

	delete k;
	delete l;
	delete meta;
}

int	main(void) {
	testSubject();
	testWrongCat();

	// Tests are done
	std::cout << BYEL "All tests completed. Want to check for leaks? Run 'make debug'" CRESET << std::endl;
	return (0);
}