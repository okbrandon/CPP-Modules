/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 10:44:38 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/11/24 10:51:17 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

# define BRED	"\033[1;31m"
# define BGRN	"\033[1;32m"
# define BCYN	"\033[1;36m"
# define BWHT	"\033[1;37m"
# define CRESET	"\033[0m"

void	testSubject(void) {
	std::cout << BWHT "\n>>> RUNNING SUBJECT TESTS\n" CRESET << std::endl;
	/* Serialize then deserialize and compares the original pointer */
	Data	data;

	data._id = 42;
	std::cout <<  "Original pointer: " BCYN << &data << CRESET << std::endl;
	/* Serialize & Deserialize */
	uintptr_t	serialized = Serializer::serialize(&data);
	Data	*deserialized = Serializer::deserialize(serialized);
	
	std::cout << "Serialized data: " BCYN << serialized << CRESET << std::endl;
	std::cout << "Deserialized pointer: " BCYN << deserialized << CRESET << std::endl;
	/* Comparison */
	if (deserialized == &data)
		std::cout << BGRN "[OK] " CRESET << "Deserialized pointer is equal to original pointer" << std::endl;
	else
		std::cout << BRED "[KO] " CRESET << "Deserialized pointer is not equal to original pointer" << std::endl;
}

int	main(void) {
	testSubject();
	return (0);
}