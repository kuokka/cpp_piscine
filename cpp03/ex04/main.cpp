/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 17:04:46 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/26 21:49:56 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <cstdlib>
#include "SuperTrap.hpp"

int		main()
{
	srand(time(NULL));
	SuperTrap	a("Paka");
	SuperTrap	b("Ralo");
   	SuperTrap	c = a;
	FragTrap	test1("test fragtrap");
	NinjaTrap	test2("test ninjatrap");
	c = b;
	
	a.rangedAttack(b.getName());
	b.takeDamage(a.getRangedAD());

	a.meleeAttack(b.getName());
	b.takeDamage(a.getMeleeAD());

	a.ninjaShoebox(test1);
	a.vaulthunter_dot_exe(test2.getName());
	return 0;
}
