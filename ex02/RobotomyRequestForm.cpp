/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 08:21:20 by melanieyane       #+#    #+#             */
/*   Updated: 2024/05/24 10:45:33 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	#include "RobotomyRequestForm.hpp"

	RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy Request Form", 72, 45), _target("Default"){}
	
	RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("Robotomy Request Form", 72, 45), _target(target){}
	
	RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : AForm(src), _target(src.getTarget()){}
		
	RobotomyRequestForm::~RobotomyRequestForm(){}

	RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs){
		AForm::operator=(rhs);
		return *this;
	}

	std::string RobotomyRequestForm::getTarget() const{
		return this->_target;
	}

	void	RobotomyRequestForm::execute(const Bureaucrat &executor) const{
		if (!this->getSigned())
			throw NotSignedException();
		if (executor.getGrade() > this->getExecutingGrade())
			throw GradeTooLowException();
			
		std::cout << "Bzzzz... Bzzzzzzzz... Bzzzzzzzzzzz" << std::endl;
		if (std::rand() % 2)
			std::cout << this->_target << " has been robotomized successfully!" << std::endl;
		else
			std::cout << "The robotomy failed." << std::endl;
	}