/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 18:02:48 by bsoubaig          #+#    #+#             */
/*   Updated: 2024/06/18 17:31:49 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

/* Constructors & Destructors */
ScalarConverter::ScalarConverter(void) {}

ScalarConverter::ScalarConverter(ScalarConverter const &scalarConverter) {
	(void) scalarConverter;
}

ScalarConverter::~ScalarConverter(void) {}

/* Exceptions */
const char* ScalarConverter::UnknownTypeException::what() const throw() {
	return ("Provided literal is not a valid type");
}

/* Main converter */
void	ScalarConverter::convert(std::string &literal) {
	if (literal.size() == 0)
		throw ScalarConverter::UnknownTypeException();
	e_type	type = _getType(literal);

	if (type == UNKNOWN)
		throw ScalarConverter::UnknownTypeException();
	std::cout << BYEL "[ScalarConverter] " << CRESET << "Type detected: " << \
		BCYN << _stringFromEnum(type) << CRESET << std::endl;
	if (literal.size() == 1 && !std::isdigit(literal.at(0)) && std::isprint(literal.at(0))) {
		std::cout << "char: '" << literal.at(0) << "'" << std::endl;
		std::cout << "int: " << static_cast<int>(literal.at(0)) << std::endl;
		std::cout << "float: " << static_cast<float>(literal.at(0)) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(literal.at(0)) << ".0" << std::endl;
		return;
	}
	_printChar(literal);
	_printInt(literal);
	_printFloat(literal);
	_printDouble(literal);
}

/* Printers */
void	ScalarConverter::_printChar(std::string &literal) {
	char	c = _toChar(literal);
	double	d = _toDouble(literal);

	if (d > CHAR_MAX || d < -CHAR_MAX || _isNan(literal))
		std::cout << "char: impossible" << std::endl;
	else if (!std::isprint(static_cast<unsigned char>(d)))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << c << "'" << std::endl;
}

void	ScalarConverter::_printInt(std::string &literal) {
	int		i = _toInt(literal);
	double	d = _toDouble(literal);
	
	if (d > INT_MAX || d < -INT_MAX || _isNan(literal))
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << i << std::endl;
}

void	ScalarConverter::_printFloat(std::string &literal) {
	float	f = _toFloat(literal);

	if (!_isNan(literal)) {
		if (f > FLT_MAX || f < -FLT_MAX) {
			std::cout << "float: impossible" << std::endl;
		} else {
			if (f == (int)f)
				std::cout << "float: " << f << ".0f" << std::endl;
			else
				std::cout << "float: " << f << "f" << std::endl;
		}
		return ;
	}
	/* Pseudo literal */
	if (!literal.substr(literal.size() - 2).compare("ff"))
		std::cout << "float: " << literal << std::endl;
	else
		std::cout << "float: " << literal << "f" << std::endl;
}

void	ScalarConverter::_printDouble(std::string &literal) {
	float	f = _toFloat(literal);
	double	d = _toDouble(literal);

	if (!_isNan(literal)) {
		if (d >= DBL_MAX || d <= -DBL_MAX) {
			std::cout << "double: impossible" << std::endl;
		} else {
			if (f == (int)f)
				std::cout << "double: " << d << ".0" << std::endl;
			else
				std::cout << "double: " << d << std::endl;
		}
		return ;
	}
	/* Pseudo literal */
	if (!literal.substr(literal.size() - 2).compare("ff"))
		std::cout << "double: " << literal.substr(0, literal.size() - 1) << std::endl;
	else
		std::cout << "double: " << literal << std::endl;
}

/* Converters */
char	ScalarConverter::_toChar(std::string &literal) {
	double	d = StupidTypeConvertions::ft_stod(literal);
	return (static_cast<char>(d));
}

int		ScalarConverter::_toInt(std::string &literal) {
	double	d = StupidTypeConvertions::ft_stod(literal);
	return (static_cast<int>(d));
}

float	ScalarConverter::_toFloat(std::string &literal) {
	double	d = StupidTypeConvertions::ft_stod(literal);
	return (static_cast<float>(d));
}

double	ScalarConverter::_toDouble(std::string &literal) {
	double	d = StupidTypeConvertions::ft_stod(literal);
	return (static_cast<double>(d));
}

/* Utils */
bool	ScalarConverter::_isNan(std::string &literal) {
	return (!literal.compare("-inff") || !literal.compare("+inff") \
		|| !literal.compare("nanf") || !literal.compare("-inf") \
		|| !literal.compare("+inf") || !literal.compare("nan"));
}

bool	ScalarConverter::_isChar(std::string &literal) {
	if (literal.length() != 1)
		return (false);
	if (literal.at(0) > std::numeric_limits<char>::max() \
		|| literal.at(0) < std::numeric_limits<char>::min())
		return (false);
	if (std::isdigit(literal.at(0)))
		return (false);
	return (true);
}

bool	ScalarConverter::_isInt(std::string &literal) {
	for (size_t i = (literal.at(0) == '-' ? 1 : 0); i < literal.length(); i++)
		if (!std::isdigit(literal.at(i)))
			return (false);
	return (true);
}

bool	ScalarConverter::_isFloat(std::string &literal) {
	bool	hasDot = false;

	if (!literal.compare("-inff") || !literal.compare("+inff") \
		|| !literal.compare("nanf"))
		return (true);
	if (literal.at(literal.length() - 1) != 'f')
		return (false);
	for (size_t i = (literal.at(0) == '-' ? 1 : 0); i < literal.length() - 1; i++) {
		if (literal.at(i) == '.') {
			if (hasDot)
				return (false);
			hasDot = true;
		}
		else if (!std::isdigit(literal.at(i)))
			return (false);
	}
	return (true);
}

bool	ScalarConverter::_isDouble(std::string &literal) {
	bool	hasDot = false;

	if (!literal.compare("-inf") || !literal.compare("+inf") \
		|| !literal.compare("nan"))
		return (true);
	for (size_t i = (literal.at(0) == '-' ? 1 : 0); i < literal.length(); i++) {
		if (literal.at(i) == '.') {
			if (hasDot)
				return (false);
			hasDot = true;
		}
		else if (!std::isdigit(literal.at(i)))
			return (false);
	}
	return (true);
}

e_type	ScalarConverter::_getType(std::string &literal) {
	if (_isChar(literal))
		return (CHAR);
	if (_isInt(literal))
		return (INT);
	if (_isFloat(literal))
		return (FLOAT);
	if (_isDouble(literal))
		return (DOUBLE);
	return (UNKNOWN);
}

std::string	ScalarConverter::_stringFromEnum(e_type type) {
	if (type == CHAR)
		return ("CHAR");
	if (type == INT)
		return ("INT");
	if (type == FLOAT)
		return ("FLOAT");
	if (type == DOUBLE)
		return ("DOUBLE");
	return ("UNKNOWN");
}

/* Overloaded operators */
ScalarConverter	&ScalarConverter::operator=(ScalarConverter const &scalarConverter) {
	(void) scalarConverter;
	return (*this);
}