/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-cont <ale-cont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 12:05:05 by ale-cont          #+#    #+#             */
/*   Updated: 2023/05/05 12:07:34 by ale-cont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat " << _type << " : Constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other._type){
	std::cout << "WrongCat " << _type << " : Copy Constructor called!" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat " << _type << " : Destructor called" << std::endl;
}
