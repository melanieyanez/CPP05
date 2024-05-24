/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 20:12:11 by melanieyane       #+#    #+#             */
/*   Updated: 2024/05/24 08:37:20 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include <string>
#include <iostream>

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm{
	public:
		AForm();
		AForm(const std::string &Name, const int &signingGrade, const int &executingGrade);
		AForm(const AForm &src);
		virtual ~AForm();

		AForm	&operator=(const AForm &rhs);

		std::string			getName() const;
		bool				getSigned() const;
		int					getSigningGrade() const;
		int					getExecutingGrade() const;

		void				beSigned(const Bureaucrat &signator);
		virtual void		execute(const Bureaucrat &executor) const = 0;

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
	
	class AlreadySignedException : public std::exception{
		virtual const char *what() const throw(){
			return "Oops! Form is already signed!";
		}
	};
};

std::ostream &operator<<(std::ostream &os, const AForm &src);

#endif