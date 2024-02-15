/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 10:28:40 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/21 09:36:28 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class	HumanA {

	private:
		Weapon		&_weapon;
		std::string	_name;

	public:
		/* Constructors & Destructors */
		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);

		/* Functions */
		void	attack(void);

};

#endif
