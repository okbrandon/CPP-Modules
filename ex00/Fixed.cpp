/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 16:29:49 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/08/21 17:30:36 by bsoubaig         ###   ########.fr       */
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

Fixed::~Fixed(void) {
	std::cout << C_RED << "💣 Destructor called." << C_RESET << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &fixed) {
	std::cout << C_GRY << "🟰 Copy assignment operator called." << C_RESET << std::endl;
	this->_value = fixed.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const {
	std::cout << C_GRY << "🤙 getRawBits member function called." << C_RESET << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits(int const raw) {
	this->_value = raw;
}