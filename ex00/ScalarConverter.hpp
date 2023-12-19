/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 18:02:54 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/12/19 15:59:18 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <limits.h>
# include <float.h>
# include "StupidTypeConvertions.hpp"

# define BRED	"\033[1;31m"
# define BGRN	"\033[1;32m"
# define BYEL	"\033[1;33m"
# define BBLU	"\033[1;34m"
# define BMAG	"\033[1;35m"
# define BCYN	"\033[1;36m"
# define BWHT	"\033[1;37m"
# define CRESET	"\033[0m"

enum e_type {
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	UNKNOWN
};

class ScalarConverter {

	private:
		/* Constructors & Destructors */
		ScalarConverter(void);
		ScalarConverter(ScalarConverter const &scalarConverter);
		~ScalarConverter(void);

		/* Converters */
		static char			_toChar(std::string &literal);
		static int			_toInt(std::string &literal);
		static float		_toFloat(std::string &literal);
		static double		_toDouble(std::string &literal);
		
		/* Printers */
		static void			_printChar(std::string &literal);
		static void			_printInt(std::string &literal);
		static void			_printFloat(std::string &literal);
		static void			_printDouble(std::string &literal);
		
		/* Utils */
		static bool			_isNan(std::string &literal);
		static bool			_isChar(std::string &literal);
		static bool			_isInt(std::string &literal);
		static bool			_isFloat(std::string &literal);
		static bool			_isDouble(std::string &literal);
		static e_type		_getType(std::string &literal);
		static std::string	_stringFromEnum(e_type type);

		/* Overloaded operators */
		ScalarConverter	&operator=(ScalarConverter const &scalarConverter);
	
	public:
		/* Main converter */
		static void	convert(std::string &literal);

		/* Exceptions */
		class UnknownTypeException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		
};

#endif