/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-cont <ale-cont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 11:39:29 by ale-cont          #+#    #+#             */
/*   Updated: 2023/05/05 11:45:25 by ale-cont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog " << _type << " : Constructor called" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other._type){
	std::cout << "Dog " << _type << " : Copy Constructor called!" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog " << _type << " : Destructor called" << std::endl;
}
