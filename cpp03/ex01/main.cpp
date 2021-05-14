/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 17:04:46 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/14 16:10:50 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int		main()
{
	ScavTrap	a = ScavTrap("Ralo");
	ScavTrap	b = ScavTrap("Paka");
	ScavTrap	c = a;
	FragTrap	d = FragTrap("Monster Rat");

	c = b;
	srand(time(NULL));
	c.rangedAttack(a.getName());
	a.takeDamage(c.getRangedAD());
	c.meleeAttack(a.getName());
	a.takeDamage(c.getMeleeAD());
	a.beRepaired(20);
	d.rangedAttack(a.getName());
	a.takeDamage(d.getRangedAD());
	d.meleeAttack(a.getName());
	a.takeDamage(d.getMeleeAD());
	d.meleeAttack(a.getName());
	a.takeDamage(d.getMeleeAD());
	d.meleeAttack(a.getName());
	a.takeDamage(d.getMeleeAD());
	d.meleeAttack(a.getName());
	a.takeDamage(d.getMeleeAD());
	c.rangedAttack(a.getName());
	a.takeDamage(c.getRangedAD());
	c.meleeAttack(a.getName());
	a.takeDamage(c.getMeleeAD());

	a.beRepaired(60);
	a.beRepaired(60);
	a.challengeNewcomer(b.getName());
	a.challengeNewcomer(c.getName());
	a.challengeNewcomer(d.getName());
	a.challengeNewcomer(d.getName());
	return 0;
}
