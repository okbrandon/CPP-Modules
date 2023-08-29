/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 12:29:15 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/08/29 14:54:02 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/** Area A = [ x1(y2 – y3) + x2(y3 – y1) + x3(y1-y2)]/2 */
Fixed	triangleArea(Point const a, Point const b, Point const c) {
	Fixed	result = ((Fixed) a.getX() * ((Fixed) b.getY() - (Fixed) c.getY())
				+ (Fixed) b.getX() * ((Fixed) c.getY() - (Fixed) a.getY())
				+ (Fixed) c.getX() * ((Fixed) a.getY() - (Fixed) b.getY())) / 2.0f;

	if (result < 0)
		result = result * -1;
	return (result);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point) {
	Fixed	areaABC = triangleArea(a, b, c);
	Fixed	areaPBC = triangleArea(point, b, c);
	Fixed	areaPAC = triangleArea(a, point, c);
	Fixed	areaPAB = triangleArea(a, b, point);

	/** Check if the point lies on the same side of each edge as the opposite vertex */
	bool	liesSideOfEdge1 = (areaABC > 0) == (areaPBC > 0);
	bool	liesSideOfEdge2 = (areaABC > 0) == (areaPAC > 0);
	bool	liesSideOfEdge3 = (areaABC > 0) == (areaPAB > 0);

	return (areaABC == areaPBC + areaPAC + areaPAB
		&& liesSideOfEdge1 && liesSideOfEdge2 && liesSideOfEdge3);
}