/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 14:59:48 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/11 15:34:10 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain {
	
	protected:

	public:
		std::string	ideas[100];

		Brain(void);
		Brain(const Brain &brain);
		~Brain(void);

		Brain	&operator=(const Brain &brain);

};

#endif