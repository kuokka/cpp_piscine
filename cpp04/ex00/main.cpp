/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 17:11:40 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/28 20:42:37 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Troll.hpp"

int		main()
{
	Sorcerer	s_a("James", "Lead");
	Sorcerer	s_b("John", "Intern");
	Sorcerer	s_c = s_a;

	s_c = s_b;
	std::cout << s_a;
	std::cout << s_c;

	Victim		v_a("Jack");
	Victim		v_b("Greg");
	Victim		v_c = v_a;

	v_c = v_b;
	std::cout << v_a;
	std::cout << v_c;

	Peon		p_a("Jane");
	Peon		p_b("Lisa");
	Peon		p_c = p_a;

	p_c = p_b;
	std::cout << p_a;
	std::cout << p_c;

	std::cout << "*** Subject Test ***" << std::endl;
	
	Sorcerer robert("Robert", "the Magnificent");

	Victim jim("Jimmy");
	Peon joe("Joe");
	
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);

	Victim	*tester;

	tester = &jim;
	tester->getPolymorphed();

	tester = &joe;
	tester->getPolymorphed();
	
	Troll	james("james");

	std::cout << james;
	robert.polymorph(james);

	std::cout << "Start Destruct" << std::endl << std::endl;
	return (0);
}
