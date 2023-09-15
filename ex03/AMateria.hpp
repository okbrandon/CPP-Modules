/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:01:36 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/15 17:46:56 by bsoubaig         ###   ########.fr       */
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
		AMateria(void);
		AMateria(std::string const & type);
		AMateria(const AMateria	&materia);
		virtual ~AMateria(void);

		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);

		virtual AMateria	&operator=(const AMateria &materia);

		std::string const & getType() const;
		
};

#endif