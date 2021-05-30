/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 17:29:17 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/30 21:37:20 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int		main()
{	
	Bureaucrat	b1("b1", 1);
	Bureaucrat	b2("b2", 30);
	Bureaucrat	b3("b3", 50);
	Bureaucrat	b4("b4", 150);
	Intern	intern;
	srand(time(NULL));
	std::cout << b1 << b2 << b3 << b4;

	Form	*f1 = intern.makeForm("robotomy request", "house");
	Form	*f2 = intern.makeForm("shrubbery creation", "house");
	Form	*f3 = intern.makeForm("presidential pardon", "house");

	b1.executeForm(*f1);
	b1.executeForm(*f2);
	b1.executeForm(*f3);

	b1.signForm(*f1);
	b1.signForm(*f2);
	b1.signForm(*f3);

	b4.executeForm(*f1);
	b3.executeForm(*f1);
	b2.executeForm(*f1);
	b1.executeForm(*f1);

	b4.executeForm(*f2);
	b3.executeForm(*f2);
	b2.executeForm(*f2);
	b1.executeForm(*f2);

	b4.executeForm(*f3);
	b3.executeForm(*f3);
	b2.executeForm(*f3);
	b1.executeForm(*f3);
	delete f1;
	delete f2;
	delete f3;
	return (0);
}
