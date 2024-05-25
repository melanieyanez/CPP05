/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 21:24:55 by melanieyane       #+#    #+#             */
/*   Updated: 2024/05/25 08:22:54 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){}

Intern::Intern(const Intern &src){}
	
Intern::~Intern(){}

Intern &Intern::operator=(const Intern &rhs){
	return *this;
}

AForm *Intern::makeForm(const std::string Name, const std::string Target){
	std::string FormType[3];
	FormType[0] = "PresidentialPardonForm";
	FormType[1] = "RobotomyRequestForm";
	FormType[2] = "ShrubberyCreationForm";
	for(int i = 0; i < 3; i++)
	{
		if(FormType[i] == Name)
			
	}
	
}