/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:58:01 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/15 17:59:24 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria {
	
	private:

	public:
		Cure(void);
		Cure(const Cure &cure);
		~Cure(void);

		AMateria*	clone(void) const;
		void		use(ICharacter &target);

		Cure	&operator=(const Cure &cure);
	
};

#endif