/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-cont <ale-cont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 12:02:29 by ale-cont          #+#    #+#             */
/*   Updated: 2023/05/22 11:22:51 by ale-cont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(void) {
}

RPN::RPN(RPN const &other){
	*this = other;
}

RPN&	RPN::operator=(RPN const & other) {
	if (this != &other) {
		_numbers = other._numbers;
	}
	return *this;
}

RPN::~RPN(void) {
}

static int	performOperation(char operation, int nb1, int nb2) {
	switch (operation) {
	case '+':
		return nb1 + nb2;
	case '-':
		return nb1 - nb2;
	case '*':
		return nb1 * nb2;
	case '/':
		return nb1 / nb2;
	default:
		throw std::runtime_error("Invalid operation");
	}
}

static bool	isOperator(char c) {
	return (c == '+' || c == '-' || c == '*' || c == '/');
}

int RPN::evaluateRPN(const std::string &expression) {
	for (int i = 0; expression[i]; i++) {
		if (isdigit(expression[i])) {
			int operand = expression[i] - '0';
			_numbers.push(operand);
		}
		else if (isOperator(expression[i])) {
			if (_numbers.size() < 2) {
				throw std::runtime_error("Invalid expression: please enter enough digit to proceed");
			}
			int nb2 = _numbers.top();
			_numbers.pop();
			int nb1 = _numbers.top();
			_numbers.pop();
			if (nb2 == 0 && expression[i] == '/') {
				throw std::runtime_error("Division by zero.");
			}
			int result = performOperation(expression[i], nb1, nb2);
			_numbers.push(result);
		}
		else if (expression[i] != ' ') {
			throw std::runtime_error("Invalid expression: Invalid element");
		}
	}
	if (_numbers.size() != 1) {
		throw std::runtime_error("Invalid expression : please enter enough digit to proceed");
	}
	return _numbers.top();
}