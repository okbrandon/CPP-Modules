/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 12:54:57 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/14 12:33:14 by bsoubaig         ###   ########.fr       */
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
		Cat(void);
		Cat(const Cat &cat);
		~Cat(void);

		Cat	&operator=(const Cat &cat);

		virtual void	makeSound(void) const;

		Brain	*getBrain(void) const;

};

#endif