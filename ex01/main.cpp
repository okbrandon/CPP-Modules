/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 09:32:59 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/08/11 10:42:09 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name);

int	main(void)
{
	std::string	name = "Pedro";
	int			size = 4;

	// Initializing the horde
	std::cout << C_GRY << "Initializing Zombie Horde object called '" << name << "'..." << C_RESET << std::endl;
	Zombie	*horde = zombieHorde(size, name);

	// Announcing the horde
	std::cout << C_GRY << "Announcing the horde of '" << name << "'..." << C_RESET << std::endl;
	for (int i = 0; i < size; i++)
		horde[i].announce();

	// Destroying the horde
	std::cout << C_GRY << "Killing the horde of '" << name << "'..." << C_RESET << std::endl;
	delete[] horde;
	return (0);
}
