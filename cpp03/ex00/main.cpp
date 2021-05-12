/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 17:04:46 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/12 21:28:26 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int		main()
{
	FragTrap	a = FragTrap("Ralo");
	FragTrap	b = FragTrap("Paka");
	FragTrap	c;

	srand(time(NULL));
	c = b;
	c.rangedAttack(a.getName());
	a.takeDamage(c.getRangedAD());
	c.meleeAttack(a.getName());
	a.takeDamage(c.getMeleeAD());
	a.beRepaired(20);
	c.rangedAttack(a.getName());
	a.takeDamage(c.getRangedAD());
	c.meleeAttack(a.getName());
	a.takeDamage(c.getMeleeAD());
	c.rangedAttack(a.getName());
	a.takeDamage(c.getRangedAD());
	c.meleeAttack(a.getName());
	a.takeDamage(c.getMeleeAD());

	a.beRepaired(60);
	a.beRepaired(60);

	c.vaulthunter_dot_exe(a.getName());
	a.takeDamage(c.getSkillAD());
	c.vaulthunter_dot_exe(a.getName());
	a.takeDamage(c.getSkillAD());
	c.vaulthunter_dot_exe(a.getName());
	a.takeDamage(c.getSkillAD());
	c.vaulthunter_dot_exe(a.getName());
	a.takeDamage(c.getSkillAD());
	c.vaulthunter_dot_exe(a.getName());
	c.vaulthunter_dot_exe(a.getName());
	c.vaulthunter_dot_exe(a.getName());
	return 0;
}
