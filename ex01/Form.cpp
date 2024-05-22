/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <myanez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 18:22:10 by myanez-p          #+#    #+#             */
/*   Updated: 2024/05/22 18:58:26 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Default"), _signingGrade(1), _executingGrade(1){}

Form::Form(const std::string &Name, const int &signingGrade, const int &executingGrade) :  _name(Name), _signingGrade(signingGrade), _executingGrade(executingGrade){}

Form::Form(const Form &src) : _name(src.getName()), _signed(src.getSigned()), _signingGrade(src.getSigningGrade()), _executingGrade(src.getExecutingGrade()){
	//exceptions
}

Form::~Form(){}

Form	&Form::operator=(const Form &rhs){
	if (this != &rhs)
		this->_signed = rhs.getSigned();
	return *this;
}

std::string	Form::getName() const{
	return this->_name;
}

bool	Form::getSigned() const{
	return this->_signed;
}

const int	Form::getSigningGrade() const{
	return this->_signingGrade;
}

const int	Form::getExecutingGrade() const{
	return this->_executingGrade;
}

void	Form::beSigned(const Bureaucrat &signator){
	//exceptions
}

std::ostream &operator<<(std::ostream &os, const Form &src){
	//toimplement
}