/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 18:16:24 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/21 13:59:01 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/* Constructors & Destructors */
MateriaSource::MateriaSource(void) {
	this->_createTemplates();	
}

MateriaSource::MateriaSource(const MateriaSource &materiaSource) {
	this->_deleteTemplates();
	*this = materiaSource;
}

MateriaSource::~MateriaSource(void) {
	this->_deleteTemplates();
}

/* Private functions */
void	MateriaSource::_createTemplates(void) {
	for (int i = 0; i < MAX_TEMPLATES; i++)
		this->_templates[i] = NULL;
}

void	MateriaSource::_deleteTemplates(void) {
	for (int i = 0; i < MAX_TEMPLATES; i++) {
		if (this->_templates[i]) {
			delete this->_templates[i];
			this->_templates[i] = NULL;
		}
	}
}

/* Functions */
void	MateriaSource::learnMateria(AMateria* materia) {
	for (int i = 0; i < MAX_TEMPLATES; i++) {
		if (!this->_templates[i]) {
			this->_templates[i] = materia;
			std::cout << BYEL "[MateriaSource] " CRESET "Learnt new material " BCYN << \
				materia->getType() << CRESET "..." << std::endl;
			return ;
		}
	}
	std::cout << BYEL "[MateriaSource] " CRESET "Couldn't learn new material " BCYN << \
		materia->getType() << CRESET "..." << std::endl;
	delete materia; // Deleting Materia since templates are full
}

AMateria*	MateriaSource::createMateria(std::string const &type) {
	for (int i = 0; i < MAX_TEMPLATES; i++) {
		if (this->_templates[i] && this->_templates[i]->getType() == type)
			return (this->_templates[i]->clone());
	}
	return (0);
}

/* Overloaded operators */
MateriaSource	&MateriaSource::operator=(const MateriaSource &materiaSource) {
	this->_deleteTemplates();
	for (int i = 0; i < MAX_TEMPLATES; i++) {
		if (materiaSource._templates[i])
			this->_templates[i] = materiaSource._templates[i];
	}
	return (*this);
}