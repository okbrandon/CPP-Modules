/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 10:59:00 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/21 09:40:41 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class	HumanB {

	private:
		std::string	_name;
		Weapon		*_weapon;

	public:
		/* Constructors & Destructors */
		HumanB(std::string name);
		~HumanB(void);

		/* Functions */
		void	attack(void);

		/* Setters */
		void	setWeapon(Weapon &weapon);

};

#endif
