/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 18:06:59 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/15 18:09:17 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include "AMateria.hpp"

class IMateriaSource {  

	public:
		virtual ~IMateriaSource() {}
		virtual void 		learnMateria(AMateria*) = 0;
		virtual AMateria*	createMateria(std::string const &type) = 0;

};

#endif