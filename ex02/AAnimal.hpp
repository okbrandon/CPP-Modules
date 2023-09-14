/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 12:51:45 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/14 12:32:37 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class AAnimal {

	protected:
		std::string	_type;

	public:
		AAnimal(void);
		AAnimal(std::string type);
		AAnimal(const AAnimal &animal);
		virtual ~AAnimal(void);

		virtual AAnimal	&operator=(const AAnimal &animal);

		virtual void	makeSound(void) const = 0;

		std::string		getType(void) const;
		virtual Brain	*getBrain(void) const;

};

#endif