/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 13:05:00 by bsoubaig          #+#    #+#             */
/*   Updated: 2024/01/08 11:03:01 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <cstdlib>

template <class T> class Array {

	private:
		T				*_array;
		unsigned int	_length;
		
	public:
		/* Constructors & Destructors */
		Array(void);
		Array(unsigned int n);
		Array(const Array &origin);
		~Array(void);

		/* Exceptions */
		class OutOfBoundsException : public std::exception {
			public:
				virtual const char*	what() const throw();	
		};

		/* Functions */
		unsigned int	size(void) const;

		/* Overloaded operators */
		Array	&operator=(const Array &origin);
		T		&operator[](unsigned int i);
		const T	&operator[](unsigned int i) const;

};

/* Including class methods definition */
# include "Array.tpp"

#endif