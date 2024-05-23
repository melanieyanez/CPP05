/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 15:59:06 by myanez-p          #+#    #+#             */
/*   Updated: 2024/05/23 19:44:04 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <iostream>

#include "Form.hpp"

class Form;

class Bureaucrat{

	public:
		Bureaucrat();
		Bureaucrat(const std::string &name, const int &grade);
		Bureaucrat(const Bureaucrat &src);
		~Bureaucrat();

		Bureaucrat &operator=(const Bureaucrat &rhs);
		
		std::string 		getName() const;
		int 				getGrade() const;

		void				incrementGrade();
		void				decrementGrade();

		void				signForm(Form &toSign);

	private:
		const std::string	_name;
		int 				_grade;	

	class GradeTooHighException : public std::exception{
		virtual const char	*what() const throw(){
			return "Oops! Grade is too high!";
		}
	};

	class GradeTooLowException : public std::exception{
		virtual const char	*what() const throw(){
			return "Oops! Grade is too low!";
		}
	};
};

std::ostream &operator<<(std::ostream& os, const Bureaucrat &src);

#endif