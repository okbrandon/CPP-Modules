/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:47:31 by bsoubaig          #+#    #+#             */
/*   Updated: 2024/01/11 13:01:18 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

/* Constructors & Destructors */
PmergeMe::PmergeMe(void) {}

PmergeMe::PmergeMe(int argc, char **argv) {
	std::deque<int>		deque;
	std::vector<int>	vect;

	if (argc < 3)
		throw PmergeMe::NotEnoughArgsException();
	if (!_isExpressionValid(argc, argv))
		throw PmergeMe::InvalidNumbersException();
	// Filling the deque and vector
	for (int i = 1; i < argc; i++) {
		int	extractedNum = std::atoi(argv[i]);

		deque.push_back(extractedNum);
		vect.push_back(extractedNum);
	}
	
	// Displaying before sorting
	std::cout << BYEL "Before: " CRESET;
	_print(vect);
	std::cout << std::endl;

	// Sorting each container
	double	vectProcessTime = _sort(vect);
	double	dequeProcessTime = _sort(deque);

	// Displaying after sorting
	std::cout << BYEL "After: " CRESET;
	_print(vect);
	std::cout << std::endl;

	// Displaying process time
	std::cout << "Time to process a range of " << vect.size() \
		<< " elements with std::vector : " BCYN \
		<< std::fixed << std::setprecision(5) << vectProcessTime << " us" CRESET << std::endl;
	std::cout << "Time to process a range of " << vect.size() \
		<< " elements with std::deque : " BCYN \
		<< std::fixed << std::setprecision(5) << dequeProcessTime << " us" CRESET << std::endl;
}

PmergeMe::PmergeMe(const PmergeMe &origin) {
	*this = origin;
}

PmergeMe::~PmergeMe(void) {}

/* Private functions */
bool	PmergeMe::_isExpressionValid(int argc, char **argv) {
	for (int i = 1; i < argc; i++) {
		// If it is only intergers
		for (size_t j = 0; j < std::strlen(argv[i]); j++) {
			if (!std::isdigit(argv[i][j]))
				return (false);
		}
		// Check if it is only positive
		int	extractedNum = std::atoi(argv[i]);
		if (extractedNum <= 0)
			return (false);
	}
	return (true);
}

/* Exceptions */
const char*	PmergeMe::NotEnoughArgsException::what() const throw() {
	return ("You must at least specify 2 numbers to sort.");
}
const char*	PmergeMe::InvalidNumbersException::what() const throw() {
	return ("You should only put positive numbers.");
}

/* Overloaded operators */
PmergeMe	&PmergeMe::operator=(const PmergeMe &origin) {
	(void) origin;
	return (*this);
}