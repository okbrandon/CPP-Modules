/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StupidTypeConvertions.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:03:37 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/11/23 15:36:31 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "StupidTypeConvertions.hpp"

int		StupidTypeConvertions::ft_stoi(std::string &str) {
	int	i;

	std::istringstream(str) >> i;
	return (i);
}

float	StupidTypeConvertions::ft_stof(std::string &str) {
	float	f;

	std::istringstream(str) >> f;
	return (f);
}

double	StupidTypeConvertions::ft_stod(std::string &str) {
	double	d;

	std::istringstream(str) >> d;
	return (d);
}