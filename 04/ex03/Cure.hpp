/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:58:01 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/21 13:48:53 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria {
	
	private:

	public:
		/* Constructors & Destructors */
		Cure(void);
		Cure(const Cure &cure);
		~Cure(void);

		/* Functions */
		void		use(ICharacter &target);
		AMateria*	clone(void) const;
	
		/* Overloaded operators */
		Cure	&operator=(const Cure &cure);

};

#endif