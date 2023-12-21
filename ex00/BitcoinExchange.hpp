/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 14:40:52 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/12/21 17:59:37 by bsoubaig         ###   ########.fr       */
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
		int		_ft_stoi(std::string &str);
		float	_ft_stof(std::string &str);

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

		/* Overloaded operators */
		BitcoinExchange	&operator=(const BitcoinExchange &origin);

};

#endif