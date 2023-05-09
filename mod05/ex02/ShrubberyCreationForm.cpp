/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-cont <ale-cont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 18:10:38 by ale-cont          #+#    #+#             */
/*   Updated: 2023/05/09 23:40:03 by ale-cont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : Form("ShrubberyCreationForm", 145, 137), _target(target) {
	
}

ShrubberyCreationForm &	ShrubberyCreationForm::operator=( ShrubberyCreationForm const & other )
{
	if (this != &other) {
		Form::operator=(other);
		_target = other._target;
	}
	return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : Form(other.getName(), other.getGradeToSign(), other.getGradeToExec()) {
	*this = other;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
	
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	std::ofstream ofs;
	if (!isSigned())
		throw FormNotSignedException();
	if (executor.getGrade() > getGradeToExec())
		throw GradeTooLowException();
	std::string	filename = _target + "_shrubbery";
	ofs.open(filename.c_str());
	if (!ofs.is_open())
		throw std::runtime_error("Failed to create file: " + filename);
	else {
		ofs << "ASCII trees\n";
		ofs.close();
	}
}
