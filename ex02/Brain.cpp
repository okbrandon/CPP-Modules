/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:05:37 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/11 15:17:06 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {
	std::cout << "[Brain] Constructor called." << std::endl;
}

Brain::Brain(const Brain &brain) {
	*this = brain;
	std::cout << "[Brain] Copy constructor called." << std::endl;
}

Brain::~Brain(void) {
	std::cout << "[Brain] Destructor called." << std::endl;
}

Brain	&Brain::operator=(const Brain &brain) {
	for (int i = 0; i < 100; i++)
		this->ideas[i] = brain.ideas[i];
	return (*this);
}