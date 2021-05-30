/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 17:29:17 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/30 16:41:00 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

void	test_constructor(int grade)
{
	try
	{
		Bureaucrat	b("test", grade);
		std::cout << b;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	test_increase(Bureaucrat &b)
{
	try
	{
		b.increaseGrade();
		std::cout << b;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	test_decrease(Bureaucrat &b)
{
	try
	{
		b.decreaseGrade();
		std::cout << b;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

int		main()
{
	std::cout << "*** test Constructor ***" << std::endl;
	test_constructor(-2);
	test_constructor(-1);
	test_constructor(0);
	test_constructor(1);
	test_constructor(2);

	test_constructor(149);
	test_constructor(150);
	test_constructor(151);
	test_constructor(152);
	test_constructor(153);
	std::cout << "*** end constructor ***" << std::endl;

	Bureaucrat b("test", 5);
	std::cout << "*** test increase ***" << std::endl;
	test_increase(b);
	test_increase(b);
	test_increase(b);
	test_increase(b);
	test_increase(b);
	test_increase(b);
	test_increase(b);
	test_increase(b);
	std::cout << "*** end increase ***" << std::endl;

	b = Bureaucrat("test", 145);
	std::cout << "*** test decrease ***" << std::endl;
	test_decrease(b);
	test_decrease(b);
	test_decrease(b);
	test_decrease(b);
	test_decrease(b);
	test_decrease(b);
	test_decrease(b);
	test_decrease(b);
	test_decrease(b);
	test_decrease(b);
	test_decrease(b);
	test_decrease(b);
	std::cout << "*** end decrease ***" << std::endl;
	return (0);
}
