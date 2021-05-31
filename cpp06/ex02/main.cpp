/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 16:09:56 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/31 19:13:57 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base*	generate(void)
{
	int	random;

	random = rand() % 3;
	if (random == 0)
	{
		std::cout << "Generate : A" << std::endl; 
		return new A();
	}
	else if (random == 1)
	{
		std::cout << "Generate : B" << std::endl; 
		return new B();
	}
	else if (random == 2)
	{
		std::cout << "Generate : C" << std::endl; 
		return new C();
	}
	return 0;
}

void	identify_from_pointer(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Unknown Class" << std::endl;
}

void	identify_from_reference(Base& p)
{
	if (dynamic_cast<A*>(&p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(&p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(&p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Unknown Class" << std::endl;
}

int		main()
{
	Base*	p;

	srand(time(NULL));
	for (int i = 0; i < 5; ++i)
	{
		p = generate();
		identify_from_pointer(p);
		identify_from_reference(*p);
		delete p;
	}
	return (0);
}
