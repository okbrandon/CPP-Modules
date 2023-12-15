/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 18:43:05 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/12/15 19:36:21 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <list>

/* Exceptions */
template <class T> class UnexistentException : public std::exception {
	public:
		virtual const char*	what() const throw() {
			return ("Couldn't meet your expectations.");
		};
};

/* Functions */
template <class T> class T::iterator	easyfind(T &container, int find) {
	class T::iterator it = std::find(container.begin(), container.end(), find);

	if (it == container.end())
		throw UnexistentException<T>();
	return (it);
}

#endif