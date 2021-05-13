/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 19:15:27 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/13 20:24:53 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
	:	hp_(100),
		max_hp_(100),
		mp_(100),
		max_mp_(100),
		level_(1),
		name_("Unknown"),
		melee_ad_(30),
		ranged_ad_(25),
		armor_(5)
{
	std::cout << "ScavTrap Default Constructor Called!" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
	:	hp_(100),
		max_hp_(100),
		mp_(100),
		max_mp_(100),
		level_(1),
		name_(name),
		melee_ad_(30),
		ranged_ad_(25),
		armor_(5)
{
	std::cout << "ScavTrap Constructor Called!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& ref)
	:	hp_(ref.hp_),
		max_hp_(ref.max_hp_),
		mp_(100),
		max_mp_(100),
		level_(ref.level_),
		name_(ref.name_),
		melee_ad_(ref.melee_ad_),
		ranged_ad_(ref.ranged_ad_),
		armor_(ref.armor_)
{
	std::cout << "ScavTrap Copy Constructor Called!" << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& ref)
{
	hp_ = ref.hp_;
	max_hp_ = ref.max_hp_;
	mp_ = ref.mp_;
	max_mp_ = ref.max_mp_;
	level_ = ref.level_;
	name_ = ref.name_;
	melee_ad_ = ref.melee_ad_;
	ranged_ad_ = ref.ranged_ad_;
	armor_ = ref.armor_;
	std::cout << "Assign Operator Called!" << std::endl;
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor Called!" << std::endl;
}

std::string	ScavTrap::getName() const
{
	return name_;
}

uint	ScavTrap::getMeleeAD() const
{
	return melee_ad_;
}

uint	ScavTrap::getRangedAD() const
{
	return ranged_ad_;
}

uint	ScavTrap::getSkillAD() const
{
	return skill_ad_;
}

void	ScavTrap::rangedAttack() const
{

}

void	ScavTrap::meleeAttack() const
{

}

void	ScavTrap::takeDamage(uint amount)
{

}

void	ScavTrap::beRepaired(uint amount)
{

}

void	ScavTrap::challengeNewcomer(const std::string& target)
{

}
