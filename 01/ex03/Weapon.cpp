/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 10:20:50 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/25 11:53:36 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

/* Constructors & Destructors */
Weapon::Weapon(std::string type) {
	this->_type = type;
}

Weapon::~Weapon(void) {}

/* Getters */
const std::string	Weapon::getType(void) {
	return (this->_type);
}

/* Setters */
void	Weapon::setType(std::string type) {
	this->_type = type;
}
