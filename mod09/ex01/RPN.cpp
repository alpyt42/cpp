/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-cont <ale-cont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 12:02:29 by ale-cont          #+#    #+#             */
/*   Updated: 2023/05/19 17:25:17 by ale-cont         ###   ########.fr       */
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

static bool	isOperator(const std::string &token) {
	return (token == "+" || token == "-" || token == "*" || token == "/");
}

// static bool	isCorrectExpression(const std::string &expression) {
// 	for (int i = 0; expression[i]; i++) {
// 		if (!isdigit(expression[i]))
// 	}
// }

int RPN::evaluateRPN(const std::string &expression) {
	std::istringstream iss(expression);
	std::string token;

	while (iss >> token)
	{
		if (isOperator(token))
		{
			if (_numbers.size() < 2) {
				throw std::runtime_error("Invalid expression");
			}
			int nb2 = _numbers.top();
			_numbers.pop();
			int nb1 = _numbers.top();
			_numbers.pop();
			int result = performOperation(token[0], nb1, nb2);
			_numbers.push(result);
		}
		else
		{
			int operand;
			std::istringstream(token) >> operand;
			_numbers.push(operand);
		}
	}
	if (_numbers.size() != 1) {
		throw std::runtime_error("Invalid expression");
	}
	return _numbers.top();
}