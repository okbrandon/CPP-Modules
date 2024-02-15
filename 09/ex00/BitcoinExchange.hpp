/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 14:40:52 by bsoubaig          #+#    #+#             */
/*   Updated: 2024/01/15 17:41:04 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <sstream>
# include <fstream>
# include <map>

# define BRED	"\033[1;31m"
# define BGRN	"\033[1;32m"
# define BYEL	"\033[1;33m"
# define BBLU	"\033[1;34m"
# define BMAG	"\033[1;35m"
# define BCYN	"\033[1;36m"
# define BWHT	"\033[1;37m"
# define CRESET	"\033[0m"

class BitcoinExchange {

	private:
		/* Attributes */
		std::map<std::string, float>	_database;

		/* Private functions */
		int		_ft_stoi(const std::string &str);
		float	_ft_stof(const std::string &str);
		float	_getExchangeRate(const std::string &date);
		bool	_isDateValid(const std::string &date);
		bool	_isValueValid(const std::string &value);

	public:
		/* Constructors & Destructors */
		BitcoinExchange(void);
		BitcoinExchange(const BitcoinExchange &origin);
		~BitcoinExchange(void);

		/* Exceptions */
		class FileReadException : public std::exception {
			public:
				virtual const char* what() const throw();
		};

		/* Functions */
		void	initDatabase(std::string fileName);
		void	printExchange(std::string fileName);

		/* Overloaded operators */
		BitcoinExchange	&operator=(const BitcoinExchange &origin);

};

#endif