/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 14:40:01 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/10/05 16:33:36 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/* Constructors & Destructors */
WrongAnimal::WrongAnimal(void) {
	this->_type = "unidentified";
	std::cout << BGRN "[WrongAnimal] " CRESET "New object typed '" BCYN << \
		this->_type << CRESET "'..." << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) {
	this->_type = type;
	std::cout << BGRN "[WrongAnimal] " CRESET "New object typed '" BCYN << \
		this->_type << CRESET "'..." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wrongAnimal) {
	*this = wrongAnimal;
	std::cout << BGRN "[WrongAnimal] " CRESET "Copied object typed '" BCYN << \
		this->_type << CRESET "'..." << std::endl;
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << BRED "[WrongAnimal] " CRESET "Deleting object typed '" BCYN << \
		this->_type << CRESET "'..." << std::endl;
}

/* Functions */
void	WrongAnimal::makeSound(void) const {
	std::cout << BYEL "[WrongAnimal] " CRESET << "what am I? I am confusion" << std::endl;
}

/* Getters */
std::string	WrongAnimal::getType(void) const {
	return (this->_type);
}

/* Overloaded operators */
WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &wrongAnimal) {
	this->_type = wrongAnimal.getType();
	return (*this);
}