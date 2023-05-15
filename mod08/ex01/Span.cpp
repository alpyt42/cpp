/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-cont <ale-cont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 19:33:26 by ale-cont          #+#    #+#             */
/*   Updated: 2023/05/15 20:16:19 by ale-cont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : _N(N) {
	
}

Span::Span(Span const &other){
	*this = other;
}

Span&	Span::operator=(Span const & other) {
	if (this != &other) {
		_N = other._N;
		_vec = other._vec;
	}
	return *this;
}

Span::~Span(void) {
	
}

void	Span::addNumber(unsigned int& nb) {
	if (_vec.size() > _N)
		throw TooManyNumbersException();
	_vec.push_back(nb);
}

unsigned int	Span::shortestSpan(void) const {
	if (_vec.size() <= 1)
		throw TooLowNumbersException();
	for (std::vector<int>::const_iterator it = _vec.begin(); it != _vec.end(); it++) {
		
	}
	return 0;
}

unsigned int	Span::longestSpan(void) const {
	if (_vec.size() <= 1)
		throw TooLowNumbersException();
	return 0;
}
