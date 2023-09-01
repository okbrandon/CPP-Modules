/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 13:02:55 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/01 14:27:01 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog") {
	std::cout << "[Dog] Constructor called." << std::endl;
}

Dog::~Dog(void) {
	std::cout << "[Dog] Destructor called." << std::endl;
}

void	Dog::makeSound(void) const {
	std::cout << "[Dog] Bark bark dead ass" << std::endl;
}