/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 13:01:50 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/21 11:07:01 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {

	private:
		Brain	*_brain;

	public:
		/* Constructors & Destructors */
		Dog(void);
		Dog(const Dog &dog);
		~Dog(void);

		/* Functions */
		virtual void	makeSound(void) const;

		/* Getters */
		Brain	*getBrain(void) const;

		/* Overloaded operators */
		Dog	&operator=(const Dog &dog);

};

#endif