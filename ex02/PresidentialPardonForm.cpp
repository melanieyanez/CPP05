/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 08:22:07 by melanieyane       #+#    #+#             */
/*   Updated: 2024/05/24 09:36:32 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	#include "PresidentialPardonForm.hpp"

	PresidentialPardonForm::PresidentialPardonForm() : AForm("Presidential Pardon Form", 25, 5), _target("Default"){}
	
	PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm("Presidential Pardon Form", 25, 5), _target(target){}
	
	PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : AForm(src), _target(src.getTarget()){}
		
	PresidentialPardonForm::~PresidentialPardonForm(){}

	PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs){
		AForm::operator=(rhs);
		return *this;
	}

	std::string PresidentialPardonForm::getTarget() const{
		return this->_target;
	}

	void	PresidentialPardonForm::execute(const Bureaucrat &executor) const{
		
	}