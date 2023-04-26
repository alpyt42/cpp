/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-cont <ale-cont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 17:44:28 by ale-cont          #+#    #+#             */
/*   Updated: 2023/04/26 18:15:29 by ale-cont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	int numZombies = 10;
	std::string zombieName = "Alix";
	Zombie *horde = zombieHorde(numZombies, zombieName);
	if (horde == NULL)
		return NULL;
	for (int i = 0; i < numZombies; i++)
		horde[i].announce();

	delete[] horde;
	return 0;
}
