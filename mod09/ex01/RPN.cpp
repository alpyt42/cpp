/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-cont <ale-cont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 12:02:29 by ale-cont          #+#    #+#             */
/*   Updated: 2023/05/18 12:06:24 by ale-cont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(void) {

}

RPN::RPN(RPN const &other){
	*this = other;
}

RPN&	RPN::operator=(RPN const & other) {
	if (this != &other) {
		_database = other._database;
	}
	return *this;
}

RPN::~RPN(void) {
	
}
