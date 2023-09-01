/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 14:40:01 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/01 14:58:29 by bsoubaig         ###   ########.fr       */
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

WrongAnimal::~WrongAnimal(void) {
	std::cout << "[WrongAnimal] '" << this->_type << "' destructor called." << std::endl;
}

void	WrongAnimal::makeSound(void) const {}

std::string	WrongAnimal::getType(void) const {
	return (this->_type);
}