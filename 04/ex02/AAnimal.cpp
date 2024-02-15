/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 12:53:18 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/21 11:16:08 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

/* Constructors & Destructors */
AAnimal::AAnimal(void) {
	this->_type = "unidentified";
	std::cout << BGRN "[AAnimal] " CRESET "New object typed '" BCYN << \
		this->_type << CRESET "'..." << std::endl;
}

AAnimal::AAnimal(std::string type) {
	this->_type = type;
	std::cout << BGRN "[AAnimal] " CRESET "New object typed '" BCYN << \
		this->_type << CRESET "'..." << std::endl;
}

AAnimal::AAnimal(const AAnimal &animal) {
	*this = animal;
	std::cout << BGRN "[AAnimal] " CRESET "Copied object typed '" BCYN << \
		this->_type << CRESET "'..." << std::endl;
}

AAnimal::~AAnimal(void) {
	std::cout << BRED "[AAnimal] " CRESET "Deleting object typed '" BCYN << \
		this->_type << CRESET "'..." << std::endl;
}

/* Functions */
void	AAnimal::makeSound(void) const {}

/* Getters */
std::string	AAnimal::getType(void) const {
	return (this->_type);
}

Brain	*AAnimal::getBrain(void) const {
	return (NULL);
}

/* Overloaded operators */
AAnimal	&AAnimal::operator=(const AAnimal &animal) {
	this->_type = animal._type;
	return (*this);
}