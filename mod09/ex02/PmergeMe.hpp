/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-cont <ale-cont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 11:52:58 by ale-cont          #+#    #+#             */
/*   Updated: 2023/05/22 20:45:12 by ale-cont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <climits>
#include <deque>

class PmergeMe
{
public:
	PmergeMe(void);
	~PmergeMe(void);

	void	addNumbers(char **av);
	void	printVec(void);
	void	mergeInsertSortVec(void);
	void	mergeInsertSortDeq(void);
private:
	PmergeMe & operator=(PmergeMe const & rhs);
	PmergeMe(PmergeMe const &);
	std::vector<size_t>	_vector;
	std::deque<size_t>	_dck;
};
