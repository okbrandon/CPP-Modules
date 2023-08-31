/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 14:51:24 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/08/31 15:17:36 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("unidentified_clap_name"), FragTrap(), ScavTrap() {
	this->_name = "unidentified";
	this->FragTrap::_hitPoints = 100;
	this->ScavTrap::_energyPoints = 50;
	this->FragTrap::_attackDamage = 30;
	std::cout << "✅ DiamondTrap " << this->_name << " is born!" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(), ScavTrap() {
	this->_name = name;
	this->FragTrap::_hitPoints = 100;
	this->ScavTrap::_energyPoints = 50;
	this->FragTrap::_attackDamage = 30;
	std::cout << "✅ DiamondTrap " << this->_name << " is born!" << std::endl;
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << "💣 DiamondTrap " << this->_name << " was brutally killed." << std::endl;
}

void	DiamondTrap::attack(const std::string& target) {
	this->ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void) {
	std::cout << "💎 My DiamondTrap name is " << this->_name
			<< " known as ClapTrap " << this->ClapTrap::getName() << std::endl;
}