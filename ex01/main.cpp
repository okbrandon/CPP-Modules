/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 18:22:47 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/12/28 18:26:56 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int argc, char **argv) {
	if (argc == 2) {
		std::string	expression = argv[1];
		try {
			RPN	rpn;
			std::cout << rpn.run(expression) << std::endl;
		} catch (std::exception &exception) {
			std::cout << BRED "[RPN] " CRESET "Exception caught!" << std::endl;
			std::cout << exception.what() << std::endl;
		}
	}
	else std::cout << BRED "[RPN] " CRESET "Usage: ./RPN <expression>" << std::endl;
	return (0);
}