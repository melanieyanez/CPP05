/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 20:12:02 by melanieyane       #+#    #+#             */
/*   Updated: 2024/05/24 08:08:53 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("Default"), _signed(false), _signingGrade(1), _executingGrade(1){}

AForm::AForm(const std::string &Name, const int &signingGrade, const int &executingGrade) : _name(Name), _signed(false), _signingGrade(signingGrade), _executingGrade(executingGrade)
{
	if (this->_signingGrade > 150 || this->_executingGrade > 150)
		throw GradeTooLowException();
	if (this->_signingGrade < 1 || this->_executingGrade < 1)
		throw GradeTooHighException();
}

AForm::AForm(const AForm &src) : _name(src.getName()), _signed(src.getSigned()), _signingGrade(src.getSigningGrade()), _executingGrade(src.getExecutingGrade()){}

AForm::~AForm() {}

AForm &AForm::operator=(const AForm &rhs)
{
	if (this != &rhs)
		this->_signed = rhs.getSigned();
	return *this;
}

std::string AForm::getName() const
{
	return this->_name;
}

bool AForm::getSigned() const
{
	return this->_signed;
}

int AForm::getSigningGrade() const
{
	return this->_signingGrade;
}

int AForm::getExecutingGrade() const
{
	return this->_executingGrade;
}

void AForm::beSigned(const Bureaucrat &Signator)
{
	if (this->_signed)
		throw AlreadySignedException();
	if (Signator.getGrade() > this->_signingGrade)
		throw GradeTooLowException();
	this->_signed = true;
}

std::ostream &operator<<(std::ostream &os, const AForm &src)
{
	os << "[Name] : " << src.getName() << std::endl;
	os << "[Signed] : " << src.getSigned() << std::endl;
	os << "[Grade to sign] : " << src.getSigningGrade() << std::endl;
	os << "[Grade to execute] : " << src.getExecutingGrade() << std::endl;
	return os;
}