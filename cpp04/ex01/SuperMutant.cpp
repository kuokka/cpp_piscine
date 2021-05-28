/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 17:15:54 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/28 19:02:41 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "SuperMutant.hpp"

SuperMutant::SuperMutant()
	:	Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant& ref)
	:	Enemy(ref.hp_, ref.type_)
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;

}

SuperMutant&	SuperMutant::operator=(const SuperMutant& ref)
{
	hp_ = ref.hp_;
	type_ = ref.type_;
	return *this;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}

void	SuperMutant::takeDamage(int damage)
{
	damage -= 3;
	Enemy::takeDamage(damage);
}
