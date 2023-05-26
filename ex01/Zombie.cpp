/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 09:09:41 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/05/26 10:45:13 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->_name = name;
	std::cout << "Zombie object '" << this->_name << "' constructor called." << std::endl;
}

Zombie::Zombie(void)
{
	this->_name = "Unknown entity";
	std::cout << "Zombie object '" << this->_name << "' constructor called." << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie object '" << this->_name << "' destructor called." << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}
