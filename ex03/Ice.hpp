/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:47:19 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/15 17:56:14 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria {

	private:

	public:
		Ice(void);
		Ice(const Ice &ice);
		~Ice(void);

		AMateria*	clone(void) const;
		void		use(ICharacter &target);

		Ice		&operator=(const Ice &ice);
	
};

#endif