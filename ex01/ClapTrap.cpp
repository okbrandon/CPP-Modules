/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 09:25:42 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/21 10:30:32 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* Constructors & Destructors */
ClapTrap::ClapTrap(void) {
	this->_name = "unidentified";
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout << BGRN "[ClapTrap] " CRESET << "New object called '" BCYN << \
		this->_name << CRESET "'..." << std::endl;
}

ClapTrap::ClapTrap(std::string name) {
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout << BGRN "[ClapTrap] " CRESET << "New object called '" BCYN << \
		this->_name << CRESET "'..." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clapTrap) {
	*this = clapTrap;
	std::cout << BGRN "[ClapTrap] " CRESET << "Copied object called '" BCYN << \
		this->_name << CRESET "'..." << std::endl;
}

ClapTrap::~ClapTrap(void) {
	std::cout << BRED "[ClapTrap] " CRESET << "Deleting object called '" BCYN << \
		this->_name << CRESET "'..." << std::endl;
}

/* Functions */
void	ClapTrap::attack(const std::string& target) {
	if (this->_hitPoints == 0 || this->_energyPoints == 0) {
		std::cout << BYEL "[ClapTrap] " BCYN << this->_name << CRESET " tried to attack " BCYN << target
				<< (this->_hitPoints == 0 ? CRESET" but is dead!" : CRESET" but is out of energy!") << std::endl;
		return ;
	}

	this->_energyPoints--;
	if (this->_energyPoints < 0)
		this->_energyPoints = 0;

	std::cout << BYEL "[ClapTrap] " BCYN << this->_name << CRESET " attacks " BCYN << target
			<< CRESET ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	int		from = this->_hitPoints;

	if (from == 0) {
		std::cout << BYEL "[ClapTrap] " BCYN << this->_name << CRESET " is already dead!" << std::endl;
		return ;
	}

	this->_hitPoints -= amount;
	if (this->_hitPoints < 0) {
		this->_hitPoints = 0;
		std::cout << BYEL "[ClapTrap] " BCYN << this->_name << CRESET " died due to " << \
			amount << " damage! (" << from << " » " << this->_hitPoints << ")" << std::endl;
		return ;
	}

	std::cout << BYEL "[ClapTrap] " BCYN << this->_name << CRESET " took " << \
		amount << " damage! (" << from << " » " << this->_hitPoints << ")" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	int	from = this->_hitPoints;

	if (from == 0 || this->_energyPoints == 0) {
		std::cout << BYEL "[ClapTrap] " BCYN << this->_name << CRESET " can't be repaired. "
				<< (from == 0 ? "Entity is dead." : "No energy points left!") << std::endl;
		return ;
	}

	this->_hitPoints += amount;
	this->_energyPoints--;
	if (this->_energyPoints < 0)
		this->_energyPoints = 0;

	std::cout << BYEL "[ClapTrap] " BCYN << this->_name << CRESET " is being repaired... ("
			<< from << " » " << this->_hitPoints << ")" << std::endl;
}

/* Overloaded operators */
ClapTrap	&ClapTrap::operator=(const ClapTrap &clapTrap) {
	this->_name = clapTrap._name;
	this->_hitPoints = clapTrap._hitPoints;
	this->_energyPoints = clapTrap._energyPoints;
	this->_attackDamage = clapTrap._attackDamage;
	return (*this);
}