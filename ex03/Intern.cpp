/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <myanez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 21:24:55 by melanieyane       #+#    #+#             */
/*   Updated: 2024/05/25 13:01:59 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){}

Intern::Intern(const Intern &src){
	(void)src;
}
	
Intern::~Intern(){}

Intern &Intern::operator=(const Intern &rhs){
	(void)rhs;
	return *this;
}

AForm	*Intern::makeRobotomy(const std::string &Target){
	return(new RobotomyRequestForm(Target));
}

AForm	*Intern::makePardon(const std::string &Target){
	return(new PresidentialPardonForm(Target));
}

AForm	*Intern::makeShrubbery(const std::string &Target){
	return(new ShrubberyCreationForm(Target));
}

AForm *Intern::makeForm(const std::string &Name, const std::string &Target) const{
	
	struct FormType{
		std::string name;
		AForm *(*create)(const std::string &Target);
	};
	
	FormType forms[] = {
		{"PresidentialPardonForm", &Intern::makePardon},
		{"RobotomyRequestForm", &Intern::makeRobotomy},
		{"ShrubberyCreationForm", &Intern::makeShrubbery}
	};
	
	for(int i = 0; i < 3; i++)
	{
		if(forms[i].name == Name){
			std::cout << "Intern creates " << Name << std::endl;
			return forms[i].create(Target);
		}
	}
	throw InexistentForm();
}