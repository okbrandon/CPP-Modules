/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:39:27 by bsoubaig          #+#    #+#             */
/*   Updated: 2024/01/11 13:00:29 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <iomanip>
# include <algorithm>
# include <deque>
# include <vector>
# include <ctime>
# include <cstring>

# define BRED	"\033[1;31m"
# define BGRN	"\033[1;32m"
# define BYEL	"\033[1;33m"
# define BBLU	"\033[1;34m"
# define BMAG	"\033[1;35m"
# define BCYN	"\033[1;36m"
# define BWHT	"\033[1;37m"
# define CRESET	"\033[0m"

class PmergeMe {

	private:
		/* Constructors & Destructors */
		PmergeMe(void);

		/* Private functions */
		bool	_isExpressionValid(int argc, char **argv);
		template <class T> void		_merge(T &c, int left, int median, int right);
		template <class T> void		_insertSort(T &c, int left, int right);
		template <class T> double	_sort(T &c);
		template <class T> void		_print(T &c);

		/* Overloaded operators */
		PmergeMe	&operator=(const PmergeMe &origin);

	public:
		/* Constructors & Destructors */
		PmergeMe(int argc, char **argv);
		PmergeMe(const PmergeMe &origin);
		~PmergeMe(void);

		/* Exceptions */
		class NotEnoughArgsException : public std::exception {
			public:
				virtual const char*	what() const throw();
		};
		class InvalidNumbersException : public std::exception {
			public:
				virtual const char*	what() const throw();
		};

};

# include "PmergeMe.tpp"

#endif