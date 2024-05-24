/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 15:58:48 by myanez-p          #+#    #+#             */
/*   Updated: 2024/05/24 08:17:21 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    std::cout << "******************************************************" << std::endl;
    std::cout << "* Testing valid bureaucrat and form *" << std::endl << std::endl;
    try
    {
        Bureaucrat Joey("Joey", 100);
        Form AWR("Acting Workshop Registration", 50, 100);
        std::cout << Joey << std::endl;
        std::cout << AWR << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "******************************************************" << std::endl;
    std::cout << "* Testing form with too high signing grade *" << std::endl << std::endl;
    try
    {
        Form FSCA("Fashion Store Credit Application", 0, 50);
        std::cout << FSCA << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "******************************************************" << std::endl;
    std::cout << "* Testing form with too low signing grade *" << std::endl << std::endl;
    try 
    {
        Form CEOF("Catering Event Order Form", 200, 50);
        std::cout << CEOF << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "******************************************************" << std::endl;
    std::cout << "* Testing a form that the bureaucrat can sign *" << std::endl << std::endl;
    try
    {
        Bureaucrat Ross("Ross", 50);
        Form DEVSU("Dinosaur Exhibit Volunteer Sign-Up", 50, 100);
        std::cout << Ross << std::endl;
        std::cout << DEVSU << std::endl;
        Ross.signForm(DEVSU);
        std::cout << DEVSU << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "******************************************************" << std::endl;
    std::cout << "* Testing a form that the bureaucrat cannot sign *" << std::endl << std::endl;
    try
    {
        Bureaucrat Phoebe("Phoebe", 100);
        Form MGBR("Music Gig Booking Request", 50, 100);
        Phoebe.signForm(MGBR); 
        std::cout << MGBR << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }


    std::cout << "******************************************************" << std::endl;
    std::cout << "* Testing an already signed form *" << std::endl << std::endl;
    try
    {
        Bureaucrat Chandler("Chandler", 70);
        Bureaucrat Joey("Joey", 100);
        
        Form DCAF("Duck and Chick Adoption Form", 100, 120);
        Chandler.signForm(DCAF); 
        std::cout << DCAF << std::endl;
        Joey.signForm(DCAF);
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}