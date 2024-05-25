/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <myanez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 08:20:51 by melanieyane       #+#    #+#             */
/*   Updated: 2024/05/25 13:16:36 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	#include "ShrubberyCreationForm.hpp"
	#include <fstream>

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
		if (!this->getSigned())
			throw NotSignedException();
		if (executor.getGrade() > this->getExecutingGrade())
			throw GradeTooLowException();
		
		std::cout << executor.getName() << " executed " << this->getName() << "." << std::endl;
		std::ofstream ofs((_target + "_shrubbery").c_str());
    	ofs << "        ccee88oo"<< std::endl;
		ofs << "  C8O8O8Q8PoOb o8oo" << std::endl;
    	ofs << " dOB69QO8PdUOpugoO9bD" << std::endl;
    	ofs << "CgggbU8OU qOp qOdoUOdcb" << std::endl;
    	ofs << "    6OuU  /p u gcoUodpP" << std::endl;
    	ofs << "     \\\\\\//  /douUP" << std::endl;
    	ofs << "        \\\\\\////" << std::endl;
    	ofs << "         |||/\"" << std::endl;
    	ofs << "         |||\\/" << std::endl;
		ofs << "         |||||" << std::endl;
    	ofs << "   .....//||||\\...." << std::endl;

    	ofs.close();
	}