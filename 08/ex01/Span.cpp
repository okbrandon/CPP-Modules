/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 16:31:13 by bsoubaig          #+#    #+#             */
/*   Updated: 2024/01/08 18:12:22 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/* Constructors & Destructors */
Span::Span(void) {
	this->N = 5;
	this->vector.reserve(this->N);
	std::cout << BGRN "[Span] " CRESET "New object with size " BCYN \
		<< this->N << CRESET "..." << std::endl;
}

Span::Span(unsigned int N) {
	this->N = N;
	this->vector.reserve(this->N);
	std::cout << BGRN "[Span] " CRESET "New object with size " BCYN \
		<< this->N << CRESET "..." << std::endl;
}

Span::Span(const Span &origin) {
	this->N = origin.N;
	this->vector = origin.vector;
	std::cout << BGRN "[Span] " CRESET "Copied object." << std::endl;
}

Span::~Span(void) {
	this->vector.clear();
	std::cout << BRED "[Span] " CRESET "Deleting object with size " BCYN \
		<< this->N << CRESET "..." << std::endl;
}

/* Exceptions */
const char*	Span::OverflowException::what() const throw() {
	return ("Too many items already stored.");
}

const char* Span::NoSpanException::what() const throw() {
	return ("No span can be found, stored numbers size is too low.");
}

/* Functions */
void	Span::addNumber(unsigned int number) {
	if (this->vector.size() >= this->N)
		throw Span::OverflowException();
	this->vector.push_back(number);
}

int	Span::shortestSpan(void) {
	if (this->vector.size() <= 1)
		throw Span::NoSpanException();
	std::vector<int>	temp = this->vector;
	int					shortestSpan = 0;

	std::sort(temp.begin(), temp.end());
	shortestSpan = temp[1] - temp[0];
	for (size_t i = 1; i < temp.size(); i++) {
		if (shortestSpan > temp[i] - temp[i - 1])
			shortestSpan = temp[i] - temp[i - 1];
	}
	return (shortestSpan);
}

int	Span::longestSpan(void) {
	if (this->vector.size() <= 1)
		throw Span::NoSpanException();
	std::vector<int>	temp = this->vector;
	int					longestSpan = 0;

	std::sort(temp.begin(), temp.end());
	longestSpan = temp[temp.size() - 1] - temp[0];
	return (longestSpan);
}

void	Span::randomFill(unsigned int N) {
	srand(time(NULL));
	for (unsigned int i = 0; i < N; i ++)
		this->addNumber(rand());
}

/* Overloaded operators */
Span	&Span::operator=(const Span &origin) {
	this->vector.clear();
	this->N = origin.N;
	this->vector = origin.vector;
	return (*this);
}