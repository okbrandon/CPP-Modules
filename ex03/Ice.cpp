/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:51:31 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/15 18:00:13 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice") {}

Ice::Ice(const Ice &ice) : AMateria(ice) {
	*this = ice;
}

Ice::~Ice(void) {}

AMateria*	Ice::clone(void) const {
	return (new Ice(*this));	
}

void	Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice	&Ice::operator=(const Ice &ice) {
	this->_type = ice._type;
	return (*this);
}