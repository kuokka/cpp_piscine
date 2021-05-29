/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 21:08:25 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/29 14:44:19 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

void	test()
{
	TacticalMarine	*m1 = new TacticalMarine;
	AssaultTerminator	*a1 = new AssaultTerminator;
	Squad	s;

	m1->battleCry();
	m1->rangedAttack();
	m1->meleeAttack();

	a1->battleCry();
	a1->rangedAttack();
	a1->meleeAttack();

	s.push(m1);
	s.push(a1);
	s.push(m1->clone());
	s.push(a1->clone());
	s.push(m1->clone());
	s.push(a1->clone());
	s.push(m1->clone());
	s.push(a1->clone());
	
	std::cout << "*** Test Copy, Assign ***" << std::endl;
	Squad	s2 = s;
	Squad	s3;

	s3 = s;
	std::cout << "*** Squad one Start ***" << std::endl;
	for (int i = 0; i < s.getCount(); ++i)
	{
		ISpaceMarine* cur = s.getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	std::cout << std::endl;
	std::cout << "*** Squad Two Start ***" << std::endl;
	for (int i = 0; i < s2.getCount(); ++i)
	{
		ISpaceMarine* cur = s2.getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	std::cout << std::endl;
	std::cout << "*** Squad Three Start ***" << std::endl;
	for (int i = 0; i < s2.getCount(); ++i)
	{
		ISpaceMarine* cur = s2.getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	std::cout << std::endl;

	std::cout << s.getCount() << std::endl;
	std::cout << s2.getCount() << std::endl;
	std::cout << s3.getCount() << std::endl;
}

int		main()
{
	test();
	system("leaks a.out");
	return (0);
}
