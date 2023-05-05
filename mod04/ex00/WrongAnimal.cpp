/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-cont <ale-cont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 12:03:28 by ale-cont          #+#    #+#             */
/*   Updated: 2023/05/05 12:18:38 by ale-cont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(const std::string& name) : _type("Generic WrongAnimal"){
	if (name == "Dog")
		_type = "Dog";
	else if (name == "Cat")
		_type = "Cat";
	std::cout << "WrongAnimal " << _type << " : Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal() : _type("WrongAnimal"){
	std::cout << "WrongAnimal " << _type << " : Constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal " << _type << " : Destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : _type(other._type){
	std::cout << "WrongAnimal " << _type << " : Copy Constructor called" << std::endl;
}

std::string	WrongAnimal::getType(void) const {
	return _type;
}

void	WrongAnimal::makeSound(void) const{
	if (_type == "WrongCat")
		std::cout << "WrongAnimal " << _type << " sound : Woof" << std::endl;
	else
		std::cout << "WrongAnimal " << _type << " sound : WrongAnimal sound!" << std::endl;
}
