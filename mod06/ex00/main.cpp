/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-cont <ale-cont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 17:08:41 by ale-cont          #+#    #+#             */
/*   Updated: 2023/05/11 18:00:56 by ale-cont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>
#include <climits>

static int	checkformat(std::string scalar) {
	int	countdot = 0;
	if (scalar.size() == 1)
		return 0;
	for (int i = 0; scalar[i]; i++) {
		if (scalar[i] == '.')
			countdot++;
		if ((scalar[i] != 'f' && scalar[i] != '.' && !isdigit(scalar[i])) || countdot > 1) {
			std::cout << "Please provide a valid literal\n";
			return 1;
		}
	}
	return 0;
}

static int specialtypes(std::string scalar) {
	if (scalar == "nan" || scalar == "nanf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
		return (1);
	}
	else if (scalar == "+inf" || scalar == "inf" || scalar == "inff" || scalar == "+inff")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: inff" << std::endl;
		std::cout << "double: inf" << std::endl;
		return (1);
	}
	else if (scalar == "-inf" || scalar == "-inff")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
		return (1);
	}
	return (0);
}

int	convertAndDisplay(std::string scalar) {
	std::string toChar = "";
	int toInt = 0;
	float toFloat = 0;
	double toDouble = 0;

	if (specialtypes(scalar))
		return 0;
	if (checkformat(scalar))
		return 1;
	//if is a char
	if (scalar.size() == 1 && std::isprint(scalar[0]) && !std::isdigit(scalar[0])) {
		toChar = scalar[0];
		std::cout << "char: " << toChar << std::endl;
		std::cout << "int: " << static_cast<int>(toChar[0]) << std::endl;
		std::cout << "float: " << static_cast<float>(toChar[0]) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(toChar[0]) << ".0" << std::endl;
		return 0;
	}

	//else if it is a number
	toInt = std::atoi(scalar.c_str());

	// check if it is float or int / double
	if (scalar[scalar.length() - 1] == 'f') {
		toFloat = std::atof(scalar.c_str());
		toDouble = static_cast<double>(toFloat);
	} else {
		toDouble = std::atof(scalar.c_str());
		toFloat = static_cast<float>(toDouble);
	}

	if (toChar == "" && std::isprint(toInt)) {
		toChar = "'";
		toChar += static_cast<char>(toInt);
		toChar += "'";
	} else if (toChar == "") {
		toChar = "Non displayable";
	}

	std::cout << "char: " << toChar << std::endl;
	if (toChar == "imposible") {
		std::cout << "int: imposible" << std::endl;
	} else {
		std::cout << "int: " << toInt << std::endl;
	}

	if (toChar == "imposible" && toFloat == 0) {
		std::cout << "float: imposible" << std::endl;
		std::cout << "double: imposible" << std::endl;
	} else {
		if (toChar != "imposible" && toFloat - static_cast<int>(toFloat) == 0) {
			std::cout << "float: " << toFloat << ".0f" << std::endl;
			std::cout << "double: " << toDouble << ".0" << std::endl;
		} else {
			std::cout << "float: " << toFloat << "f" << std::endl;
			std::cout << "double: " << toDouble << std::endl;
		}
	}
	return 0;
}

int main(int ac, char **av) {
	int	ex = 0;

	if (ac != 2) {
		std::cout << "Please provide only one argument like : ./convert 3\n";
		return 1;
	}
	std::string	scalar(av[1]);
	ex = convertAndDisplay(scalar);
	return (ex);
}