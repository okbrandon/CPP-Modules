/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 13:02:55 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/14 12:33:29 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : AAnimal("Dog") {
	this->_brain = new Brain();
	std::cout << "[Dog] Constructor called." << std::endl;
}

Dog::Dog(const Dog &dog) : AAnimal("Dog") {
	this->_brain = new Brain();
	*this = dog;
	std::cout << "[Dog] Copy constructor called." << std::endl;
}

Dog::~Dog(void) {
	delete this->_brain;
	std::cout << "[Dog] Destructor called." << std::endl;
}

Dog	&Dog::operator=(const Dog &dog) {
	delete this->_brain;

	this->_type = dog.getType();
	this->_brain = new Brain(*dog._brain);
	return (*this);
}

void	Dog::makeSound(void) const {
	std::cout << "[Dog] Bark bark dead ass" << std::endl;
}

Brain	*Dog::getBrain(void) const {
	return (this->_brain);
}