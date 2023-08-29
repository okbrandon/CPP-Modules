/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 10:49:11 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/08/29 12:36:13 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point {

	private:
		const Fixed	_x;
		const Fixed	_y;

	public:
		Point(void);
		Point(const float x, const float y);
		Point(const Point &point);
		~Point(void);

		Point	&operator=(const Point &point);
		Point	operator+(const Point &point);
		bool	operator==(const Point &point);

		const Fixed	&getX(void) const;
		const Fixed	&getY(void) const;

};

#endif