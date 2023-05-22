/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-cont <ale-cont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 12:02:27 by ale-cont          #+#    #+#             */
/*   Updated: 2023/05/22 20:56:12 by ale-cont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

static bool	checkArguments(int ac, char **av) {
	if (ac < 2)
		return (std::cerr << "Error: No numbers found. Provide for example: ./PmergeMe 5 4 8 6 9" << std::endl, false);
	for (int i = 1; av[i]; i++) {
		if (strlen(av[i]) > 10)
			return (std::cerr << "Error: Possible overflow detected: '" << av[i] << "'." << std::endl, false);
		for (int j = 0; av[i][j]; j++) {
			if (j == 0 && av[i][j] == '-')
				return (std::cerr << "Error: Negative numbers are not allowed: '" << av[i] << "'." << std::endl, false);
			else if (!isdigit(av[i][j]))
				return (std::cerr << "Error: Invalid number: '" << av[i] << "'." << std::endl, false);
		}
		unsigned long	nb = std::strtoul(av[i], NULL, 10);
		if (nb > UINT_MAX)
			return (std::cerr << "Error: Overfow detected for this number: '" << av[i] << "'." << std::endl, false);
	}
	return (true);
}

int main(int ac, char* av[])
{
	PmergeMe	nbs;

	if (!checkArguments(ac, av))
		return 1;
	nbs.addNumbers(av);
	std::cout << "Before:\t";
	nbs.printVec();
	nbs.mergeInsertSortVec();
	std::cout << "After:\t";
	nbs.printVec();
	return 0;
}
