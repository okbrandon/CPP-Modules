/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 13:09:39 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/21 10:59:12 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void) {
	std::cout << BWHT "Specific sounds of Cat and Dog..." CRESET << std::endl;
	const Animal*	goodMeta = new Animal();
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	j->makeSound();
	i->makeSound();
	goodMeta->makeSound();

	delete i;
	delete j;
	delete goodMeta;

	std::cout << BWHT "WrongCat is displaying WrongAnimal sound..." CRESET << std::endl;
	const WrongAnimal*	badMeta = new WrongAnimal();
	const Animal*	l = new Dog();
	const WrongAnimal*	k = new WrongCat();

	std::cout << l->getType() << " " << std::endl;
	std::cout << k->getType() << " " << std::endl;
	l->makeSound();
	k->makeSound();
	badMeta->makeSound();

	delete k;
	delete l;
	delete badMeta;

	// Tests are done
	std::cout << BYEL "All tests completed. Want to check for leaks? Run 'make debug'" CRESET << std::endl;
	return (0);
}