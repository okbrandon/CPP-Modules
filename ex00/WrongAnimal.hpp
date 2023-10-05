/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 14:38:13 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/10/05 16:30:35 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

# define BRED	"\e[1;31m"
# define BGRN	"\e[1;32m"
# define BYEL	"\e[1;33m"
# define BBLU	"\e[1;34m"
# define BMAG	"\e[1;35m"
# define BCYN	"\e[1;36m"
# define BWHT	"\e[1;37m"
# define CRESET	"\e[0m"

class WrongAnimal {

	protected:
		std::string	_type;

	public:
		/* Constructors & Destructors */
		WrongAnimal(void);
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal &wrongAnimal);
		virtual ~WrongAnimal(void);

		/* Functions */
		void	makeSound(void) const;

		/* Getters */
		std::string	getType(void) const;

		/* Overloaded operators */
		virtual WrongAnimal	&operator=(const WrongAnimal &wrongAnimal);

};

#endif