/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 12:54:57 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/21 11:18:06 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal {

	private:
		Brain	*_brain;

	public:
		/* Constructors & Destructors */
		Cat(void);
		Cat(const Cat &cat);
		~Cat(void);

		/* Functions */
		virtual void	makeSound(void) const;

		/* Getters */
		Brain	*getBrain(void) const;

		/* Overloaded operators */
		Cat	&operator=(const Cat &cat);

};

#endif