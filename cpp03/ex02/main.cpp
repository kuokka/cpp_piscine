/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 17:04:46 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/26 20:00:30 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int		main()
{
	srand(time(NULL));
	ClapTrap	a("Paka");
	ClapTrap	b("Ralo");
	ClapTrap	c = a;
	c = b;

	FragTrap	d("Monster");
	FragTrap	e("Rat");
	FragTrap	f = d;
	f = e;
	
	ScavTrap	g("insec");
	ScavTrap	h("jasek");
	ScavTrap	i = g;

	i = h;
	a.rangedAttack(b.getName());
	b.takeDamage(a.getRangedAD());
	a.meleeAttack(b.getName());
	b.takeDamage(a.getMeleeAD());
	b.beRepaired(20);

	d.rangedAttack(e.getName());
	e.takeDamage(d.getRangedAD());
	d.meleeAttack(e.getName());
	e.takeDamage(d.getMeleeAD());
	e.beRepaired(20);
	d.vaulthunter_dot_exe(e.getName());
	e.takeDamage(d.getSkillAD());
	d.vaulthunter_dot_exe(e.getName());
	e.takeDamage(d.getSkillAD());
	d.vaulthunter_dot_exe(e.getName());
	e.takeDamage(d.getSkillAD());
	d.vaulthunter_dot_exe(e.getName());
	e.takeDamage(d.getSkillAD());

	g.rangedAttack(h.getName());
	h.takeDamage(g.getRangedAD());
	g.meleeAttack(h.getName());
	h.takeDamage(g.getMeleeAD());
	h.beRepaired(20);
	
	g.challengeNewcomer(a.getName());
	g.challengeNewcomer(b.getName());
	return 0;
}
