/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 18:22:10 by myanez-p          #+#    #+#             */
/*   Updated: 2024/05/23 12:03:37 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Default"), _signingGrade(1), _executingGrade(1), _signed(false){}

Form::Form(const std::string &Name, const int &signingGrade, const int &executingGrade) : _name(Name), _signingGrade(signingGrade), _executingGrade(executingGrade), _signed(false)
{
	if (this->_signingGrade > 150 || this->_executingGrade > 150)
		throw GradeTooLowException();
	if (this->_signingGrade < 1 || this->_executingGrade < 1)
		throw GradeTooHighException();
}

Form::Form(const Form &src) : _name(src.getName()), _signed(src.getSigned()), _signingGrade(src.getSigningGrade()), _executingGrade(src.getExecutingGrade()){}

Form::~Form() {}

Form &Form::operator=(const Form &rhs)
{
	if (this != &rhs)
		this->_signed = rhs.getSigned();
	return *this;
}

std::string Form::getName() const
{
	return this->_name;
}

bool Form::getSigned() const
{
	return this->_signed;
}

const int Form::getSigningGrade() const
{
	return this->_signingGrade;
}

const int Form::getExecutingGrade() const
{
	return this->_executingGrade;
}

void Form::beSigned(Bureaucrat &Signator)
{
	if (Signator.getGrade() > this->_signingGrade)
		throw GradeTooLowException();
	this->_signed = true;
}

std::ostream &operator<<(std::ostream &os, const Form &src)
{
	os << "[Name] : " << src.getName() << std::endl;
	os << "[Signed] : " << src.getSigned() << std::endl;
	os << "[Grade to sign] : " << src.getSigningGrade() << std::endl;
	os << "[Grade to execute] : " << src.getExecutingGrade() << std::endl;
	return os;
}