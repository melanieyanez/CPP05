/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 21:24:48 by melanieyane       #+#    #+#             */
/*   Updated: 2024/05/24 21:28:08 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <string>
#include <iostream>

#include "AForm.hpp"

class Intern{
	Intern();
	Intern(const Intern &src);
	~Intern();

	Intern &operator=(const Intern &rhs);

	AForm *makeForm(const std::string Name, const std::string Target);
	
};

#endif