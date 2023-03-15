/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StringUtils.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 12:49:22 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/03/15 14:36:17 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "StringUtils.hpp"

/**
 * @brief Utils method used to add missing spaces to
 * complete a string. It'll add X missing spaces before your string.
 * 
 * @param str 					- The string to complete
 * @return std::string 			- The string completed
 */
std::string	StringUtils::addSpaces(std::string str)
{
	int			i;
	std::string	returned;

	if ((int) str.length() >= 10)
		return (str);
	i = 10 - (int) str.length();
	while (i-- > 0)
		returned.push_back(' ');
	returned.append(str);
	return (returned);
}

/**
 * @brief Utils method used to fix the width of a string.
 * It'll add a dot a the end of the string if its length is
 * greater than 10 caracters and also add missing spaces before.
 * 
 * @param str 					- The string to fix
 * @return std::string 			- The fixed string
 */
std::string	StringUtils::fixWidth(std::string str)
{
	int			i;
	std::string	returned;

	i = 0;
	while (i < (int) str.length())
	{
		if (i >= 9 && (int) str.length() > 10)
		{
			/* Limit of characters to display */
			returned.push_back('.');
			break ;
		}
		returned.push_back(str.at(i));
		i++;
	}
	returned = StringUtils::addSpaces(returned);
	return (returned);
}
