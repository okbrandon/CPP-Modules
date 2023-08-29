/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 12:42:59 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/08/29 15:03:29 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point);

int main(void) {
	Point	a(0, 0);
	Point	b(10, 30);
	Point	c(20, 0);

	/** Is inside */
	Point	p1(10, 15);
	std::cout <<
			"              B(10,30)" << std::endl <<
			"                / \\" << std::endl <<
			"               /   \\" << std::endl <<
			"              /     \\" << std::endl <<
			"             /   P   \\" << std::endl <<
			"            /         \\" << std::endl <<
			"     A(0,0) ----------- C(20,0)" << std::endl;
	std::cout << C_GRY << "P(10, 15) inside triangle? " << (bsp(a, b, c, p1) ? C_GRN"yes" : C_RED"no") << C_RESET << std::endl;

	/** Is outside */
	Point	p2(0, 15);
	std::cout <<
			"              B(10,30)" << std::endl <<
			"                / \\" << std::endl <<
			"               /   \\" << std::endl <<
			"              /     \\" << std::endl <<
			"           P /       \\" << std::endl <<
			"            /         \\" << std::endl <<
			"     A(0,0) ----------- C(20,0)" << std::endl;
	std::cout << C_GRY << "P(0, 15) inside triangle? " << (bsp(a, b, c, p2) ? C_GRN"yes" : C_RED"no") << C_RESET << std::endl;

	/** Is on edge */
	Point	p3(10, 0);
	std::cout <<
			"              B(10,30)" << std::endl <<
			"                / \\" << std::endl <<
			"               /   \\" << std::endl <<
			"              /     \\" << std::endl <<
			"             /       \\" << std::endl <<
			"            /         \\" << std::endl <<
			"     A(0,0) -----P----- C(20,0)" << std::endl;
	std::cout << C_GRY << "P(10, 0) inside triangle? " << (bsp(a, b, c, p3) ? C_GRN"yes" : C_RED"no") << C_RESET << std::endl;

	/** Is a vertex */
	Point	p4(10, 30);
	std::cout <<
			"          B(10,30) & P" << std::endl <<
			"                / \\" << std::endl <<
			"               /   \\" << std::endl <<
			"              /     \\" << std::endl <<
			"             /       \\" << std::endl <<
			"            /         \\" << std::endl <<
			"     A(0,0) ----------- C(20,0)" << std::endl;
	std::cout << C_GRY << "P(10, 30) inside triangle? " << (bsp(a, b, c, p4) ? C_GRN"yes" : C_RED"no") << C_RESET << std::endl;
	return (0);
}