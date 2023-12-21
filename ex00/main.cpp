/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 14:40:12 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/12/21 17:47:53 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << BRED "[BitcoinExchange] " CRESET "./btc <fileName>" << std::endl;
		return (1);
	}
	try {
		BitcoinExchange	BitcoinExchange;

		BitcoinExchange.initDatabase("data.csv");
	} catch (std::exception &exception) {
		std::cout << BRED "[BitcoinExchange] " CRESET "Exception caught!" << std::endl;
		std::cout << exception.what() << std::endl;
	}
	(void) argv;
	return (0);
}