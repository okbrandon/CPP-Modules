/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 11:19:53 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/08/11 10:43:28 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

# define C_RESET 	"\x1b[0m"
# define C_GRN	"\x1b[32m\x1b[1m"

int	main(void)
{
	std::string	string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;

	// Init
	std::cout << "Initial value of string: " << string << std::endl;

	// Printing addresses
	std::cout << C_GRN << "Printing addresses..." << C_RESET << std::endl;
	std::cout << "Memory address of string variable: " << &string << std::endl;
	std::cout << "Memory address held by stringPTR: " << stringPTR << std::endl;
	std::cout << "Memory address held by stringREF: " << &stringREF << std::endl;

	// Printing data
	std::cout << C_GRN << "Printing content..." << C_RESET << std::endl;
	std::cout << "Value of string variable: " << string << std::endl;
	std::cout << "Value pointed by stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value pointed by stringREF: " << string << std::endl;
	return (0);
}
