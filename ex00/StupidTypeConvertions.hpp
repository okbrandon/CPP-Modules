/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StupidTypeConvertions.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:04:09 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/11/23 15:36:35 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STUPIDTYPECONVERTIONS_HPP
# define STUPIDTYPECONVERTIONS_HPP

# include <iostream>
# include <sstream>
# include <limits>

class StupidTypeConvertions {
	
	public:
		/* Converters */
		static int		ft_stoi(std::string &str);
		static float	ft_stof(std::string &str);
		static double	ft_stod(std::string &str);

};

#endif