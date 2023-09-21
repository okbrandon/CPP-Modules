/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 14:15:54 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/21 10:37:33 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/* Constructors & Destructors */
FragTrap::FragTrap(void) : ClapTrap("unidentified") {
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << BGRN "[FragTrap] " CRESET << "New object called '" BCYN << \
		this->_name << CRESET "'..." << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << BGRN "[FragTrap] " CRESET << "New object called '" BCYN << \
		this->_name << CRESET "'..." << std::endl;
}

FragTrap::FragTrap(const FragTrap &fragTrap) : ClapTrap(fragTrap) {
	*this = fragTrap;
	std::cout << BGRN "[FragTrap] " CRESET << "Copied object called '" BCYN << \
		this->_name << CRESET "'..." << std::endl;
}

FragTrap::~FragTrap(void) {
	std::cout << BRED "[FragTrap] " CRESET << "Deleting object called '" BCYN << \
		this->_name << CRESET "'..." << std::endl;
}

/* Functions */
void	FragTrap::highFivesGuys(void) {
	std::cout << BYEL "[FragTrap] " BCYN << this->_name << CRESET " suggests a high fives!" << std::endl;
}

/* Overloaded operators */
FragTrap	&FragTrap::operator=(const FragTrap &fragTrap) {
	this->_name = fragTrap._name;
	this->_hitPoints = fragTrap._hitPoints;
	this->_energyPoints = fragTrap._energyPoints;
	this->_attackDamage = fragTrap._attackDamage;
	return (*this);
}