/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-cont <ale-cont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 12:03:32 by ale-cont          #+#    #+#             */
/*   Updated: 2023/05/05 12:04:26 by ale-cont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

// Base class
class WrongAnimal
{
	public:
		WrongAnimal();					// constructeur par défaut qui initialise la valeur à 0
		WrongAnimal(const std::string& name);
		~WrongAnimal();									// destructeur
		WrongAnimal(const WrongAnimal& other);

		void makeSound(void) const;
		std::string	getType(void) const;

	protected:
		std::string		_type;
};
