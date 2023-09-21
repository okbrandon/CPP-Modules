/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 10:28:37 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/21 09:43:32 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _weapon(weapon) {
	this->_name = name;
	std::cout << BGRN "[HumanA] " CRESET << "New object called '" BCYN << \
		this->_name << CRESET "' with weapon '" BCYN << \
		this->_weapon.getType() << CRESET "'..." << std::endl;
}

HumanA::~HumanA(void) {
	std::cout << BRED "[HumanA] " CRESET << "Deleting object called '" BCYN << \
		this->_name << CRESET "'..." << std::endl;
}

void	HumanA::attack(void) {
	std::cout << BYEL << this->_name << CRESET " attacks with their " BYEL \
		<< this->_weapon.getType() << CRESET << std::endl;
}
