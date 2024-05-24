/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 15:59:06 by myanez-p          #+#    #+#             */
/*   Updated: 2024/05/24 10:11:16 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <iostream>

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

	private:
		const std::string	_name;
		int 				_grade;	
};

std::ostream &operator<<(std::ostream& os, const Bureaucrat &src);

#endif