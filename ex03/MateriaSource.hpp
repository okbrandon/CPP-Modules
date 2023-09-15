/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 18:11:01 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/15 18:17:47 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

# define MAX_TEMPLATES	4

class MateriaSource : public IMateriaSource {

	private:
		AMateria*	_templates[MAX_TEMPLATES];

		void	_createTemplates(void);
		void	_deleteTemplates(void);

	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource &materiaSource);
		~MateriaSource(void);

		void		learnMateria(AMateria* materia);
		AMateria*	createMateria(std::string const &type);

		MateriaSource	&operator=(const MateriaSource &materiaSource);

};

#endif