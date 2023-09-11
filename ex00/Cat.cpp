/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 12:58:26 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/11 14:49:00 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat") {
	std::cout << "[Cat] Constructor called." << std::endl;
}

Cat::Cat(const Cat &cat) : Animal(cat) {
	*this = cat;
	std::cout << "[Cat] Copy constructor called." << std::endl;
}

Cat::~Cat(void) {
	std::cout << "[Cat] Destructor called." << std::endl;
}

Cat	&Cat::operator=(const Cat &cat) {
	this->_type = cat.getType();
	return (*this);
}

void	Cat::makeSound(void) const {
	std::cout << "[Cat] Meow bitch" << std::endl;
}