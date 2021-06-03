/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 16:20:02 by seunghoh          #+#    #+#             */
/*   Updated: 2021/06/04 01:46:10 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <cstdlib>
#include "span.hpp"

void	range_test()
{
	Span	sp(50000);
	std::cout << "*****   Big Size Test (Length = 50000)  *****" << std::endl;
	std::vector<int>	pool;
	for(int i = 0; i < 50000; ++i)
	{
		pool.push_back(rand());
	}
	sp.addNumber(pool.begin(), pool.end());
	std::cout << "Short Span : " << sp.shortestSpan() << std::endl;
	std::cout << "Long Span : " << sp.longestSpan() << std::endl;
	std::cout << std::endl << std::endl << std::endl;
}

void	basic_test()
{	
	Span	sp(20);
	std::cout << "*****   Basic Span Test   *****" << std::endl;
	
	for (int i = 0; i < 20; ++i)
	{
		sp.addNumber(rand() % 100);
	}
	std::cout << "Span : " << sp << std::endl;
	std::cout << "Short Span : " << sp.shortestSpan() << std::endl;
	std::cout << "Long Span : " << sp.longestSpan() << std::endl;
	std::cout << std::endl << std::endl << std::endl;
}

void	span_exception()
{
	Span	sp(10);
	std::cout << "*****   Span Exception Test   *****" << std::endl;
	std::cout << "No Elements" << std::endl;
	std::cout << "Span : " << sp << std::endl;
	try
	{
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "One Elements" << std::endl;
	sp.addNumber(5);
	std::cout << "Span : " << sp << std::endl;
	try
	{
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << std::endl << std::endl;
}

void	add_exception()
{
	std::cout << "*****   Add Exception Test   *****" << std::endl;
	std::cout << "Span Max Length : 10" << std::endl;
	Span	sp1 = Span(10);
	for(int i = 0; i < 12; ++i)
	{
		try
		{
			sp1.addNumber(i);
			std::cout << sp1 << std::endl;
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl << std::endl << std::endl;
	std::cout << "Span Max Length : 5" << std::endl;
	std::cout << "Insert 10 Size Vector" << std::endl;
	Span	sp2 = Span(5);
	std::vector<int>	test(10, 100);
	try
	{
		sp2.addNumber(test.begin(), test.end());
		std::cout << sp2 << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << std::endl << std::endl;
}

void	subject_test()
{
	std::cout << "*****   Subject Test   *****" << std::endl;
	Span	sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << std::endl << std::endl << std::endl;
}

int		main()
{
	srand(time(0));
	subject_test();
	add_exception();
	span_exception();
	basic_test();
	range_test();
	return (0);
}
