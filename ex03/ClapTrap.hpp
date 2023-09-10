/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 09:21:50 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/10 12:52:10 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

# define C_RESET 	"\x1b[0m"
# define C_RED		"\x1b[31m\x1b[1m"
# define C_GRY		"\x1b[90m\x1b[1m"
# define C_GRN		"\x1b[32m\x1b[1m"

class ClapTrap {

	protected:
		std::string	_name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;

	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &clapTrap);
		~ClapTrap(void);

		ClapTrap	&operator=(const ClapTrap &clapTrap);

		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

		std::string	getName(void);

};

#endif