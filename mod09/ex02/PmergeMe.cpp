/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-cont <ale-cont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 11:52:55 by ale-cont          #+#    #+#             */
/*   Updated: 2023/05/22 18:12:23 by ale-cont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void) {}

PmergeMe::~PmergeMe(void) {}

PmergeMe & PmergeMe::operator=(PmergeMe const & rhs) {
	(void)rhs;
	return *this;
}

PmergeMe::PmergeMe(PmergeMe const & src) { (void)src; }

void	PmergeMe::addNumbers(char **av) {
	for (int i = 1; av[i]; i++) {
		size_t	nb = std::strtoul(av[i], NULL, 10);
		_vector.push_back(nb);
	}
}

void	PmergeMe::printVec(void) {
	for (size_t i = 0; i < _vector.size() && i < 10; ++i) {
		std::cout << _vector[i] << " ";
	}
	if (_vector.size() > 10)
		std::cout << "[...]";
	std::cout << std::endl;
}

void	PmergeMe::mergeInsertSort(void) {
	
}