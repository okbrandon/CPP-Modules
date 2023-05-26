/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 09:12:39 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/05/26 10:45:42 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

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
