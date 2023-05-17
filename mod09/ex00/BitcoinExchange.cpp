/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-cont <ale-cont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:38:21 by ale-cont          #+#    #+#             */
/*   Updated: 2023/05/17 14:41:53 by ale-cont         ###   ########.fr       */
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

	}
	return *this;
}

Bitcoin::~Bitcoin(void) {
	
}