/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 19:06:25 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/12/20 14:01:30 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template <class T> class MutantStack : public std::stack<T> {

	private:

	public:
		/* Constructors & Destructors */
		MutantStack(void) {};
		MutantStack(const MutantStack &origin) {};
		~MutantStack(void) {};

		/* Functions */
		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin() {
			return (std::stack<T>::c.begin());
		};

		iterator end() {
			return (std::stack<T>::c.end());
		}

		/* Overloaded operators */
		MutantStack	&operator=(const MutantStack &origin) {};

};

#endif