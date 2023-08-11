/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 09:32:59 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/08/11 10:34:04 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

int	main(void)
{
	std::cout << C_GRY << "Calling newZombie named 'Dumbass'..." << C_RESET << std::endl;
	// First test
	Zombie	*dumbass = newZombie("Dumbass");
	dumbass->announce();

	std::cout << C_GRY << "Calling randomChump named 'Pedro'..." << C_RESET << std::endl;
	// Second test
	randomChump("Pedro");

	std::cout << C_GRY << "Killing Zombie object called 'Dumbass'..." << C_RESET << std::endl;
	delete dumbass;
	return (0);
}
