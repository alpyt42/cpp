/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-cont <ale-cont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 11:28:31 by ale-cont          #+#    #+#             */
/*   Updated: 2023/05/05 12:10:39 by ale-cont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    // Create objects of each class and test their functions
    Animal a("Generic Animal");
    Dog d;
    Cat c;

    std::cout << "Testing functions for Animal:" << std::endl;
    std::cout << a.getType() << std::endl; // Output: "Generic Animal"
    a.makeSound(); // Output: "Animal sound"

    std::cout << "Testing functions for Dog:" << std::endl;
    std::cout << d.getType() << std::endl; // Output: "Dog"
    d.makeSound(); // Output: "Woof!"

    std::cout << "Testing functions for Cat:" << std::endl;
    std::cout << c.getType() << std::endl; // Output: "Cat"
    c.makeSound(); // Output: "Meow!"

    // Test polymorphism with base class pointer and derived class objects
    const Animal* ptr = &d;
    std::cout << "Testing polymorphism with Animal pointer and Dog object:" << std::endl;
    std::cout << ptr->getType() << std::endl; // Output: "Dog"
    ptr->makeSound(); // Output: "Woof!"

    ptr = &c;
    std::cout << "Testing polymorphism with Animal pointer and Cat object:" << std::endl;
    std::cout << ptr->getType() << std::endl; // Output: "Cat"
    ptr->makeSound(); // Output: "Meow!"

    // Test default constructor and destructor
    Animal* aptr = new Animal();
    delete aptr;

    // Test dynamic memory allocation with new and delete operators
    Animal* ap = new Animal("Allocated Animal");
    Dog* dp = new Dog();
    Cat* cp = new Cat();

    std::cout << "Testing functions for dynamically allocated objects:" << std::endl;
    std::cout << ap->getType() << std::endl; // Output: "Allocated Animal"
    ap->makeSound(); // Output: "Animal sound"

    std::cout << dp->getType() << std::endl; // Output: "Dog"
    dp->makeSound(); // Output: "Woof!"

    std::cout << cp->getType() << std::endl; // Output: "Cat"
    cp->makeSound(); // Output: "Meow!"

    delete ap;
    delete dp;
    delete cp;


	WrongAnimal wrong("Generic WrongAnimal");
    WrongCat wrongb;

    std::cout << "Testing functions for WrongAnimal:" << std::endl;
    std::cout << wrong.getType() << std::endl; // Output: "Generic Animal"
    wrong.makeSound(); // Output: "WrongAnimal sound"

    std::cout << "Testing functions for WrongCat:" << std::endl;
    std::cout << c.getType() << std::endl; // Output: "WrongCat"
    wrongb.makeSound(); // Output: "WrongAnimal sound" (due to lack of override)
	
    return 0;
}
