/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 02:58:04 by seunghoh          #+#    #+#             */
/*   Updated: 2021/06/04 17:04:48 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>
#include "mutantstack.hpp"

void	subject_mutant_test()
{
	std::cout << "***** Subject Mutant Stack Test *****" << std::endl;
	MutantStack<int>	mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << "Top : " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Size : " << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(123);
	mstack.push(456);
	mstack.push(223);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	std::cout << "***** Subject Mutant Stack Test End *****\n\n\n" << std::endl;
}

void	subject_list_test()
{
	std::cout << "***** Subject List Test *****" << std::endl;
	std::list<int>	li;

	li.push_back(5);
	li.push_back(17);

	std::cout << "Top : " << li.back() << std::endl;
	li.pop_back();
	std::cout << "Size : " << li.size() << std::endl;

	li.push_back(3);
	li.push_back(5);
	li.push_back(737);
	li.push_back(123);
	li.push_back(456);
	li.push_back(223);
	li.push_back(0);

	std::list<int>::iterator it = li.begin();
	std::list<int>::iterator ite = li.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::list<int> li2(li);
	std::cout << "***** Subject Mutant List Test End *****\n\n\n" << std::endl;
}

void	constant_test()
{
	std::cout << "***** Const Iterator Test *****" << std::endl;
	MutantStack<int>	s;
	for (int i = 0; i < 10; ++i)
	{
		s.push(i);
	}
	const MutantStack<int>	s2(s);
	MutantStack<int>::iterator	it = s.begin();
	MutantStack<int>::iterator	ite = s.end();
	MutantStack<int>::const_iterator	cit = s2.begin();
	MutantStack<int>::const_iterator	cite = s2.end();
	
	std::cout << "---- Regular iterator ----" << std::endl;
	while (it != ite)
	{
		std::cout << *it << " ";
		it++;
	}
	std::cout << std::endl;
	std::cout << "---- Const iterator ----" << std::endl;
	while (cit != cite)
	{
		std::cout << *cit << " ";
		cit++;
	}
	std::cout << std::endl;
	it = s.begin();
	cit = s2.begin();

	std::cout << "---- Regular iterator ----" << std::endl;
	while (it != ite)
	{
		(*it)++;
		std::cout << *it << " ";
		it++;
	}
	std::cout << std::endl;
	std::cout << "---- Const iterator ----" << std::endl;
	while (cit != cite)
	{
		// (*cit)++;
		std::cout << *cit << " ";
		cit++;
	}
	std::cout << std::endl;
	std::cout << "***** Const Iterator Test End *****\n\n\n" << std::endl;
}

void	reverse_test()
{
	MutantStack<int>	s;
	for (int i = 0; i < 10; ++i)
	{
		s.push(i);
	}
	MutantStack<int>::reverse_iterator	it = s.rbegin();
	MutantStack<int>::reverse_iterator	ite = s.rend();
	
	std::cout << "***** Reverse Iterator Test *****" << std::endl;
	while (it != ite)
	{
		std::cout << *it << " ";
		it++;
	}
	std::cout << std::endl;
	std::cout << "***** Reverse Iterator Test End *****\n\n\n" << std::endl;
}

int		main()
{
	subject_mutant_test();
	subject_list_test();
	constant_test();
	reverse_test();
	return (0);
}
