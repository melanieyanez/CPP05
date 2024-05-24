/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 08:20:51 by melanieyane       #+#    #+#             */
/*   Updated: 2024/05/24 09:43:29 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	#include "ShrubberyCreationForm.hpp"

	ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery Creation Form", 145, 137), _target("Default"){}
	
	ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("Shrubbery Creation Form", 145, 137), _target(target){}
	
	ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : AForm(src), _target(src.getTarget()){}
		
	ShrubberyCreationForm::~ShrubberyCreationForm(){}

	ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs){
		AForm::operator=(rhs);
		return *this;
	}

	std::string ShrubberyCreationForm::getTarget() const{
		return this->_target;
	}

	void	ShrubberyCreationForm::execute(const Bureaucrat &executor) const{
		
	}