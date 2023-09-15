/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:31:50 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/14 14:40:05 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) {
	this->_type = "unidentified";
}

AMateria::AMateria(std::string const &type) {
	this->_type = type;
}

AMateria::AMateria(const AMateria &materia) {
	*this = materia;
}

AMateria::~AMateria(void) {}

AMateria	&AMateria::operator=(const AMateria &materia) {
	this->_type = materia._type;
	return (*this);
}

void	AMateria::use(ICharacter &target) {
	std::cout << "* unidentified materia thrown at " << target.getName() << "*" << std::endl;
}

std::string const	&AMateria::getType(void) const {
	return (this->_type);
}