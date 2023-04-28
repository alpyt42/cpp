/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-cont <ale-cont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 15:03:25 by ale-cont          #+#    #+#             */
/*   Updated: 2023/04/28 16:28:40 by ale-cont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef HARL_H
# define HARL_H

#include <string.h>
#include <iostream>
#include <map>

class Harl {
	public:
		Harl();
		~Harl(void);

	void	complain( std::string level );
	private :
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
		std::map<std::string, void (Harl::*)()> levels;
};

#endif