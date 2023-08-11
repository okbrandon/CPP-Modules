/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 10:54:31 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/08/11 10:48:47 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int	main(void)
{
	/* HumanA */
	{
		Weapon	club = Weapon("crude spiked club");
		HumanA	bob = HumanA("bob", club);

		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}

	/* HumanB */
	{
		Weapon	club = Weapon("crude spiked club");
		HumanB	jim = HumanB("jim");

		jim.attack(); // Attacks with no weapon
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	return (0);
}
