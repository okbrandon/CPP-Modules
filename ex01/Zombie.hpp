/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 09:12:39 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/08/11 10:36:43 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

# define C_RESET 	"\x1b[0m"
# define C_RED		"\x1b[31m\x1b[1m"
# define C_GRY		"\x1b[90m\x1b[1m"
# define C_GRN		"\x1b[32m\x1b[1m"

class	Zombie {

	private:
		std::string	_name;

	public:
		Zombie(std::string name);
		Zombie(void);
		~Zombie(void);

		void	announce(void);
		void	setName(std::string name);

};

#endif
