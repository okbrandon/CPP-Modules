/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 09:21:24 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/08/31 13:59:44 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void) {
	ScavTrap	pedro("Pedro");

	/** Pedro attacks himself */
	pedro.attack("himself");
	pedro.takeDamage(20);
	pedro.guardGate();
	pedro.beRepaired(20);

	std::cout << C_GRY "Battle is over!" C_RESET << std::endl;
	return (0);
}