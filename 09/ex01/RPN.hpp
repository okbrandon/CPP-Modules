/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 14:58:10 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/12/28 18:28:51 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <sstream>
# include <exception>
# include <stack>

# define BRED	"\033[1;31m"
# define BGRN	"\033[1;32m"
# define BYEL	"\033[1;33m"
# define BBLU	"\033[1;34m"
# define BMAG	"\033[1;35m"
# define BCYN	"\033[1;36m"
# define BWHT	"\033[1;37m"
# define CRESET	"\033[0m"

class RPN {

	private:
		/* Attributes */
		std::stack<int>	_stack;

		/* Private functions */
		bool	_isExpressionValid(std::string &expression);
		int		_ft_stoi(const std::string &str);

	public:
		/* Constructors & Destructors */
		RPN(void);
		RPN(const RPN &origin);
		~RPN(void);

		/* Exceptions */
		class DivisionByZeroException : public std::exception {
			public:
				virtual const char*	what() const throw();
		};
		class IncompleteExpressionException : public std::exception {
			public:
				virtual const char*	what() const throw();
		};

		/* Functions */
		long	run(std::string &expression);

		/* Overloaded operators */
		RPN	&operator=(const RPN &origin);

};

#endif