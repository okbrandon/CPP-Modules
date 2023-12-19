/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 16:20:05 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/12/19 18:46:02 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <cstdlib>

# define BRED	"\033[1;31m"
# define BGRN	"\033[1;32m"
# define BYEL	"\033[1;33m"
# define BBLU	"\033[1;34m"
# define BMAG	"\033[1;35m"
# define BCYN	"\033[1;36m"
# define BWHT	"\033[1;37m"
# define CRESET	"\033[0m"

class Span {
	
	private:
		unsigned int		N;
		std::vector<int>	vector;

	public:
		/* Constructors & Destructors */
		Span(void);
		Span(unsigned int N);
		Span(const Span &origin);
		~Span(void);

		/* Exceptions */
		class OverflowException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class NoSpanException : public std::exception {
			public:
				virtual const char* what() const throw();	
		};

		/* Functions */
		void	addNumber(unsigned int number);
		int		shortestSpan(void);
		int		longestSpan(void);
		void	randomFill(unsigned int N);

		/* Overloaded operators */
		Span	&operator=(const Span &origin);

};

#endif