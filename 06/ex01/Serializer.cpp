/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 22:40:29 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/11/23 22:40:45 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

/* Constructors & Destructors */
Serializer::Serializer(void) {}

Serializer::Serializer(Serializer const &serializer) {
	(void) serializer;
}

Serializer::~Serializer(void) {}

/* Functions */

uintptr_t	Serializer::serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*		Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

/* Overloaded operators */
Serializer	&Serializer::operator=(Serializer const &serializer) {
	(void) serializer;
	return (*this);
}