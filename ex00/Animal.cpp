/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 12:53:18 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/01 14:29:30 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) {
	this->_type = "unidentified";
	std::cout << "[Animal] '" << this->_type << "' constructor called." << std::endl;
}

Animal::Animal(std::string type) {
	this->_type = type;
	std::cout << "[Animal] '" << this->_type << "' constructor called." << std::endl;
}

Animal::~Animal(void) {
	std::cout << "[Animal] Destructor called." << std::endl;
}

void	Animal::makeSound(void) const {}

std::string	Animal::getType(void) const {
	return (this->_type);
}