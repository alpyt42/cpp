/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-cont <ale-cont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:38:18 by ale-cont          #+#    #+#             */
/*   Updated: 2023/05/17 17:05:27 by ale-cont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

static bool	openfiles(std::ifstream& ifs, std::ifstream& datacsv) {
	return true;
}

static bool	checkfiles(char **av, std::ifstream& ifs) {
	ifs.open(av[1]);
	if (!ifs.is_open()) {
		std::cerr << "Error: could not open input file '" << av[1] << "'" << std::endl;
		return false;
	}
	return true;
}

static bool	checkcsv(int ac, std::ifstream& datacsv) {
	if (ac != 2) {
		std::cout << "Please provide a input file : ./btc <filename>" << std::endl;
		return false;
	}
	datacsv.open("data.csv");
	if (!datacsv.is_open()) {
		std::cerr << "Error: could not open 'data.csv'" << std::endl;
		return false;
	}
	return true;
}

int	main(int ac, char **av) {
	std::ifstream ifs;
	std::ifstream datacsv;

	if (!checkcsv(ac, datacsv))
		return 1;
	if (!checkfiles(av, ifs))
		return 1;
	if (!openfiles(ifs, datacsv))
		return 1;
	ifs.close();
	datacsv.close();
	return 0;
}
