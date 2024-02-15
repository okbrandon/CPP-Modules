/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 16:29:49 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/21 10:13:03 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* Constructors & Destructors */
Fixed::Fixed(void) {
	this->_value = 0;
}

Fixed::Fixed(const Fixed &fixed) {
	*this = fixed;
}

Fixed::Fixed(const int number) {
	this->_value = number << Fixed::_fractionalBits;
}

Fixed::Fixed(const float number) {
	this->_value = roundf(number * (1 << Fixed::_fractionalBits));
}

Fixed::~Fixed(void) {}

/* Getters */
int	Fixed::getRawBits(void) const {
	return (this->_value);
}

float	Fixed::toFloat(void) const {
	return ((float) this->_value / (1 << Fixed::_fractionalBits));
}

int	Fixed::toInt(void) const {
	return (this->_value >> Fixed::_fractionalBits);
}

Fixed	&Fixed::min(Fixed &lhs, Fixed &rhs) {
	if (lhs < rhs)
		return (lhs);
	return (rhs);
}

const Fixed	&Fixed::min(const Fixed &lhs, const Fixed &rhs) {
	if ((Fixed) lhs < (Fixed) rhs)
		return (lhs);
	return (rhs);
}

Fixed	&Fixed::max(Fixed &lhs, Fixed &rhs) {
	if (lhs < rhs)
		return (rhs);
	return (lhs);
}

const Fixed	&Fixed::max(const Fixed &lhs, const Fixed &rhs) {
	if ((Fixed) lhs < (Fixed) rhs)
		return (rhs);
	return (lhs);
}

/* Setters */
void	Fixed::setRawBits(int const raw) {
	this->_value = raw;
}

/* Overloaded operators */
Fixed	&Fixed::operator=(const Fixed &fixed) {
	this->_value = fixed._value;
	return (*this);
}

bool	Fixed::operator<(const Fixed &fixed) {
	return (this->_value < fixed._value);
}

bool	Fixed::operator>(const Fixed &fixed) {
	return (this->_value > fixed._value);
}

bool	Fixed::operator<=(const Fixed &fixed) {
	return (this->_value <= fixed._value);
}

bool	Fixed::operator>=(const Fixed &fixed) {
	return (this->_value >= fixed._value);
}

bool	Fixed::operator==(const Fixed &fixed) {
	return (this->_value == fixed._value);
}

bool	Fixed::operator!=(const Fixed &fixed) {
	return (this->_value != fixed._value);
}

Fixed	Fixed::operator+(const Fixed &fixed) {
	Fixed	temp;
	temp._value = this->_value + fixed._value;
	return (temp);
}

Fixed	Fixed::operator-(const Fixed &fixed) {
	Fixed	temp;
	temp._value = this->_value - fixed._value;
	return (temp);
}

Fixed	Fixed::operator*(const Fixed &fixed) {
	Fixed	temp;
	temp._value = (this->_value * fixed._value / (1 << Fixed::_fractionalBits));
	return (temp);
}

Fixed	Fixed::operator/(const Fixed &fixed) {
	Fixed	temp;
	temp._value = (this->_value / fixed._value * (1 << Fixed::_fractionalBits));
	return (temp);
}

Fixed	&Fixed::operator++(void) {
	++this->_value;
	return (*this);
}

Fixed	Fixed::operator++(int) {
	Fixed	post(*this);
	++(*this);
	return (post);
}

Fixed	&Fixed::operator--(void) {
	--this->_value;
	return (*this);
}

Fixed 	Fixed::operator--(int) {
	Fixed	post(*this);
	--(*this);
	return (post);
}

std::ostream	&operator<<(std::ostream &out, const Fixed &fixed) {
	out << fixed.toFloat();
	return (out);
}