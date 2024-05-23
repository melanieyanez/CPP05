/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 15:59:03 by myanez-p          #+#    #+#             */
/*   Updated: 2024/05/23 19:43:59 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Unknown"), _grade(150){};

Bureaucrat::Bureaucrat(const std::string &name, const int &grade) : _name(name){
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src){
	*this = src;
}

Bureaucrat::~Bureaucrat(){};

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs){
	if (this != &rhs)
		this->_grade = rhs.getGrade();
	return *this;
}
		
std::string	Bureaucrat::getName() const{
	return this->_name;
}

int	Bureaucrat::getGrade() const{
	return this->_grade;
}

void	Bureaucrat::incrementGrade(){
	if (this->_grade <= 1)
		throw GradeTooHighException();
	this->_grade--;
}

void	Bureaucrat::decrementGrade(){
	if (this->_grade >= 150)
		throw GradeTooLowException();
	this->_grade++;
}

void	Bureaucrat::signForm(Form &toSign){
	try
	{
		toSign.beSigned(*this);
		std::cout << this->_name << " signed " << toSign.getName() << "." << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << this->_name << " couldn't sign " << toSign.getName() << " because " << e.what() << "." << std::endl;
	}
}

std::ostream &operator<<(std::ostream& os, const Bureaucrat &src){
	os << src.getName() << ", bureaucrat grade " << src.getGrade() << "." << std::endl;
	return os;
}