/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 15:58:48 by myanez-p          #+#    #+#             */
/*   Updated: 2024/05/24 11:42:53 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
    Bureaucrat Joey("Joey", 130);
    Bureaucrat Ross("Ross", 5);
    Bureaucrat Chandler("Chandler", 40);

    std::cout << "******************************************************" << std::endl;
    std::cout << "* Testing Presidential Pardon Form *" << std::endl << std::endl;
    try
    {
        PresidentialPardonForm pardon("Rachel");
        std::cout << pardon << std::endl;
        Ross.signForm(pardon);
        Ross.executeForm(pardon);
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "******************************************************" << std::endl;
    std::cout << "* Testing Robotomy Request Form *" << std::endl << std::endl;
    try
    {
        RobotomyRequestForm robotomy("Monica");
        std::cout << robotomy << std::endl;
        Chandler.signForm(robotomy);
        Chandler.executeForm(robotomy);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "******************************************************" << std::endl;
    std::cout << "* Testing Shrubbery Creation Form *" << std::endl << std::endl;
    try
    {
       ShrubberyCreationForm shrubbery("Home");
        std::cout << shrubbery << std::endl;
        Joey.signForm(shrubbery);
        Joey.executeForm(shrubbery);
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "******************************************************" << std::endl;
    std::cout << "* Testing NotSigned Exception *" << std::endl << std::endl;
    try
    {
         ShrubberyCreationForm shrubberyNotSigned("CentralPerk");
        std::cout << shrubberyNotSigned << std::endl;
        Joey.executeForm(shrubberyNotSigned);
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "******************************************************" << std::endl;
    std::cout << "* Testing GradeTooLow Exception *" << std::endl << std::endl;
    try
    {
        PresidentialPardonForm pardonLow("Phoebe");
        std::cout << pardonLow << std::endl;
        Ross.signForm(pardonLow);
        Joey.executeForm(pardonLow);
    } 
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}