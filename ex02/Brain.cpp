/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:05:37 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/21 11:16:52 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/* Constructors & Destructors*/
Brain::Brain(void) {
	std::cout << BGRN "[Brain] " CRESET "New object." << std::endl;
}

Brain::Brain(const Brain &brain) {
	*this = brain;
	std::cout << BGRN "[Brain] " CRESET "Copied object." << std::endl;
}

Brain::~Brain(void) {
	std::cout << BRED "[Brain] " CRESET "Deleting object." << std::endl;
}

/* Overloaded operators */
Brain	&Brain::operator=(const Brain &brain) {
	for (int i = 0; i < 100; i++)
		this->ideas[i] = brain.ideas[i];
	return (*this);
}