/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 12:15:11 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/10 12:53:12 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("unidentified") {
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "✅ ScavTrap " << this->_name << " is born!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "✅ ScavTrap " << this->_name << " is born!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scavTrap) : ClapTrap(scavTrap) {
	*this = scavTrap;
	std::cout << "✅ ScavTrap copy " << this->_name << " is born!" << std::endl;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "💣 ScavTrap " << this->_name << " was brutally killed." << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &scavTrap) {
	this->_name = scavTrap._name;
	this->_hitPoints = scavTrap._hitPoints;
	this->_energyPoints = scavTrap._energyPoints;
	this->_attackDamage = scavTrap._attackDamage;
	return (*this);
}

void	ScavTrap::attack(const std::string& target) {
	if (this->_hitPoints == 0 || this->_energyPoints == 0) {
		std::cout << "🤣 ScavTrap " << this->_name << " tried to attack " << target
				<< (this->_hitPoints == 0 ? " but is dead!" : " but is out of energy!") << std::endl;
		return ;
	}

	this->_energyPoints--;
	if (this->_energyPoints < 0)
		this->_energyPoints = 0;

	std::cout << "⚔️ ScavTrap " << this->_name << " attacks " << target
			<< ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate(void) {
	std::cout << "🔒 ScavTrap " << this->_name << " is now in Gate keeper mode." << std::endl;
}