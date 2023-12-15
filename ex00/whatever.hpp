/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 16:17:24 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/11/24 17:08:00 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template <typename T> void	swap(T &a, T &b) {
	T	tmp = a;

	a = b;
	b = tmp;
}

template <typename T> const T	min(const T &a, const T &b) {
	return (a < b ? a : b);
}

template <typename T> const T	max(const T &a, const T &b) {
	return (a > b ? a : b);
}

#endif