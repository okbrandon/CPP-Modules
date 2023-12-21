/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 14:54:45 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/12/21 17:59:43 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

/* Constructors & Destructors */
BitcoinExchange::BitcoinExchange(void) {
	
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &origin) {
	*this = origin;
}

BitcoinExchange::~BitcoinExchange(void) {}

/* Private functions */
int		BitcoinExchange::_ft_stoi(std::string &str) {
	int	i;

	std::istringstream(str) >> i;
	return (i);
}

float	BitcoinExchange::_ft_stof(std::string &str) {
	float	f;

	std::istringstream(str) >> f;
	return (f);
}

/* Exceptions */
const char*	BitcoinExchange::FileReadException::what() const throw() {
	return ("An error occurred while reading the database.");
}

/* Functions */
void	BitcoinExchange::initDatabase(std::string fileName) {
	std::ifstream	infile(fileName.c_str());
	std::string		line;

	if (infile.fail() || !infile.is_open())
		throw BitcoinExchange::FileReadException();
	std::getline(infile, line);
	while (std::getline(infile, line)) {
		std::string	date;
		std::string	rate;
		size_t		delimiter;

		delimiter = line.find(",");
		date = line.substr(0, delimiter);
		rate = line.substr(delimiter + 1);
		if (date.empty() || rate.empty())
			throw BitcoinExchange::FileReadException();
		this->_database.insert(std::pair<std::string, float>(date, _ft_stof(rate)));
	}
	infile.close();
}

/* Overloaded operators */
BitcoinExchange	&BitcoinExchange::operator=(const BitcoinExchange &origin) {
	this->_database = origin._database;
	return (*this);
}