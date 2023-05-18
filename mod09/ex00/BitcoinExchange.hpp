/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-cont <ale-cont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:38:20 by ale-cont          #+#    #+#             */
/*   Updated: 2023/05/18 01:44:16 by ale-cont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <fstream>
#include <string>
#include <map>
#include <limits.h>

class Bitcoin {
public:
	Bitcoin(void);
	Bitcoin(Bitcoin const &other);
	Bitcoin&	operator=(Bitcoin const & other);
	~Bitcoin(void);

	bool	fill_csv(std::ifstream& datacsv);
	bool	display_res(std::ifstream& datacsv) const;
	void	displaydatabase(void) const;

private:
	std::map<std::string, float> _database;
};
