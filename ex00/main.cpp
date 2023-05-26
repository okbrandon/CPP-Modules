/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 09:32:59 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/05/26 09:46:32 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

# define C_RESET 	"\x1b[0m"
# define C_GREEN	"\x1b[32m\x1b[1m"

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

int	main(void)
{
	std::cout << C_GREEN << "Initializing Zombie object called 'Dumbass' and announcing it..." << C_RESET << std::endl;
	// First test
	Zombie	*dumbass = newZombie("Dumbass");
	dumbass->announce();

	std::cout << C_GREEN << "Initializing Zombie object called 'Pedro', announcing it and killing it..." << C_RESET << std::endl;
	// Second test
	randomChump("Pedro");

	std::cout << C_GREEN << "Killing Zombie object called 'Dumbass'..." << C_RESET << std::endl;
	delete dumbass;
	return (0);
}
