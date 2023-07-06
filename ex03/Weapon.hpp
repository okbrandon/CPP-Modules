/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 10:20:53 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/07/06 10:24:46 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class	Weapon {

	private:
		std::string	_type;

	public:
		Weapon(std::string type);
		~Weapon(void);

		std::string	getType(void);
		void		setType(std::string type);

};

#endif
