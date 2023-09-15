/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:59:28 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/15 18:01:35 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure") {}

Cure::Cure(const Cure &cure) : AMateria(cure) {
	*this = cure;
}

Cure::~Cure(void) {}

AMateria*	Cure::clone(void) const {
	return (new Cure(*this));
}

void	Cure::use(ICharacter &target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure	&Cure::operator=(const Cure &cure) {
	this->_type = cure._type;
	return (*this);
}