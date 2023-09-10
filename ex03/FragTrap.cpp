/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 14:15:54 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/10 12:52:39 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap("unidentified") {
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "✅ FragTrap " << this->_name << " is born!" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "✅ FragTrap " << this->_name << " is born!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &fragTrap) : ClapTrap(fragTrap) {
	*this = fragTrap;
	std::cout << "✅ FragTrap copy " << this->_name << " is born!" << std::endl;
}

FragTrap::~FragTrap(void) {
	std::cout << "💣 FragTrap " << this->_name << " was brutally killed." << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &fragTrap) {
	this->_name = fragTrap._name;
	this->_hitPoints = fragTrap._hitPoints;
	this->_energyPoints = fragTrap._energyPoints;
	this->_attackDamage = fragTrap._attackDamage;
	return (*this);
}

void	FragTrap::highFivesGuys(void) {
	std::cout << "🙌 FragTrap " << this->_name << " suggests a high fives!" << std::endl;
}