/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <myanez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 21:24:48 by melanieyane       #+#    #+#             */
/*   Updated: 2024/05/25 13:08:40 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <string>
#include <iostream>

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern{
	public:
		Intern();
		Intern(const Intern &src);
		~Intern();

		Intern &operator=(const Intern &rhs);

		AForm *makeForm(const std::string &Name, const std::string &Target) const;

		class InexistentForm : public std::exception{
			virtual const char	*what() const throw(){
				return "Oops! This form doesn't exist!";
			}
		};
		
	private:
		static AForm	*makeRobotomy(const std::string &Target);
		static AForm	*makePardon(const std::string &Target);
		static AForm	*makeShrubbery(const std::string &Target);
};

#endif