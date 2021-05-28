/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 21:08:25 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/28 22:45:14 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include <stdlib.h>

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
	
	for (int i = 0; i < s.getCount(); ++i)
	{
		ISpaceMarine* cur = s.getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
}

int		main()
{
	test();
	system("leaks a.out");
	return (0);
}
