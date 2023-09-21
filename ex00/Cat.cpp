/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 12:58:26 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/21 10:48:45 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/* Constructors & Destructors */
Cat::Cat(void) : Animal("Cat") {
	std::cout << BGRN "[Cat] " CRESET "New object typed '" BCYN << \
		this->_type << CRESET "'..." << std::endl;
}

Cat::Cat(const Cat &cat) : Animal(cat) {
	*this = cat;
	std::cout << BGRN "[Cat] " CRESET "Copied object typed '" BCYN << \
		this->_type << CRESET "'..." << std::endl;
}

Cat::~Cat(void) {
	std::cout << BRED "[Cat] " CRESET "Deleting object typed '" BCYN << \
		this->_type << CRESET "'..." << std::endl;
}

/* Functions */
void	Cat::makeSound(void) const {
	std::cout << BYEL "[Cat] " CRESET << "Meow gimme food rn or consequences" << std::endl;
}

/* Overloaded operators */
Cat	&Cat::operator=(const Cat &cat) {
	this->_type = cat.getType();
	return (*this);
}