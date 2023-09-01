/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 14:44:34 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/01 14:56:44 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat") {
	std::cout << "[WrongCat] '" << this->_type << "' constructor called." << std::endl;
}

WrongCat::~WrongCat(void) {
	std::cout << "[WrongCat] '" << this->_type << "' destructor called." << std::endl;
}

void	WrongCat::makeSound(void) const {
	std::cout << "[WrongCat] *hiss*" << std::endl;
}