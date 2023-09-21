/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 09:21:24 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/21 10:37:52 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void) {
	FragTrap	pedro("Pedro");
	ScavTrap	tommi("Tommi");

	/** Pedro attacks himself and suggests a high fives */
	pedro.attack("himself");
	pedro.takeDamage(30);
	pedro.highFivesGuys();
	/** Tommi kills Pedro and enters gate keeper mode */
	for (int i = 0; i < 4; i++) {
		tommi.attack("Pedro");
		pedro.takeDamage(20);
	}
	tommi.guardGate();

	std::cout << BWHT "Battle is over!" CRESET << std::endl;

	// Tests are done
	std::cout << BYEL "All tests completed. Want to check for leaks? Run 'make debug'" CRESET << std::endl;
	return (0);
}