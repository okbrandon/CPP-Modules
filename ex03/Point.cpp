/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 11:10:37 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/08/29 14:26:48 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0) {}

Point::Point(const float x, const float y) : _x(x), _y(y) {}

Point::Point(const Point &point) : _x(point._x), _y(point._y) {}

Point	&Point::operator=(const Point &point) {
	((Fixed) this->_x) = point.getX();
	((Fixed) this->_y) = point.getY();
	return (*this);
}

Point::~Point(void) {}

Point	Point::operator+(const Point &point) {
	Point	temp;

	((Fixed) temp._x) = ((Fixed) this->_x) + ((Fixed) point._x);
	((Fixed) temp._y) = ((Fixed) this->_y) + ((Fixed) point._y);
	return (temp);
}

bool	Point::operator==(const Point &point) {
	return (((Fixed) this->_x) == ((Fixed) point._x)
		&& ((Fixed) this->_y) == ((Fixed) point._y));
}

const Fixed	&Point::getX(void) const {
	return (this->_x);
}

const Fixed	&Point::getY(void) const {
	return (this->_y);
}