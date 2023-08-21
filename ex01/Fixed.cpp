/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 16:29:49 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/08/21 19:29:24 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) {
	this->_value = 0;
	std::cout << C_GRN << "✅ Default constructor called." << C_RESET << std::endl;
}

Fixed::Fixed(const Fixed &fixed) {
	std::cout << C_GRN << "✅ Copy constructor called." << C_RESET << std::endl;
	*this = fixed;
}

Fixed::Fixed(const int number) {
	this->_value = number << Fixed::_fractionalBits;
	std::cout << C_GRN << "✅ Int constructor called." << C_RESET << std::endl;
}

Fixed::Fixed(const float number) {
	this->_value = roundf(number * (1 << Fixed::_fractionalBits));
	std::cout << C_GRN << "✅ Float constructor called." << C_RESET << std::endl;
}

Fixed::~Fixed(void) {
	std::cout << C_RED << "💣 Destructor called." << C_RESET << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &fixed) {
	std::cout << C_GRY << "🟰 Copy assignment operator called." << C_RESET << std::endl;
	this->_value = fixed._value;
	return (*this);
}

std::ostream	&operator<<(std::ostream &out, const Fixed &fixed) {
	out << fixed.toFloat();
	return (out);
}

int	Fixed::getRawBits(void) const {
	std::cout << C_GRY << "🤙 getRawBits member function called." << C_RESET << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits(int const raw) {
	this->_value = raw;
}

float	Fixed::toFloat(void) const {
	return ((float) this->_value / (float) (1 << Fixed::_fractionalBits));
}

int	Fixed::toInt(void) const {
	return (this->_value >> Fixed::_fractionalBits);
}