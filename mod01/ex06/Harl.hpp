/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-cont <ale-cont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 15:03:25 by ale-cont          #+#    #+#             */
/*   Updated: 2023/04/28 18:15:05 by ale-cont         ###   ########.fr       */
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

	void	complain(std::string level);
	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );
	private :
		std::map<std::string, int> levels;
};

#endif