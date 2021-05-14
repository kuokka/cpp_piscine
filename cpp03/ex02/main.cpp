/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 17:04:46 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/14 19:30:36 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int		main()
{
	FragTrap	a("Paka");
	FragTrap	b("Ralo");

	a.rangedAttack(b.getName());
	b.takeDamage(a.getRangedAD());
	return 0;
}
