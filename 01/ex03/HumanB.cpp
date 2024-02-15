/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 10:58:56 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/25 11:57:17 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

/* Constructors & Destructors */
HumanB::HumanB(std::string name): _weapon(NULL) {
	this->_name = name;
	std::cout << BGRN "[HumanB] " CRESET << "New object called '" BCYN << \
		this->_name << CRESET "' without weapon..." CRESET << std::endl;
}

HumanB::~HumanB(void) {
	std::cout << BRED "[HumanB] " CRESET << "Deleting object called '" BCYN << \
		this->_name << CRESET "'..." << std::endl;
}

/* Functions */
void	HumanB::attack(void) {
	std::cout << BYEL << this->_name << CRESET << " attacks with their " BYEL \
		<< (!this->_weapon ? "fists" : this->_weapon->getType()) << CRESET << std::endl;
}

/* Setters */
void	HumanB::setWeapon(Weapon &weapon) {
	this->_weapon = &weapon;
}
