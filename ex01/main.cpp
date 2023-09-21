/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 09:32:59 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/21 10:27:15 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name);

int	main(void)
{
	std::string	name = "Pedro";
	int			size = 4;

	// Initializing the horde
	std::cout << BWHT "Initializing Zombie Horde object called '" << name << "'..." CRESET << std::endl;
	Zombie	*horde = zombieHorde(size, name);

	// Announcing the horde
	std::cout << BWHT "Announcing the horde of '" << name << "'..." CRESET << std::endl;
	for (int i = 0; i < size; i++)
		horde[i].announce();

	// Destroying the horde
	std::cout << BWHT "Killing the horde of '" << name << "'..." CRESET << std::endl;
	delete[] horde;

	// Tests are done
	std::cout << BYEL "All tests completed. Want to check for leaks? Run 'make debug'" CRESET << std::endl;
	return (0);
}
