/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-cont <ale-cont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 12:02:32 by ale-cont          #+#    #+#             */
/*   Updated: 2023/05/19 17:07:47 by ale-cont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stack>
#include <sstream>

class RPN {
public:
	RPN(void);
	RPN(RPN const &other);
	RPN&	operator=(RPN const & other);
	~RPN(void);

	int evaluateRPN(const std::string& expression);
private:
	std::stack<int>		_numbers;
};