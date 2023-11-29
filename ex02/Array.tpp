/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 13:22:54 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/11/29 14:25:03 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

/* Constructors & Destructors */
template <class T> Array<T>::Array(void) {
	this->_length = 0;
	this->_array = new T[0];
}

template <class T> Array<T>::Array(unsigned int n) {
	this->_length = n;
	this->_array = new T[n];
	for (unsigned int i = 0; i < n; i++)
		this->_array[i] = 0;
}

template <class T> Array<T>::Array(const Array &origin) {
	this->_length = origin._length;
	this->_array = new Array[origin._length];
	for (unsigned int i = 0; i < origin._length; i++)
		this->_array[i] = origin._array[i];
}

template <class T> Array<T>::~Array(void) {
	delete[] this->_array;
}

/* Exceptions */
template <class T> const char*	Array<T>::OutOfBoundsException::what() const throw() {
	return ("Index is out of range");
}

/* Functions */
template <class T> unsigned int	Array<T>::size(void) const {
	return (this->_length);
}

/* Overloaded operators */
template <class T> Array<T>	&Array<T>::operator=(const Array &origin) {
	delete[] this->_array;
	this->_array = new T[origin._length];
	this->_length = origin._length;
	for (unsigned int i = 0; i < origin._length; i++)
		this->_array[i] = origin._array[i];
	return (*this);
}

template <class T> T	&Array<T>::operator[](unsigned int i) {
	if (i >= this->_length)
		throw Array<T>::OutOfBoundsException();
	return (this->_array[i]);
}

template <class T> const T	&Array<T>::operator[](unsigned int i) const {
	if (i >= this->_length)
		throw Array<T>::OutOfBoundsException();
	return (this->_array[i]);
}

#endif