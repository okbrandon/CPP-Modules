/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 12:58:26 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/01 14:27:09 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat") {
	std::cout << "[Cat] Constructor called." << std::endl;
}

Cat::~Cat(void) {
	std::cout << "[Cat] Destructor called." << std::endl;
}

void	Cat::makeSound(void) const {
	std::cout << "[Cat] Meow bitch" << std::endl;
}