/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 14:12:32 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/10 12:54:13 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

	private:

	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(const FragTrap &fragTrap);
		~FragTrap(void);

		FragTrap	&operator=(const FragTrap &fragTrap);

		void	highFivesGuys(void);

};

#endif