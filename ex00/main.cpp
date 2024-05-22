/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <myanez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 15:58:48 by myanez-p          #+#    #+#             */
/*   Updated: 2024/05/22 18:13:30 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"



int main(){
	std::cout << "******************************************************" << std::endl;
	std::cout << "*Creating a Bureaucrat object with a valid grade*" << std::endl << std::endl;
	try
	{
		Bureaucrat Joey("Joey", 100);
		std::cout << Joey << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "******************************************************" << std::endl;
	std::cout << "*Creating a Bureaucrat object with an invalid grade (too high)*" << std::endl << std::endl;

	try
	{
		Bureaucrat Ross("Ross", 0);
		std::cout << Ross << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "******************************************************" << std::endl;
	std::cout << "*Creating a Bureaucrat object with an invalid grade (too low)*" << std::endl << std::endl;
	
	try
	{
		Bureaucrat Phoebe("Phoebe", 300);
		std::cout << Phoebe << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "******************************************************" << std::endl;
	std::cout << "*Creating a Bureaucrat object with the lowest valid grade and decrementing it out of bounds*" << std::endl << std::endl;
	
	try
	{
		Bureaucrat Rachel("Rachel", 150);
		std::cout << Rachel << std::endl;
		Rachel.decrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "******************************************************" << std::endl;
	std::cout << "*Creating a Bureaucrat object with the highest valid grade and incrementing it out of bounds*" << std::endl << std::endl;

		try
	{
		Bureaucrat Monica("Monica", 1);
		std::cout << Monica << std::endl;
		Monica.incrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}