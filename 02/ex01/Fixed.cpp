/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 16:29:49 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/21 10:07:37 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* Constructors & Destructors */
Fixed::Fixed(void) {
	this->_value = 0;
	std::cout << BGRN "[Fixed] " CRESET << "Default constructor called..." << std::endl;
}

Fixed::Fixed(const Fixed &fixed) {
	std::cout << BGRN "[Fixed] " CRESET << "Copy constructor called..." << std::endl;
	*this = fixed;
}

Fixed::Fixed(const int number) {
	this->_value = number << Fixed::_fractionalBits;
	std::cout << BGRN "[Fixed] " CRESET << "Int constructor called..." << std::endl;
}

Fixed::Fixed(const float number) {
	this->_value = roundf(number * (1 << Fixed::_fractionalBits));
	std::cout << BGRN "[Fixed] " CRESET << "Float constructor called..." << std::endl;
}

Fixed::~Fixed(void) {
	std::cout << BRED "[Fixed] " CRESET << "Deleting object..." << std::endl;
}

/* Getters*/
int	Fixed::getRawBits(void) const {
	std::cout << BYEL "[Fixed] " CRESET << "getRawBits member function called." << std::endl;
	return (this->_value);
}

float	Fixed::toFloat(void) const {
	return ((float) this->_value / (float) (1 << Fixed::_fractionalBits));
}

int	Fixed::toInt(void) const {
	return (this->_value >> Fixed::_fractionalBits);
}

/* Setters */
void	Fixed::setRawBits(int const raw) {
	this->_value = raw;
}

/* Overloaded operators */
Fixed	&Fixed::operator=(const Fixed &fixed) {
	std::cout << BYEL "[Fixed] " CRESET << "Copy assignment operator called." << std::endl;
	this->_value = fixed._value;
	return (*this);
}

std::ostream	&operator<<(std::ostream &out, const Fixed &fixed) {
	out << fixed.toFloat();
	return (out);
}