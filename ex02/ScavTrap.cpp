/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 12:15:11 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/21 10:33:07 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/* Constructors & Destructors */
ScavTrap::ScavTrap(void) : ClapTrap("unidentified") {
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << BGRN "[ScavTrap] " CRESET << "New object called '" BCYN << \
		this->_name << CRESET "'..." << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << BGRN "[ScavTrap] " CRESET << "New object called '" BCYN << \
		this->_name << CRESET "'..." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scavTrap) : ClapTrap(scavTrap) {
	*this = scavTrap;
	std::cout << BGRN "[ScavTrap] " CRESET << "Copied object called '" BCYN << \
		this->_name << CRESET "'..." << std::endl;
}

ScavTrap::~ScavTrap(void) {
	std::cout << BRED "[ScavTrap] " CRESET << "Deleting object called '" BCYN << \
		this->_name << CRESET "'..." << std::endl;
}

/* Functions */
void	ScavTrap::attack(const std::string& target) {
	if (this->_hitPoints == 0 || this->_energyPoints == 0) {
		std::cout << BYEL "[ScavTrap] " BCYN << this->_name << CRESET " tried to attack " BCYN << target
				<< (this->_hitPoints == 0 ? CRESET" but is dead!" : CRESET" but is out of energy!") << std::endl;
		return ;
	}

	this->_energyPoints--;
	if (this->_energyPoints < 0)
		this->_energyPoints = 0;

	std::cout << BYEL "[ScavTrap] " BCYN << this->_name << CRESET " attacks " BCYN << target
			<< CRESET ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate(void) {
	std::cout << BYEL "[ScavTrap] " BCYN << this->_name << CRESET " is now in Gate keeper mode." << std::endl;
}

/* Overloaded operators */
ScavTrap	&ScavTrap::operator=(const ScavTrap &scavTrap) {
	this->_name = scavTrap._name;
	this->_hitPoints = scavTrap._hitPoints;
	this->_energyPoints = scavTrap._energyPoints;
	this->_attackDamage = scavTrap._attackDamage;
	return (*this);
}