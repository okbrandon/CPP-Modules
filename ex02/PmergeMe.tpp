/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 19:31:34 by bsoubaig          #+#    #+#             */
/*   Updated: 2024/01/12 13:26:39 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_TPP
# define PMERGEME_TPP

template <class T> void PmergeMe::_merge(T &c, int left, int median, int right) {
	int	tempLengthL = median - left + 1;
	int	tempLengthR = right - median;

	T	tempL(tempLengthL);
	T	tempR(tempLengthR);
	
	for (int i = 0; i < tempLengthL; i++)
		tempL[i] = c[left + i];
	for (int i = 0; i < tempLengthR; i++)
		tempR[i] = c[median + 1 + i];
	
	int	i = 0;
	int	j = 0;
	int k = left;

	while (i < tempLengthL && j < tempLengthR) {
		if (tempL[i] <= tempR[j])
			c[k] = tempL[i++];
		else
			c[k] = tempR[j++];
		k++;
	}

	while (i < tempLengthL)
		c[k++] = tempL[i++];
	while (j < tempLengthR)
		c[k++] = tempR[j++];
}

template <class T> void	PmergeMe::_insertSort(T &c, int left, int right) {
	if (left < right) {
		int	median = left + (right - left) / 2;

		_insertSort(c, left, median);
		_insertSort(c, median + 1, right);

		_merge(c, left, median, right);
	}
}

template <class T> double	PmergeMe::_sort(T &c) {
	PmergeMe	object;
	double		processTime;

	// Running sort
	clock_t	start = clock();
	object._insertSort(c, 0, c.size() - 1);
	clock_t	end = clock();

	// Calculating execution time
	processTime = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000.0;
	return (processTime);
}

template <class T> void	PmergeMe::_print(T &c) {
	for (class T::const_iterator it = c.begin(); it != c.end(); ++it) {
		std::cout << *it << " ";
	}
}

#endif