/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 18:22:03 by myanez-p          #+#    #+#             */
/*   Updated: 2024/05/23 19:42:02 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <string>
#include <iostream>

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
	public:
		Form();
		Form(const std::string &Name, const int &signingGrade, const int &executingGrade);
		Form(const Form &src);
		~Form();

		Form	&operator=(const Form &rhs);

		std::string			getName() const;
		bool				getSigned() const;
		int					getSigningGrade() const;
		int					getExecutingGrade() const;

		void				beSigned(Bureaucrat &signator);

	private:
		const std::string 	_name;
		bool				_signed;
		const int			_signingGrade;
		const int			_executingGrade;

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

std::ostream &operator<<(std::ostream &os, const Form &src);

#endif