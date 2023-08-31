/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 09:21:24 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/08/31 15:14:09 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void) {
	DiamondTrap	monster("Ava");

	monster.whoAmI();
	monster.attack("herself");
	monster.takeDamage(30);

	std::cout << C_GRY "Battle is over!" C_RESET << std::endl;
	return (0);
}