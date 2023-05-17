/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-cont <ale-cont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:38:20 by ale-cont          #+#    #+#             */
/*   Updated: 2023/05/17 22:34:39 by ale-cont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <fstream>
#include <string>
#include <map>

class Bitcoin {
public:
	Bitcoin(void);
	Bitcoin(Bitcoin const &other);
	Bitcoin&	operator=(Bitcoin const & other);
	~Bitcoin(void);

	bool	fill_csv(std::ifstream& datacsv);
	bool	fill_input(std::ifstream& ifs);
	bool	display_res(void) const;
	void	displaydatabase(void) const;

private:
	std::map<std::string, double> _database;
	std::map<std::string, double> _inputxt;
};
