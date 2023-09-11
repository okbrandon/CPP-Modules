/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 12:54:57 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/11 14:48:02 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal {

	private:

	public:
		Cat(void);
		Cat(const Cat &cat);
		~Cat(void);

		Cat	&operator=(const Cat &cat);

		virtual void	makeSound(void) const;

};

#endif