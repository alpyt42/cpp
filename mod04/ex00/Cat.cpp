/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-cont <ale-cont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 11:39:32 by ale-cont          #+#    #+#             */
/*   Updated: 2023/05/05 21:37:01 by ale-cont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat " << _type << " : Constructor called" << std::endl;
	_type = "Cat";
}

Cat::Cat(const Cat& other): Animal() {
	std::cout << "Cat " << _type << " : Copy Constructor called!" << std::endl;
	*this = other;
}

Cat &	Cat::operator=( Cat const & other )
{
	std::cout << "Cat Assignment operator called" << std::endl;
	if (this != &other) {
		_type = other._type;
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat " << _type << " : Destructor called" << std::endl;
}

void	Cat::makeSound( void ) const
{
	std::cout << "Meow" << std::endl;
}