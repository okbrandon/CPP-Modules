/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:59:28 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/21 13:48:57 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

/* Constructors & Destructors */
Cure::Cure(void) : AMateria("cure") {}

Cure::Cure(const Cure &cure) : AMateria(cure) {
	*this = cure;
}

Cure::~Cure(void) {}

/* Functions */
void	Cure::use(ICharacter &target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

AMateria*	Cure::clone(void) const {
	return (new Cure(*this));
}

/* Overloaded operators */
Cure	&Cure::operator=(const Cure &cure) {
	this->_type = cure._type;
	return (*this);
}