/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 16:17:24 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/11/24 16:31:27 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template <class T> void	swap(T *a, T *b) {
	T	tmp = *a;

	*a = *b;
	*b = tmp;
}

template <class T> T	min(T &a, T &b) {
	return (a < b ? a : b);
}

template <class T> T	max(T &a, T &b) {
	return (a > b ? a : b);
}

#endif