/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 09:12:39 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/21 09:26:47 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

# define BRED	"\e[1;31m"
# define BGRN	"\e[1;32m"
# define BYEL	"\e[1;33m"
# define BBLU	"\e[1;34m"
# define BMAG	"\e[1;35m"
# define BCYN	"\e[1;36m"
# define BWHT	"\e[1;37m"
# define CRESET	"\e[0m"

class	Zombie {

	private:
		std::string	_name;

	public:
		/* Constructors & Destructors */
		Zombie(std::string name);
		Zombie(void);
		~Zombie(void);

		/* Functions */
		void	announce(void);

		/* Getters */
		std::string	getName(void);

		/* Setters */
		void	setName(std::string name);

};

#endif
