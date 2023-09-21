/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 13:02:55 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/21 10:51:56 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/* Constructors & Destructors */
Dog::Dog(void) : Animal("Dog") {
	std::cout << BGRN "[Dog] " CRESET "New object typed '" BCYN << \
		this->_type << CRESET "'..." << std::endl;
}

Dog::Dog(const Dog &dog) : Animal("Dog") {
	*this = dog;
	std::cout << BGRN "[Dog] " CRESET "Copied object typed '" BCYN << \
		this->_type << CRESET "'..." << std::endl;
}

Dog::~Dog(void) {
	std::cout << BRED "[Dog] " CRESET "Deleting object typed '" BCYN << \
		this->_type << CRESET "'..." << std::endl;
}

/* Functions */
void	Dog::makeSound(void) const {
	std::cout << BYEL "[Dog] " CRESET << "Bark bark i'm a cringe dog" << std::endl;
}

/* Overloaded operators */
Dog	&Dog::operator=(const Dog &dog) {
	this->_type = dog.getType();
	return (*this);
}