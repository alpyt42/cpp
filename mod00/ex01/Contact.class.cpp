/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-cont <ale-cont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:39:46 by ale-cont          #+#    #+#             */
/*   Updated: 2023/04/24 16:56:43 by ale-cont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact(void){
	std::cout << "C constructor called" << std::endl;
	return ;
}

Contact::~Contact(void){
	std::cout << "C destructor called" << std::endl;
	return ;
}