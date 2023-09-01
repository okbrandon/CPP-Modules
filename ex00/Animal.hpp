/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 12:51:45 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/01 14:30:49 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal {

	protected:
		std::string	_type;

	public:
		Animal(void);
		Animal(std::string type);
		virtual ~Animal(void);

		virtual void	makeSound(void) const;

		std::string	getType(void) const;

};

#endif