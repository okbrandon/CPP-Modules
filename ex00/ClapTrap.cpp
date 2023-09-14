/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 09:25:42 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/14 11:25:30 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) {
	this->_name = "unidentified";
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout << "✅ ClapTrap " << this->_name << " is born!" << std::endl;
}

ClapTrap::ClapTrap(std::string name) {
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout << "✅ ClapTrap " << this->_name << " is born!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clapTrap) {
	*this = clapTrap;
	std::cout << "✅ ClapTrap copy " << this->_name << " is born!" << std::endl;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "💣 ClapTrap " << this->_name << " was brutally killed." << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &clapTrap) {
	this->_name = clapTrap._name;
	this->_hitPoints = clapTrap._hitPoints;
	this->_energyPoints = clapTrap._energyPoints;
	this->_attackDamage = clapTrap._attackDamage;
	return (*this);
}

void	ClapTrap::attack(const std::string& target) {
	if (this->_hitPoints == 0 || this->_energyPoints == 0) {
		std::cout << "🤣 ClapTrap " << this->_name << " tried to attack " << target
				<< (this->_hitPoints == 0 ? " but is dead!" : " but is out of energy!") << std::endl;
		return ;
	}

	this->_energyPoints--;
	if (this->_energyPoints < 0)
		this->_energyPoints = 0;

	std::cout << "⚔️ ClapTrap " << this->_name << " attacks " << target
			<< ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	int		from = this->_hitPoints;

	if (from == 0) {
		std::cout << "💀 ClapTrap " << this->_name << " is already dead!" << std::endl;
		return ;
	}

	this->_hitPoints -= amount;
	if (this->_hitPoints < 0) {
		this->_hitPoints = 0;
		std::cout << "💀 ClapTrap " << this->_name << " died due to " << amount << " damage! ("
			<< from << " » " << this->_hitPoints << ")" << std::endl;
		return ;
	}

	std::cout << "💔 ClapTrap " << this->_name << " took " << amount << " damage! ("
			<< from << " » " << this->_hitPoints << ")" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	int	from = this->_hitPoints;

	if (from == 0 || this->_energyPoints == 0) {
		std::cout << "🌀 ClapTrap " << this->_name << " can't be repaired. "
				<< (from == 0 ? "Entity is dead." : "No energy points left!") << std::endl;
		return ;
	}

	this->_hitPoints += amount;
	this->_energyPoints--;
	if (this->_energyPoints < 0)
		this->_energyPoints = 0;

	std::cout << "💖 ClapTrap " << this->_name << " is being repaired... ("
			<< from << " » " << this->_hitPoints << ")" << std::endl;
}