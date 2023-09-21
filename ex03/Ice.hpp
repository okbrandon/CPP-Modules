/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:47:19 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/21 13:48:47 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria {

	private:

	public:
		/* Constructors & Destructors */
		Ice(void);
		Ice(const Ice &ice);
		~Ice(void);

		/* Functions */
		void		use(ICharacter &target);
		AMateria*	clone(void) const;
		
		/* Overloaded operators */
		Ice		&operator=(const Ice &ice);
	
};

#endif