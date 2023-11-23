/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 11:30:24 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/11/23 15:11:29 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int argc, char **argv) {
	if (argc == 2) {
		std::string	literal = argv[1];
		try {
			ScalarConverter::convert(literal);	
		} catch (std::exception &exception) {
			std::cout << BRED "[ScalarConverter] " CRESET "Exception caught!" << std::endl;
			std::cout << exception.what() << std::endl;
		}
	}
	else std::cout << BRED "[ScalarConverter] " CRESET "Usage: ./scalarConverter <literal>" << std::endl;
	return (0);
}