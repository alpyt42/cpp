/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-cont <ale-cont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:38:21 by ale-cont          #+#    #+#             */
/*   Updated: 2023/05/17 20:31:38 by ale-cont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

Bitcoin::Bitcoin(void) {

}

Bitcoin::Bitcoin(Bitcoin const &other){
	*this = other;
}

Bitcoin&	Bitcoin::operator=(Bitcoin const & other) {
	if (this != &other) {
		_database = other._database;
		_inputxt = other._inputxt;
	}
	return *this;
}

Bitcoin::~Bitcoin(void) {
	
}

// static bool	openfile(std::ifstream& ifs) {
// 	(void)ifs;
// 	return true;
// }

static bool	checkdate(std::string date) {
	if (date.size() != 10)
		return false;

	std::string	year = date.substr(0, 4);
	std::string	month = date.substr(5, 2);
	std::string	day = date.substr(8, 2);

	for (int i = 0; i < 4; i++) {
		if (i < 4 && !isdigit(year[i]))
			return false;
		if (i < 2 && !isdigit(month[i]))
			return false;
		if (i < 2 && !isdigit(day[i]))
			return false;
	}
	if (date[4] != '-' || date[7] != '-')
		return false;
	if (atof(year.c_str()) > 2022 || atof(month.c_str()) > 12 || atof(day.c_str()) > 31)
		return false;
	return true;
}

static std::string	extractDate(std::string line) {
	size_t pos = line.find(',');
	if (pos != std::string::npos && checkdate(line.substr(0, pos)))
		return line.substr(0, pos);
	return "";
}

static std::string	extractValue(std::string line) {
	(void)line;
	return "1";
}

bool	Bitcoin::fill_csv(std::ifstream& datacsv) {
	std::string	line;
	std::string	date;
	std::string	value;

	while (std::getline(datacsv, line)) {
		date = extractDate(line);
		value = extractValue(line);
		if (!date.empty() && !value.empty()) {
			_database[date] = atof(value.c_str());
		}
		else
			return false;
	}
	std::map<std::string, float>::const_iterator iter;
    for (iter = _database.begin(); iter != _database.end(); ++iter) {
        std::cout << iter->first << " => " << iter->second << std::endl;
    }
	return true;
}

bool	Bitcoin::fill_input(std::ifstream& ifs){
	(void)ifs;
	return true;
}

bool	Bitcoin::display_res(void) const{
	return true;
}
