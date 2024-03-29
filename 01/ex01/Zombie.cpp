/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 09:09:41 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/25 11:54:41 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* Constructors & Destructors */
Zombie::Zombie(std::string name) {
	this->_name = name;
	std::cout << BGRN "[Zombie] " CRESET << "New object called '" BCYN << \
		this->_name << CRESET "'..." << std::endl;
}

Zombie::Zombie(void) {
	this->_name = "Unknown entity";
	std::cout << BGRN "[Zombie] " CRESET << "New object called '" BCYN << \
		this->_name << CRESET "'..." << std::endl;
}

Zombie::~Zombie(void) {
	std::cout << BRED "[Zombie] " CRESET << "Deleting object called '" BCYN << \
		this->_name << CRESET "'..." << std::endl;
}

/* Functions */
void	Zombie::announce(void) {
	std::cout << BYEL << this->_name << CRESET << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

/* Getters */
std::string	Zombie::getName(void) {
	return (this->_name);
}

/* Setters */
void	Zombie::setName(std::string name) {
	this->_name = name;
}
