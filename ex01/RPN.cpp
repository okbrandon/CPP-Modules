/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 15:37:05 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/12/28 18:33:37 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

/* Constructors & Destructors */
RPN::RPN(void) {}

RPN::RPN(const RPN &origin) {
	*this = origin;
}

RPN::~RPN(void) {}

/* Private functions */
bool	RPN::_isExpressionValid(std::string &expression) {
	int	operands = 0, operators = 0;

	for (size_t	i = 0; i < expression.size(); i++) {
		bool	isOperand = std::isdigit(expression.at(i));
		bool	isOperator = (expression.at(i) == '+' || expression.at(i) == '-' \
			|| expression.at(i) == '*' || expression.at(i) == '/');
		
		if (expression.at(i) == ' ')
			continue;
		if (isOperand) operands++;
		else if (isOperator) operators++;
		else return (false);
	}
	return (operators == operands - 1);
}

int	RPN::_ft_stoi(const std::string &str) {
	int					num;
	std::stringstream	ss(str);

	ss >> num;
	return num;
}

/* Exceptions */
const char*	RPN::DivisionByZeroException::what() const throw() {
	return ("Division by 0 is impossible.");
}

const char*	RPN::IncompleteExpressionException::what() const throw() {
	return ("Calculation expression is incomplete.");
}

/* Functions */
long	RPN::run(std::string &expression) {
	int	result;

	if (!_isExpressionValid(expression))
		throw RPN::IncompleteExpressionException();
	for (size_t i = 0; i < expression.size(); i++) {
		bool	isOperand = std::isdigit(expression.at(i));
		bool	isOperator = (expression.at(i) == '+' || expression.at(i) == '-' \
			|| expression.at(i) == '*' || expression.at(i) == '/');

		if (expression.at(i) == ' ')
			continue;
		if (isOperator) {
			if (this->_stack.size() < 2)
				throw RPN::IncompleteExpressionException();
			// Retrieving the two next operands
			int	right = this->_stack.top();
			this->_stack.pop();
			int	left = this->_stack.top();
			this->_stack.pop();
			// Applying the operator
			switch (expression.at(i)) {
				case '+':
					result = left + right;
					break;
				case '-':
					result = left - right;
					break;
				case '*':
					result = left * right;
					break;
				case '/':
					if (right == 0)
						throw RPN::DivisionByZeroException();
					result = left / right;
					break;
			}
			// Pushing the result
			this->_stack.push(result);
		}
		else if (isOperand) 
			this->_stack.push(_ft_stoi(&expression.at(i)));
	}
	result = this->_stack.top();
	return (result);
}

/* Overloaded operators */
RPN	&RPN::operator=(const RPN &origin) {
	this->_stack = origin._stack;
	return (*this);
}