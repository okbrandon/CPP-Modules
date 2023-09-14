/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 12:51:45 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/11 15:29:14 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class Animal {

	protected:
		std::string	_type;

	public:
		Animal(void);
		Animal(std::string type);
		Animal(const Animal &animal);
		virtual ~Animal(void);

		virtual Animal	&operator=(const Animal &animal);

		virtual void	makeSound(void) const;

		std::string		getType(void) const;
		virtual Brain	*getBrain(void) const;

};

#endif