/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-cont <ale-cont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:38:21 by ale-cont          #+#    #+#             */
/*   Updated: 2023/05/17 22:46:25 by ale-cont         ###   ########.fr       */
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
	if (date.size() != 10) {
		std::cout << "Invalid date format (year-month-day)\n";
		return false;
	}

	std::string	year = date.substr(0, 4);
	std::string	month = date.substr(5, 2);
	std::string	day = date.substr(8, 2);

	for (int i = 0; i < 4; i++) {
		if (i < 4 && !isdigit(year[i])) {
			std::cerr << "Invalid year Format, should be digit\n";
			return false;
		}
		if (i < 2 && !isdigit(month[i])) {
			std::cerr << "Invalid month Format, should be digit\n";
			return false;
		}
		if (i < 2 && !isdigit(day[i]))  {
			std::cerr << "Invalid day Format, should be digit\n";
			return false;
		}
	}
	if ((atof(year.c_str()) > 2022 || atof(month.c_str()) > 12 || atof(day.c_str()) > 31) ||
		(atof(year.c_str()) < 2009 || atof(month.c_str()) < 1 || atof(day.c_str()) < 1) ||
		(date < "2009-01-02")) {
			std::cerr << "Invalid date (2009-01-02 <= date <= 2022-12-31)\n";
			return false;
		}
	return true;
}

static std::string	extractDate(std::string line) {
	size_t pos = line.find(',');
	if (pos != std::string::npos && checkdate(line.substr(0, pos)))
		return line.substr(0, pos);
	else if (pos == std::string::npos)
		std::cerr << "Missing a ',' in a row\n";
	return "";
}

static std::string	extractExchange_rate(std::string line) {
	size_t pos = line.find(',');
	if (pos == std::string::npos) {
		std::cerr << "Missing a ',' in a row\n";
		return "";
	}
	if (line[pos + 1] == '\0') {
		std::cerr << "Exchange_rate empty\n";
		return "";
	}
	std::string exchange_rate = line.substr(pos + 1);
	int	countdot = 0;
	if (exchange_rate.size() == 1 && isdigit(exchange_rate[0]))
		return exchange_rate;
	for (int i = 0; exchange_rate[i]; i++) {
		if (exchange_rate[i] == '.')
			countdot++;
		if ((exchange_rate[i] != '.' && !isdigit(exchange_rate[i])) || countdot > 1
			|| (exchange_rate[i] == '.' && exchange_rate[i + 1] == '\0')) {
			return "";
		}
	}
	return exchange_rate;
}

bool	Bitcoin::fill_csv(std::ifstream& datacsv) {
	std::string	line;
	std::string	date;
	std::string	exchange_rate;

	while (std::getline(datacsv, line)) {
		if (line != "date,exchange_rate") {
			date = extractDate(line);
			if (date.empty())
				return false;
			exchange_rate = extractExchange_rate(line);
			if (exchange_rate.empty())
				return false;
			_database[date] = atof(exchange_rate.c_str());
		}
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

void	Bitcoin::displaydatabase(void) const {
	std::map<std::string, double>::const_iterator iter;
	for (iter = _database.begin(); iter != _database.end(); ++iter)
		std::cout << iter->first << " => " << iter->second << std::endl;
}