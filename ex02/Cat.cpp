/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 12:58:26 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/14 12:32:59 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : AAnimal("Cat") {
	this->_brain = new Brain();
	std::cout << "[Cat] Constructor called." << std::endl;
}

Cat::Cat(const Cat &cat) : AAnimal(cat) {
	this->_brain = new Brain();
	*this = cat;
	std::cout << "[Cat] Copy constructor called." << std::endl;
}

Cat::~Cat(void) {
	delete this->_brain;
	std::cout << "[Cat] Destructor called." << std::endl;
}

Cat	&Cat::operator=(const Cat &cat) {
	delete this->_brain;

	this->_type = cat.getType();
	this->_brain = new Brain(*cat._brain);
	return (*this);
}

void	Cat::makeSound(void) const {
	std::cout << "[Cat] Meow bitch" << std::endl;
}

Brain	*Cat::getBrain(void) const {
	return (this->_brain);
}