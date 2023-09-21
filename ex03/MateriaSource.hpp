/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 18:11:01 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/21 13:48:10 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

# define MAX_TEMPLATES	4

# define BRED	"\e[1;31m"
# define BGRN	"\e[1;32m"
# define BYEL	"\e[1;33m"
# define BBLU	"\e[1;34m"
# define BMAG	"\e[1;35m"
# define BCYN	"\e[1;36m"
# define BWHT	"\e[1;37m"
# define CRESET	"\e[0m"

class MateriaSource : public IMateriaSource {

	private:
		AMateria*	_templates[MAX_TEMPLATES];

		/* Private functions */
		void	_createTemplates(void);
		void	_deleteTemplates(void);

	public:
		/* Constructors & Destructors */
		MateriaSource(void);
		MateriaSource(const MateriaSource &materiaSource);
		~MateriaSource(void);

		/* Functions */
		void		learnMateria(AMateria* materia);
		AMateria*	createMateria(std::string const &type);

		/* Overloaded operators */
		MateriaSource	&operator=(const MateriaSource &materiaSource);

};

#endif