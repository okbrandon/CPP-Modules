/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 14:44:34 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/21 10:55:45 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/* Constructors & Destructors */
WrongCat::WrongCat(void) : WrongAnimal("WrongCat") {
	std::cout << BGRN "[WrongCat] " CRESET "New object typed '" BCYN << \
		this->_type << CRESET "'..." << std::endl;
}

WrongCat::WrongCat(const WrongCat &wrongCat) : WrongAnimal(wrongCat) {
	*this = wrongCat;
	std::cout << BGRN "[WrongCat] " CRESET "Copied object typed '" BCYN << \
		this->_type << CRESET "'..." << std::endl;
}

WrongCat::~WrongCat(void) {
	std::cout << BRED "[WrongCat] " CRESET "Deleting object typed '" BCYN << \
		this->_type << CRESET "'..." << std::endl;
}

/* Functions */
void	WrongCat::makeSound(void) const {
	std::cout << BYEL "[WrongCat] " CRESET << "rawrrrrr raaawwrrrr" << std::endl;
}

/* Overloaded operators */
WrongCat	&WrongCat::operator=(const WrongCat &wrongCat) {
	this->_type = wrongCat.getType();
	return (*this);
}