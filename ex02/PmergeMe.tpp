/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 19:31:34 by bsoubaig          #+#    #+#             */
/*   Updated: 2024/01/12 16:14:06 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_TPP
# define PMERGEME_TPP

template <class T> void PmergeMe::_sort(T &c, T &leftHalf, T &rightHalf) {
	class T::iterator leftIt = leftHalf.begin();
	class T::iterator rightIt = rightHalf.begin();

	/* Comparing elements and sorting them */
	while (leftIt != leftHalf.end() && rightIt != rightHalf.end()) {
		if (*leftIt < *rightIt) {
			c.push_back(*leftIt);
			leftIt++;
		} else {
			c.push_back(*rightIt);
			rightIt++;  
		}
	}
	/* Adding remaining elements out of range */
	while (leftIt != leftHalf.end()) {
		c.push_back(*leftIt);
		leftIt++;
	}
	while (rightIt != rightHalf.end()) {
		c.push_back(*rightIt);
		rightIt++;
	}
}

template <class T> void	PmergeMe::_divideAndSort(T &c) {
	if (c.size() <= 1)
		return ;
	class T::iterator	median = c.begin();

	std::advance(median, c.size() / 2);
	T	leftHalf(c.begin(), median);
	T	rightHalf(median, c.end());

	_divideAndSort(leftHalf);
	_divideAndSort(rightHalf);

	c.clear();
	_sort(c, leftHalf, rightHalf);
}

template <class T> double	PmergeMe::_run(T &c) {
	PmergeMe	object;
	double		processTime;

	/* Running sort */
	clock_t	start = clock();
	object._divideAndSort(c);
	clock_t	end = clock();

	/* Calculating execution time */
	processTime = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000.0;
	return (processTime);
}

template <class T> void	PmergeMe::_print(std::string prefix, T &c) {
	std::cout << prefix;
	for (class T::const_iterator it = c.begin(); it != c.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

template <class T> bool	PmergeMe::_isSorted(T &c) {
	class T::const_iterator	prev = c.begin();

	for (class T::const_iterator it = c.begin(); it != c.end(); ++it) {
		if (*prev > *it)
			return (false);
	}
	return (true);
}

#endif