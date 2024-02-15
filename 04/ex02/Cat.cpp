/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 12:58:26 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/21 11:20:49 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/* Constructors & Destructors */
Cat::Cat(void) : AAnimal("Cat") {
	this->_brain = new Brain();
	std::cout << BGRN "[Cat] " CRESET "New object typed '" BCYN << \
		this->_type << CRESET "' with a brain..." << std::endl;
}

Cat::Cat(const Cat &cat) : AAnimal(cat) {
	this->_brain = new Brain();
	*this = cat;
	std::cout << BGRN "[Cat] " CRESET "Copied object typed '" BCYN << \
		this->_type << CRESET "' with a brain..." << std::endl;
}

Cat::~Cat(void) {
	delete this->_brain;
	std::cout << BRED "[Cat] " CRESET "Deleting object typed '" BCYN << \
		this->_type << CRESET "' with a brain..." << std::endl;
}

/* Functions */
void	Cat::makeSound(void) const {
	std::cout << BYEL "[Cat] " CRESET << "Meow gimme food rn or consequences" << std::endl;
}

/* Getters */
Brain	*Cat::getBrain(void) const {
	return (this->_brain);
}

/* Overloaded operators */
Cat	&Cat::operator=(const Cat &cat) {
	delete this->_brain;

	this->_type = cat.getType();
	this->_brain = new Brain(*cat._brain);
	return (*this);
}