/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 19:06:25 by bsoubaig          #+#    #+#             */
/*   Updated: 2024/01/08 18:33:31 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template <class T> class MutantStack : public std::stack<T> {

	private:

	public:
		/* Attributes */
		typedef typename std::stack<T>::container_type::iterator				iterator;
		typedef typename std::stack<T>::container_type::const_iterator			const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator		reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator	const_reverse_iterator;

		/* Constructors & Destructors */
		MutantStack(void) {}
		MutantStack(const MutantStack &origin) {}
		~MutantStack(void) {
			this->c.clear();
		}

		/* Functions */
		iterator				begin() { return (this->c.begin()); }
		iterator				end() { return (this->c.end()); }
		const_iterator			begin() const { return (this->c.begin()); }
		const_iterator			end() const { return (this->c.end()); }
		reverse_iterator		rbegin() { return (this->c.rbegin()); }
		reverse_iterator		rend() { return (this->c.rend()); }
		const_reverse_iterator	rbegin() const { return (this->c.rbegin()); }
		const_reverse_iterator	rend() const { return (this->c.rend()); }

		/* Overloaded operators */
		MutantStack	&operator=(const MutantStack &origin) {
			this->c = origin.c;
			return (*this);	
		}

};

#endif