/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 09:21:24 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/21 10:27:55 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void) {
	ClapTrap	pedro("Pedro");
	ClapTrap	alexandre("Alexandre");

	/** Pedro attacks Alexandre */
	std::cout << BWHT "Pedro attacks Alexandre" CRESET << std::endl;
	pedro.attack("Alexandre");
	alexandre.takeDamage(5);
	/** Alexandre's healing */
	std::cout << BWHT "Alexandre's healing" CRESET << std::endl;
	alexandre.beRepaired(10);
	/** Alexandre attacks Pedro */
	std::cout << BWHT "Alexandre attacks Pedro" CRESET << std::endl;
	alexandre.attack("Pedro");
	pedro.takeDamage(5);
	/** Pedro's emptying all his energy */
	std::cout << BWHT "Pedro's angry and emptying his energy" CRESET << std::endl;
	for (int i = 0; i < 9; i++) {
		pedro.attack("Alexandre");
		alexandre.takeDamage(1);
	}
	/** Pedro is trying to kill Alexandre */
	std::cout << BWHT "Pedro tries to finish off Alexandre" CRESET << std::endl;
	pedro.attack("Alexandre");
	/** Alexandre finishes off Pedro */
	std::cout << BWHT "Alexandre finishes off Pedro" CRESET << std::endl;
	alexandre.attack("Pedro");
	pedro.takeDamage(20);

	std::cout << BWHT "Battle is over!" CRESET << std::endl;

	// Tests are done
	std::cout << BYEL "All tests completed. Want to check for leaks? Run 'make debug'" CRESET << std::endl;
	return (0);
}