/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 15:58:48 by myanez-p          #+#    #+#             */
/*   Updated: 2024/05/23 12:11:01 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(){
	std::cout << "******************************************************" << std::endl;
	std::cout << "* tester des forms qui fonctionnent*" << std::endl << std::endl;
	try
	{
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "******************************************************" << std::endl;
	std::cout << "* test d'un form inf*" << std::endl << std::endl;

	try
	{

	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "******************************************************" << std::endl;
	std::cout << "*test d'un form sup*" << std::endl << std::endl;
	
	try
	{
	
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "******************************************************" << std::endl;
	std::cout << "*test d'un form que le bureaucrat peut signer*" << std::endl << std::endl;
	
	try
	{
	
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "******************************************************" << std::endl;
	std::cout << "*test d'un form que le bureaucrat ne peut pas signer *" << std::endl << std::endl;

	try
	{
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}