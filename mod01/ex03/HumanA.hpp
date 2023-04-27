/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-cont <ale-cont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 15:36:39 by ale-cont          #+#    #+#             */
/*   Updated: 2023/04/27 17:23:53 by ale-cont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef HUMANA_H
# define HUMANA_H

#include "Weapon.hpp"

class HumanA {
	public:
		HumanA(const std::string& newName, Weapon& newWeapon);
		~HumanA(void);

	void	attack(void) const;

	private :
		std::string	_name;
		Weapon&		_weapon;
};

#endif