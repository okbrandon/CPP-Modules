/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 10:28:37 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/08/11 10:46:23 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _weapon(weapon) {
	this->_name = name;
	std::cout << C_GRN << "✅ HumanA named '" << name << "' with weapon '" \
		<< weapon.getType() << "' initialized." << C_RESET << std::endl;
}

HumanA::~HumanA(void) {
	std::cout << C_GRN << "💣 HumanA named '" << this->_name << "' got destroyed." << C_RESET << std::endl;
}

void	HumanA::attack(void) {
	std::cout << this->_name << " attacks using their " \
		<< this->_weapon.getType() << std::endl;
}
