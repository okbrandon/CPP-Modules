/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:38:27 by bsoubaig          #+#    #+#             */
/*   Updated: 2024/01/11 11:17:33 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv) {
	try {
		PmergeMe	sort(argc, argv);
	} catch (std::exception &exception) {
		std::cerr << BRED "[PmergeMe] " CRESET "Exception caught!" << std::endl;
		std::cerr << exception.what() << std::endl;
	}
	return (0);
}