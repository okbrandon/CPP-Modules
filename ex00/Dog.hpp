/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 13:01:50 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/11 14:50:27 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal {

	private:

	public:
		Dog(void);
		Dog(const Dog &dog);
		~Dog(void);

		Dog	&operator=(const Dog &dog);

		virtual void	makeSound(void) const;

};

#endif