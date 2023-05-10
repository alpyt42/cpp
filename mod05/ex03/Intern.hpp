/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-cont <ale-cont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:58:02 by ale-cont          #+#    #+#             */
/*   Updated: 2023/05/10 14:00:15 by ale-cont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"

class Intern : public Form
{
	public:
		Intern(const std::string& target);
		Intern(const Intern& other);
		~Intern(void);

		Intern&	operator=( Intern const & other );
		void	execute(Bureaucrat const & executor) const;
		Form&	makeForm(std::string nameForm, std::string str2);
	private:
		std::string	_target;
};