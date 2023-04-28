/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-cont <ale-cont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 15:03:22 by ale-cont          #+#    #+#             */
/*   Updated: 2023/04/28 18:29:32 by ale-cont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void){
	levels["ERROR"] = 3;
	levels["WARNING"] = 2;
	levels["INFO"] = 1;
	levels["DEBUG"] = 0;
}

Harl::~Harl(void){}

void	Harl::debug( void ) {
	std::cout << "DEBUG : I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
}

void	Harl::info( void ) {
	std::cout << "INFO : I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void	Harl::warning( void ) {
	std::cout << "WARNING : I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error( void ) {
	std::cout << "ERROR : This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	if (levels.find(level) == levels.end())
		return ;
	switch (levels[level])
	{
	case 0:
		debug();
		complain("INFO");
		break;
	case 1:
		info();
		complain("WARNING");
		break;
	case 2:
		warning();
		complain("ERROR");
		break;
	case 3:
		error();
		break;
	default:
		break;
	}
}