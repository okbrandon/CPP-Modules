/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 14:51:24 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/21 10:42:24 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/* Constructors & Destructors */
DiamondTrap::DiamondTrap(void) : ClapTrap("unidentified_clap_name") {
	this->_name = "unidentified";
	this->FragTrap::_hitPoints = 100;
	this->ScavTrap::_energyPoints = 50;
	this->FragTrap::_attackDamage = 30;
	std::cout << BGRN "[DiamondTrap] " CRESET << "New object called '" BCYN << \
		this->_name << CRESET "'..." << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name") {
	this->_name = name;
	this->FragTrap::_hitPoints = 100;
	this->ScavTrap::_energyPoints = 50;
	this->FragTrap::_attackDamage = 30;
	std::cout << BGRN "[DiamondTrap] " CRESET << "New object called '" BCYN << \
		this->_name << CRESET "'..." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamondTrap) : ClapTrap(diamondTrap), FragTrap(diamondTrap), ScavTrap(diamondTrap) {
	*this = diamondTrap;
	std::cout << BGRN "[DiamondTrap] " CRESET << "Copied object called '" BCYN << \
		this->_name << CRESET "'..." << std::endl;
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << BRED "[DiamondTrap] " CRESET << "Deleting object called '" BCYN << \
		this->_name << CRESET "'..." << std::endl;
}

/* Functions */
void	DiamondTrap::attack(const std::string& target) {
	this->ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void) {
	std::cout << BYEL "[DiamondTrap] " CRESET "My name is " BCYN << this->_name \
		<< CRESET " known as ClapTrap " BCYN << this->ClapTrap::getName() << CRESET << std::endl;
}

/* Overloaded operators */
DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &diamondTrap) {
	this->ClapTrap::_name = diamondTrap.ClapTrap::_name;
	this->_name = diamondTrap._name;
	this->_hitPoints = diamondTrap._hitPoints;
	this->_energyPoints = diamondTrap._energyPoints;
	this->_attackDamage = diamondTrap._attackDamage;
	return (*this);
}