/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:01:36 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/21 13:35:07 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "ICharacter.hpp"
# include <iostream>

class AMateria {

	protected:
		std::string	_type;

	public:
		/* Constructors & Destructors */
		AMateria(void);
		AMateria(std::string const & type);
		AMateria(const AMateria	&materia);
		virtual ~AMateria(void);

		/* Functions */
		virtual void		use(ICharacter& target);

		/* Getters */
		std::string const & getType() const;
		virtual AMateria*	clone() const = 0;

		/* Overloaded operators */
		virtual AMateria	&operator=(const AMateria &materia);
		
};

#endif