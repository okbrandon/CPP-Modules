/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 11:27:03 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/11/29 12:10:18 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <class T> void iter(T *array, size_t length, void (*f)(T &)) {
	for (size_t i = 0; i < length; i++)
		f(array[i]);
}

template <class T> void iter(T *array, size_t length, void (*f)(T const &)) {
	for (size_t i = 0; i < length; i++)
		f(array[i]);
}

template <class T> void display(T &elem) {
	std::cout << elem << " ";
}

template <class T> void incr(T &elem) {
	elem++;
}

template <class T> void decr(T &elem) {
	elem--;
}

#endif