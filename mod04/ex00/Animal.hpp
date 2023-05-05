/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-cont <ale-cont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 11:23:36 by ale-cont          #+#    #+#             */
/*   Updated: 2023/05/05 12:04:10 by ale-cont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

// Base class
class Animal
{
	public:
		Animal();					// constructeur par défaut qui initialise la valeur à 0
		Animal(const std::string& name);
		~Animal();									// destructeur
		Animal(const Animal& other);

		void makeSound(void) const;
		std::string	getType(void) const;

	protected:
		std::string		_type;
};
