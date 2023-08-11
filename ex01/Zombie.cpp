/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 09:09:41 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/08/11 10:37:25 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->_name = name;
	std::cout << C_GRN << "✅ Zombie object '" << this->_name << "' constructor called." << C_RESET << std::endl;
}

Zombie::Zombie(void)
{
	this->_name = "Unknown entity";
	std::cout << C_GRN << "✅ Zombie object '" << this->_name << "' constructor called." << C_RESET << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << C_RED << "💣 Zombie object '" << this->_name << "' destructor called." << C_RESET << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}
