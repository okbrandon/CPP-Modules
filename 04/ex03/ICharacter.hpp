/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:05:37 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/15 19:01:59 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include "AMateria.hpp"
# include <iostream>

/*
 * ICharacter doesn't know what AMateria is because it hasn't been declared yet.
 * We then have to forward the declaration of the AMateria class.
 * This will inform the compiler that there is class named AMateria that will
 * be defined later.
*/
class AMateria;

class ICharacter {
	
	public:
		virtual	~ICharacter() {}
		virtual std::string const &	getName() const = 0;
		virtual void	equip(AMateria* m) = 0;
		virtual void	unequip(int idx) = 0;
		virtual void	use(int idx, ICharacter& target) = 0;
		
};

#endif