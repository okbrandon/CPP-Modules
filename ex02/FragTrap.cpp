/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 14:15:54 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/08/31 14:23:01 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "✅ FragTrap " << this->_name << " is born!" << std::endl;
}

FragTrap::~FragTrap(void) {
	std::cout << "💣 FragTrap " << this->_name << " was brutally killed." << std::endl;
}

void	FragTrap::highFivesGuys(void) {
	std::cout << "🙌 FragTrap " << this->_name << " suggests a high fives!" << std::endl;
}