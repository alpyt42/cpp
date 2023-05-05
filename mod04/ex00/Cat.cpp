/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-cont <ale-cont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 11:39:32 by ale-cont          #+#    #+#             */
/*   Updated: 2023/05/05 11:45:42 by ale-cont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat " << _type << " : Constructor called" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other._type){
	std::cout << "Cat " << _type << " : Copy Constructor called!" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat " << _type << " : Destructor called" << std::endl;
}