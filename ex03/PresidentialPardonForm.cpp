/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <myanez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 08:22:07 by melanieyane       #+#    #+#             */
/*   Updated: 2024/05/25 13:15:43 by myanez-p         ###   ########.fr       */
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
		if (!this->getSigned())
			throw NotSignedException();
		if (executor.getGrade() > this->getExecutingGrade())
			throw GradeTooLowException();
			
		std::cout << executor.getName() << " executed " << this->getName() << "." << std::endl;
		std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	}