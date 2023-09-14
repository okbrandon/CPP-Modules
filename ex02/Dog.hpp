/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 13:01:50 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/14 12:33:23 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal {

	private:
		Brain	*_brain;

	public:
		Dog(void);
		Dog(const Dog &dog);
		~Dog(void);

		Dog	&operator=(const Dog &dog);

		virtual void	makeSound(void) const;

		Brain	*getBrain(void) const;

};

#endif