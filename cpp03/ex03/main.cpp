/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 17:04:46 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/26 20:53:00 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

int		main()
{
	NinjaTrap	a("paka");
	NinjaTrap	b("ralo");
	NinjaTrap	c = a;
	c = b;
	
	FragTrap	test1("frag 1");
	ScavTrap	test2("scav 1");
	ClapTrap	test3("clap 1");

	a.rangedAttack(b.getName());
	b.takeDamage(a.getRangedAD());
	a.meleeAttack(b.getName());
	b.takeDamage(a.getMeleeAD());
	b.beRepaired(20);
	a.ninjaShoebox(test1);
	a.ninjaShoebox(test2);
	a.ninjaShoebox(test3);
	a.ninjaShoebox(b);
	a.ninjaShoebox(b);
	a.ninjaShoebox(b);
	a.ninjaShoebox(b);
	return 0;
}
