/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 10:20:53 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/08/11 10:45:19 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

# define C_RESET 	"\x1b[0m"
# define C_RED		"\x1b[31m\x1b[1m"
# define C_GRY		"\x1b[90m\x1b[1m"
# define C_GRN		"\x1b[32m\x1b[1m"

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
