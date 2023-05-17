/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-cont <ale-cont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:38:18 by ale-cont          #+#    #+#             */
/*   Updated: 2023/05/17 16:41:55 by ale-cont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

static bool	checkfiles(char **av, std::ifstream& ifs, std::ifstream& datacsv) {
	ifs.open(av[1]);
	if (!ifs.is_open()) {
		std::cerr << "Error: could not open input file '" << av[1] << "'" << std::endl;
		return false;
	}
	return true;
}

static bool	checkcsv(int ac) {
	if (ac != 2) {
		std::cout << "Please provide a csv" << std::endl;
		return false;
	}
	return true;
}

int	main(int ac, char **av) {
	std::ifstream ifs;
	std::ifstream datacsv;
	if (!checkcsv(ac))
		return 1;
	if (!checkfiles(av, ifs, datacsv))
		return 1;
	return 0;
}
