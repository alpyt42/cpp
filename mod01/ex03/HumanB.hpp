/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-cont <ale-cont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 15:36:37 by ale-cont          #+#    #+#             */
/*   Updated: 2023/04/27 17:46:44 by ale-cont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef HUMANB_H
# define HUMANB_H

#include "Weapon.hpp"

class HumanB {
	public:
		HumanB(const std::string& newName);
		~HumanB(void);

	void	attack(void) const;
	void	setWeapon(Weapon& newWeapon);
	
	private :
		std::string	_name;
		Weapon*		_weapon;
};

#endif