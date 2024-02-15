/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 19:06:05 by bsoubaig          #+#    #+#             */
/*   Updated: 2024/01/08 18:40:04 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

#define BRED	"\033[1;31m"
#define BGRN	"\033[1;32m"
#define BYEL	"\033[1;33m"
#define BBLU	"\033[1;34m"
#define BMAG	"\033[1;35m"
#define BCYN	"\033[1;36m"
#define BWHT	"\033[1;37m"
#define CRESET	"\033[0m"

void	testSubject(void) {
	std::cout << BWHT "\n>>> RUNNING SUBJECT TESTS\n" CRESET << std::endl;
	/* Subject test */
	MutantStack<int>	mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << BCYN << mstack.top() << CRESET << std::endl;
	mstack.pop();
	std::cout << BCYN << mstack.size() << CRESET << std::endl;
	
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int>	s(mstack);
}

void	testReverseIteration(void) {
	std::cout << BWHT "\n>>> RUNNING REVERSE ITERATOR TESTS\n" CRESET << std::endl;
	/* More tests */
	MutantStack<int>	mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << BCYN << mstack.top() << CRESET << std::endl;
	mstack.pop();
	std::cout << BCYN << mstack.size() << CRESET << std::endl;
	
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::reverse_iterator	rit = mstack.rbegin();
	MutantStack<int>::reverse_iterator	rite = mstack.rend();
	++rit;
	--rit;
	while (rit != rite) {
		std::cout << *rit << std::endl;
		++rit;
	}
	std::stack<int>	s(mstack);
}

void	runListIteration(void) {
	std::cout << BWHT "\n>>> LIST ITERATION\n" CRESET << std::endl;
	/* List test for comparison */
	std::list<int>	list;

	list.push_back(5);
	list.push_back(17);

	std::cout << BCYN << list.back() << CRESET << std::endl;
	list.pop_back();
	std::cout << BCYN << list.size() << CRESET << std::endl;

	list.push_back(3);
	list.push_back(5);
	list.push_back(737);
	list.push_back(0);

	std::list<int>::iterator it = list.begin();
	std::list<int>::iterator ite = list.end();

	++it;
	--it;
	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	}
	std::list<int>	l(list);
}

void	runListReverseIteration(void) {
	std::cout << BWHT "\n>>> LIST REVERSE ITERATION\n" CRESET << std::endl;
	/* List test for comparison */
	std::list<int>	list;

	list.push_back(5);
	list.push_back(17);

	std::cout << BCYN << list.back() << CRESET << std::endl;
	list.pop_back();
	std::cout << BCYN << list.size() << CRESET << std::endl;

	list.push_back(3);
	list.push_back(5);
	list.push_back(737);
	list.push_back(0);

	std::list<int>::reverse_iterator it = list.rbegin();
	std::list<int>::reverse_iterator ite = list.rend();

	++it;
	--it;
	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	}
	std::list<int>	l(list);
}

int	main(void) {
	testSubject();
	runListIteration();
	testReverseIteration();
	runListReverseIteration();

	// Tests are done
	std::cout << BYEL "All tests completed. The two outputs should be identical." CRESET << std::endl;
	return (0);
}