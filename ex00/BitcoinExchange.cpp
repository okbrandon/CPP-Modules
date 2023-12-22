/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 14:54:45 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/12/22 16:58:54 by bsoubaig         ###   ########.fr       */
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
int		BitcoinExchange::_ft_stoi(const std::string &str) {
	int	i;

	std::istringstream(str) >> i;
	return (i);
}

float	BitcoinExchange::_ft_stof(const std::string &str) {
	float	f;

	std::istringstream(str) >> f;
	return (f);
}

float	BitcoinExchange::_getExchangeRate(const std::string &date) {
	std::map<std::string, float>::iterator	it = this->_database.lower_bound(date);

	if (date != it->first && it != this->_database.begin())
		it--;
	if (it == this->_database.end())
		it--;
	return (it->second);
}

bool	BitcoinExchange::_isDateValid(const std::string &date) {
	int		maxDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int		year = _ft_stoi(date.substr(0, 4));
	int		month = _ft_stoi(date.substr(5, 2));
	int		day = _ft_stoi(date.substr(8, 2));
	bool	isLeapYear = ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);

	if (isLeapYear) // February
		maxDays[1] = 29;
	if (year < 1000 || year > 9999)
		return (false);
	if (month < 1 || month > 12)
		return (false);
	if (day < 1 || day > maxDays[month - 1])
		return (false);
	return (true);
}

/* Exceptions */
const char*	BitcoinExchange::FileReadException::what() const throw() {
	return ("An error occurred while reading the file.");
}

/* Functions */
void	BitcoinExchange::initDatabase(std::string fileName) {
	std::ifstream	infile(fileName.c_str());
	std::string		line;

	if (infile.fail() || !infile.is_open())
		throw BitcoinExchange::FileReadException();
	while (std::getline(infile, line)) {
		if (!line.compare("date,exchange_rate"))
			continue;
		size_t		delimiter = line.find(",");
		std::string	date = line.substr(0, delimiter);
		std::string	rate = line.substr(delimiter + 1);
		
		this->_database.insert(std::pair<std::string, float>(date, _ft_stof(rate)));
	}
	infile.close();
}

void	BitcoinExchange::printExchange(std::string fileName) {
	std::ifstream	infile(fileName.c_str());
	std::string		line;

	if (infile.fail() || !infile.is_open())
		throw BitcoinExchange::FileReadException();
	while (std::getline(infile, line)) {
		if (!line.compare("date | value"))
			continue;
		// Check if line contains a correctly formatted date
		bool	datePresent = line.length() > 13 && line.at(4) == '-' \
								&& line.at(7) == '-' && line.at(10) == ' ';

		if (!datePresent) {
			std::cout << BRED "Error: " CRESET "bad input => " BCYN \
				<< line << CRESET << std::endl;
			continue;
		}
		
		// Check if there's a delimiter 'date | value'
		size_t	delimiter = line.find("|");
		
		if (delimiter == line.npos) {
			std::cout << BRED "Error: " CRESET "bad input => " BCYN \
				<< line << CRESET << std::endl;
			continue;
		}
		
		// Retrieving date and value
		std::string	date = line.substr(0, delimiter - 1);
		float		value = _ft_stof(line.substr(delimiter + 1));
		
		if (!_isDateValid(date)) {
			std::cout << BRED "Error: " CRESET "date is wrong => " BCYN \
				<< line << CRESET << std::endl;
			continue;
		}
		if (value < 0) {
			std::cout << BRED "Error: " CRESET "not a positive number." << std::endl;
			continue;
		}
		if (value > 1000) {
			std::cout << BRED "Error: " CRESET "too large a number." << std::endl;
			continue;
		}
		float	rate = _getExchangeRate(date);
		std::cout << date << " => " << value << " = " BCYN << (rate * value) << CRESET << std::endl;
	}
}

/* Overloaded operators */
BitcoinExchange	&BitcoinExchange::operator=(const BitcoinExchange &origin) {
	this->_database = origin._database;
	return (*this);
}