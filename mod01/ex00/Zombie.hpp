/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-cont <ale-cont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 16:07:57 by ale-cont          #+#    #+#             */
/*   Updated: 2023/04/26 17:26:28 by ale-cont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {
	public:
		Zombie(std::string name);
		~Zombie(void);

		void	announce( void ) const;
	private:
		std::string	_name;
};

void	randomChump(std::string name);
Zombie*	newZombie(std::string name);

#endif