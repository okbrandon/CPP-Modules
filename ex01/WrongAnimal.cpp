/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 14:40:01 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/11 14:55:39 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) {
	this->_type = "unidentified";
	std::cout << "[WrongAnimal] '" << this->_type << "' constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) {
	this->_type = type;
	std::cout << "[WrongAnimal] '" << this->_type << "' constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wrongAnimal) {
	*this = wrongAnimal;
	std::cout << "[WrongAnimal] '" << this->_type << "' copy constructor called." << std::endl;
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "[WrongAnimal] '" << this->_type << "' destructor called." << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &wrongAnimal) {
	this->_type = wrongAnimal.getType();
	return (*this);
}

void	WrongAnimal::makeSound(void) const {}

std::string	WrongAnimal::getType(void) const {
	return (this->_type);
}