/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 10:58:56 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/08/11 10:45:41 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _weapon(NULL) {
	this->_name = name;
	std::cout << C_GRN << "✅ HumanB named '" << name << "' without weapon initialized." << C_RESET << std::endl;
}

HumanB::~HumanB(void) {
	std::cout << C_GRN << "💣 HumanB named '" << this->_name << "' got destroyed." << C_RESET << std::endl;
}

void	HumanB::attack(void) {
	std::cout << "HumanB attacks with their " \
		<< (!this->_weapon ? "fists" : this->_weapon->getType()) << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon) {
	this->_weapon = &weapon;
}
