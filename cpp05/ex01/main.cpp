/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 17:29:17 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/30 17:47:41 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

void	test_constructor(int sign_grade, int execute_grade)
{
	try
	{
		Form	a("Test Form", sign_grade, execute_grade);
		std::cout << a;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

int		main()
{	
	std::cout << "*** Test Constructor ***" << std::endl;
	test_constructor(1, 1);
	test_constructor(0, 1);
	test_constructor(-1, 1);
	test_constructor(1, 0);
	test_constructor(1, -1);

	test_constructor(150, 150);
	test_constructor(151, 150);
	test_constructor(152, 150);
	test_constructor(150, 151);
	test_constructor(150, 152);
	std::cout << "*** End Test Constructor ***" << std::endl;

	std::cout << "*** Test Sign ***" << std::endl;
	Form	f1("form1", 30, 40);
	Form	f2("form2", 20, 50);
	
	Bureaucrat	b1("b1", 10);
	Bureaucrat	b2("b2", 21);
	Bureaucrat	b3("b3", 31);
	b1.signForm(f1);
	b1.signForm(f2);

	b2.signForm(f1);
	b2.signForm(f2);

	b3.signForm(f1);
	b3.signForm(f2);
	std::cout << "*** End Test Sign ***" << std::endl;
	return (0);
}
