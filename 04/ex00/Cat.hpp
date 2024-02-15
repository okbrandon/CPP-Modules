/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 12:54:57 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/21 10:46:44 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal {

	private:

	public:
		/* Constructors & Destructors */
		Cat(void);
		Cat(const Cat &cat);
		~Cat(void);

		/* Functions */
		virtual void	makeSound(void) const;

		/* Overloaded operators */
		Cat	&operator=(const Cat &cat);

};

#endif