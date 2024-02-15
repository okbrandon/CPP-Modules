/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:18:14 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/21 13:36:23 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"
# include <iostream>

# define INVENTORY_SIZE	4

# define BRED	"\e[1;31m"
# define BGRN	"\e[1;32m"
# define BYEL	"\e[1;33m"
# define BBLU	"\e[1;34m"
# define BMAG	"\e[1;35m"
# define BCYN	"\e[1;36m"
# define BWHT	"\e[1;37m"
# define CRESET	"\e[0m"

class Character : public ICharacter {

	private:
		std::string	_name;		
		AMateria*	_inventory[INVENTORY_SIZE];

		/* Private functions */
		void	_createInventory(void);
		void	_deleteInventory(void);
	
	public:
		/* Constructors & Destructors */
		Character(void);
		Character(const std::string &name);
		Character(const Character &character);
		~Character(void);

		/* Functions */
		void	equip(AMateria* m);
		void	unequip(int idx);
		void	use(int idx, ICharacter &target);

		/* Getters */
		std::string	const	&getName(void) const;

		/* Overloaded operators */
		Character	&operator=(const Character &character);
		
};

#endif