/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-cont <ale-cont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 11:25:45 by ale-cont          #+#    #+#             */
/*   Updated: 2023/05/05 11:58:53 by ale-cont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(const std::string& name) : _type("Generic Animal"){
	if (name == "Dog")
		_type = "Dog";
	else if (name == "Cat")
		_type = "Cat";
	std::cout << "Animal " << _type << " : Constructor called" << std::endl;
}

Animal::Animal() : _type("animal"){
	std::cout << "Animal " << _type << " : Constructor called" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal " << _type << " : Destructor called" << std::endl;
}

Animal::Animal(const Animal& other) : _type(other._type){
	std::cout << "Animal " << _type << " : Copy Constructor called" << std::endl;
}

std::string	Animal::getType(void) const {
	return _type;
}

void	Animal::makeSound(void) const{
	if (_type == "Dog")
		std::cout << "Animal " << _type << " sound : Woof" << std::endl;
	else if (_type == "Cat")
		std::cout << "Animal " << _type << " sound : Meow" << std::endl;
	else
		std::cout << "Animal " << _type << " sound : Animal sound!" << std::endl;
}
