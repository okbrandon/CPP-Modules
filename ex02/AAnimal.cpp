/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 12:53:18 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/14 12:34:24 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void) {
	this->_type = "unidentified";
	std::cout << "[AAnimal] '" << this->_type << "' constructor called." << std::endl;
}

AAnimal::AAnimal(std::string type) {
	this->_type = type;
	std::cout << "[AAnimal] '" << this->_type << "' constructor called." << std::endl;
}

AAnimal::AAnimal(const AAnimal &animal) {
	*this = animal;
	std::cout << "[AAnimal] '" << this->_type << "' copy constructor called." << std::endl;
}

AAnimal::~AAnimal(void) {
	std::cout << "[AAnimal] Destructor called." << std::endl;
}

AAnimal	&AAnimal::operator=(const AAnimal &animal) {
	this->_type = animal._type;
	return (*this);
}

void	AAnimal::makeSound(void) const {}

std::string	AAnimal::getType(void) const {
	return (this->_type);
}

Brain	*AAnimal::getBrain(void) const {
	return (NULL);
}