/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 12:53:18 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/21 10:46:16 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/* Constructors & Destructors */
Animal::Animal(void) {
	this->_type = "unidentified";
	std::cout << BGRN "[Animal] " CRESET "New object typed '" BCYN << \
		this->_type << CRESET "'..." << std::endl;
}

Animal::Animal(std::string type) {
	this->_type = type;
	std::cout << BGRN "[Animal] " CRESET "New object typed '" BCYN << \
		this->_type << CRESET "'..." << std::endl;
}

Animal::Animal(const Animal &animal) {
	*this = animal;
	std::cout << BGRN "[Animal] " CRESET "Copied object typed '" BCYN << \
		this->_type << CRESET "'..." << std::endl;
}

Animal::~Animal(void) {
	std::cout << BRED "[Animal] " CRESET "Deleting object typed '" BCYN << \
		this->_type << CRESET "'..." << std::endl;
}

/* Functions */
void	Animal::makeSound(void) const {}

/* Getters */
std::string	Animal::getType(void) const {
	return (this->_type);
}

/* Overloaded operators */
Animal	&Animal::operator=(const Animal &animal) {
	this->_type = animal._type;
	return (*this);
}