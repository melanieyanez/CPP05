/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <myanez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 15:58:48 by myanez-p          #+#    #+#             */
/*   Updated: 2024/05/25 13:20:13 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main() {
    Bureaucrat Joey("Joey", 130);
    Bureaucrat Ross("Ross", 5);
    Bureaucrat Chandler("Chandler", 40);

    Intern someRandomIntern;
    AForm* form;

    std::cout << "******************************************************" << std::endl;
    std::cout << "* Testing Shrubbery Creation Form creation by Intern *" << std::endl << std::endl;
    try {
        form = someRandomIntern.makeForm("ShrubberyCreationForm", "Central Perk");
        if (form) {
            Joey.signForm(*form);
            Joey.executeForm(*form);
            delete form;
        }
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "******************************************************" << std::endl;
    std::cout << "* Testing Robotomy Request Form creation by Intern *" << std::endl << std::endl;
    try {
        form = someRandomIntern.makeForm("RobotomyRequestForm", "Monica");
        if (form) {
            Chandler.signForm(*form);
            Chandler.executeForm(*form);
            delete form;
        }
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "******************************************************" << std::endl;
    std::cout << "* Testing Presidential Pardon Form creation by Intern *" << std::endl << std::endl;
    try {
        form = someRandomIntern.makeForm("PresidentialPardonForm", "Rachel");
        if (form) {
            Ross.signForm(*form);
            Ross.executeForm(*form);
            delete form;
        }
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "******************************************************" << std::endl;
    std::cout << "* Testing non-existing Form creation by Intern *" << std::endl << std::endl;
    try {
        form = someRandomIntern.makeForm("InvalidForm", "Target");
        if (form) {
            delete form;
        }
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}

/*
int main(){
    std::cout << "******************************************************" << std::endl;
    std::cout << "*  *" << std::endl << std::endl;
    try
    {
        
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "******************************************************" << std::endl;
    std::cout << "*  *" << std::endl << std::endl;
    try
    {
   
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "******************************************************" << std::endl;
    std::cout << "*  *" << std::endl << std::endl;
    try 
    {
        
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "******************************************************" << std::endl;
    std::cout << "*  *" << std::endl << std::endl;
    try
    {
        
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "******************************************************" << std::endl;
    std::cout << "*  *" << std::endl << std::endl;
    try
    {
        
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }


    std::cout << "******************************************************" << std::endl;
    std::cout << "* *" << std::endl << std::endl;
    try
    {
     
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    return 0;
}
*/