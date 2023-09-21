/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 09:32:59 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/21 10:27:38 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

int	main(void) {
	std::cout << BWHT "Calling newZombie named 'Dumbass'..." CRESET << std::endl;
	// First test
	Zombie	*dumbass = newZombie("Dumbass");
	dumbass->announce();

	std::cout << BWHT "Calling randomChump named 'Pedro'..." CRESET << std::endl;
	// Second test
	randomChump("Pedro");

	std::cout << BWHT "Killing Zombie object called 'Dumbass'..." CRESET << std::endl;
	delete dumbass;

	// Tests are done
	std::cout << BYEL "All tests completed. Want to check for leaks? Run 'make debug'" CRESET << std::endl;
	return (0);
}
