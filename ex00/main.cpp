/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 09:21:24 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/08/31 12:11:48 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void) {
	ClapTrap	pedro("Pedro");
	ClapTrap	alexandre("Alexandre");

	/** Pedro attacks Alexandre */
	std::cout << C_GRY "Pedro attacks Alexandre" C_RESET << std::endl;
	pedro.attack("Alexandre");
	alexandre.takeDamage(5);
	/** Alexandre's healing */
	std::cout << C_GRY "Alexandre's healing" C_RESET << std::endl;
	alexandre.beRepaired(10);
	/** Alexandre attacks Pedro */
	std::cout << C_GRY "Alexandre attacks Pedro" C_RESET << std::endl;
	alexandre.attack("Pedro");
	pedro.takeDamage(5);
	/** Pedro's emptying all his energy */
	std::cout << C_GRY "Pedro's angry and emptying his energy" C_RESET << std::endl;
	for (int i = 0; i < 9; i++) {
		pedro.attack("Alexandre");
		alexandre.takeDamage(1);
	}
	/** Pedro is trying to kill Alexandre */
	std::cout << C_GRY "Pedro tries to finish off Alexandre" C_RESET << std::endl;
	pedro.attack("Alexandre");
	/** Alexandre finishes off Pedro */
	std::cout << C_GRY "Alexandre finishes off Pedro" C_RESET << std::endl;
	alexandre.attack("Pedro");
	pedro.takeDamage(20);

	std::cout << C_GRY "Battle is over!" C_RESET << std::endl;
	return (0);
}