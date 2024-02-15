/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 12:01:08 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/21 10:38:57 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {

	private:

	public:
		/* Constructors & Destructors */
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &scavTrap);
		~ScavTrap(void);

		/* Functions */
		void	attack(const std::string& target);
		void	guardGate(void);

		/* Overloaded operators */
		ScavTrap	&operator=(const ScavTrap &scavTrap);

};

#endif