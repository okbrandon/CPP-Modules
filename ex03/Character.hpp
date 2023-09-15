/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:18:14 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/15 17:42:21 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"
# include <iostream>

# define INVENTORY_SIZE	4

class Character : public ICharacter {

	private:
		std::string	_name;		
		AMateria*	_inventory[INVENTORY_SIZE];

		void	_createInventory(void);
		void	_deleteInventory(void);
	
	public:
		Character(void);
		Character(const std::string &name);
		Character(const Character &character);
		~Character(void);

		void	equip(AMateria* m);
		void	unequip(int idx);
		void	use(int idx, ICharacter &target);

		Character	&operator=(const Character &character);

		std::string	const	&getName(void) const;
		
};

#endif