/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 12:51:45 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/21 11:15:24 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

# define BRED	"\e[1;31m"
# define BGRN	"\e[1;32m"
# define BYEL	"\e[1;33m"
# define BBLU	"\e[1;34m"
# define BMAG	"\e[1;35m"
# define BCYN	"\e[1;36m"
# define BWHT	"\e[1;37m"
# define CRESET	"\e[0m"

class AAnimal {

	protected:
		std::string	_type;

	public:
		/* Constructors & Destructors */
		AAnimal(void);
		AAnimal(std::string type);
		AAnimal(const AAnimal &animal);
		virtual ~AAnimal(void);

		/* Functions */
		virtual void	makeSound(void) const = 0;

		/* Getters */
		std::string		getType(void) const;
		virtual Brain	*getBrain(void) const;

		/* Overloaded operators */
		virtual AAnimal	&operator=(const AAnimal &animal);

};

#endif