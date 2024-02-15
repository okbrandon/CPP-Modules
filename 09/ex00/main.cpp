/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 14:40:12 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/12/22 12:09:51 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << BRED "Error: " CRESET "could not open file." << std::endl;
		return (1);
	}
	try {
		BitcoinExchange	bitcoinExchange;

		bitcoinExchange.initDatabase("data.csv");
		bitcoinExchange.printExchange(argv[1]);
	} catch (std::exception &exception) {
		std::cout << BRED "[BitcoinExchange] " CRESET "Exception caught!" << std::endl;
		std::cout << exception.what() << std::endl;
	}
	return (0);
}