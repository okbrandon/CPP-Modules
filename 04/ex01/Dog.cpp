/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 13:02:55 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/21 11:08:29 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/* Constructors & Destructors */
Dog::Dog(void) : Animal("Dog") {
	this->_brain = new Brain();
	std::cout << BGRN "[Dog] " CRESET "New object typed '" BCYN << \
		this->_type << CRESET "' with a brain..." << std::endl;
}

Dog::Dog(const Dog &dog) : Animal("Dog") {
	this->_brain = new Brain();
	*this = dog;
	std::cout << BGRN "[Dog] " CRESET "Copied object typed '" BCYN << \
		this->_type << CRESET "' with a brain..." << std::endl;
}

Dog::~Dog(void) {
	delete this->_brain;
	std::cout << BRED "[Dog] " CRESET "Deleting object typed '" BCYN << \
		this->_type << CRESET "' with a brain..." << std::endl;
}

/* Functions */
void	Dog::makeSound(void) const {
	std::cout << BYEL "[Dog] " CRESET << "Bark bark i'm a cringe dog" << std::endl;
}

/* Getters */
Brain	*Dog::getBrain(void) const {
	return (this->_brain);
}

/* Overloaded operators */
Dog	&Dog::operator=(const Dog &dog) {
	delete this->_brain;

	this->_type = dog.getType();
	this->_brain = new Brain(*dog._brain);
	return (*this);
}