/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-cont <ale-cont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 11:23:36 by ale-cont          #+#    #+#             */
/*   Updated: 2023/05/05 21:32:42 by ale-cont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

// Base class
class Animal
{
	public:
		Animal(void);
		virtual ~Animal(void);
		Animal(const Animal& other);

		Animal &		operator=( Animal const & other );
		virtual void	makeSound(void) const;
		std::string		getType(void) const;

	protected:
		std::string		_type;
};
