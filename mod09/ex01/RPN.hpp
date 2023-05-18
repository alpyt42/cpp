/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-cont <ale-cont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 12:02:32 by ale-cont          #+#    #+#             */
/*   Updated: 2023/05/18 12:04:35 by ale-cont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <fstream>
#include <string>
#include <map>
#include <ctime>
#include <limits.h>
#include <iomanip>
#include <sstream>

class RPN {
public:
	RPN(void);
	RPN(RPN const &other);
	RPN&	operator=(RPN const & other);
	~RPN(void);

private:
	std::map<std::string, float> _database;
};