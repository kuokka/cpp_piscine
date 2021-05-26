/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 19:15:27 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/26 19:57:34 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
	:	hp_(100),
		max_hp_(100),
		mp_(50),
		max_mp_(50),
		level_(1),
		name_("Unknown"),
		melee_ad_(20),
		ranged_ad_(15),
		armor_(3)
{
	std::cout << "ScavTrap Default Constructor Called!" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
	:	hp_(100),
		max_hp_(100),
		mp_(50),
		max_mp_(50),
		level_(1),
		name_(name),
		melee_ad_(20),
		ranged_ad_(15),
		armor_(3)
{
	std::cout << "ScavTrap Constructor Called!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& ref)
	:	hp_(ref.hp_),
		max_hp_(ref.max_hp_),
		mp_(ref.mp_),
		max_mp_(ref.max_mp_),
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
	std::cout << "ScavTrap Assign Operator Called!" << std::endl;
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

void	ScavTrap::rangedAttack(std::string const &target) const
{
	std::cout << std::endl;
	std::cout << "*** Ranged Attack [damage : " << BLU << ranged_ad_ << ORG << "] ***" <<std::endl;
	std::cout << YEL << name_ << ORG << " : You're listening to 'Short-Range Damage Radio'." << std::endl;
	std::cout << MAG << "SC4V-TP " << YEL << name_ << ORG << " ";
	std::cout << "[" << BLU << hp_ << ORG << "]";
	std::cout << "[" << GRN << mp_ << ORG << "]";
	std::cout << " attacks " << YEL << target << ORG << std::endl;
}

void	ScavTrap::meleeAttack(std::string const &target) const
{
	std::cout << std::endl;
	std::cout << "*** Melee Attack [damage : " << BLU << melee_ad_ << ORG << "] ***" <<std::endl;
	std::cout << YEL << name_ << ORG << " : Pain school is now in session." << std::endl;
	std::cout << MAG << "SC4V-TP " << YEL << name_ << ORG << " ";
	std::cout << "[" << BLU << hp_ << ORG << "]";
	std::cout << "[" << GRN << mp_ << ORG << "]";
	std::cout << " attacks " << YEL << target << ORG << std::endl;
}

void	ScavTrap::takeDamage(uint amount)
{
	if (amount > armor_)
		amount -= armor_;
	else
		amount = 0;
    std::cout << std::endl;
    std::cout << "*** Take Damage [damage : " << BLU << amount << ORG << "] ***" <<std::endl;
    std::cout << YEL << name_ << ORG << " : Why do I even feel pain?" << std::endl;
    std::cout << MAG << "SC4V-TP " << YEL << name_ << ORG << " ";
    std::cout << "[" << BLU << hp_ << ORG << "]";
    std::cout << "[" << GRN << mp_ << ORG << "]";
    if (amount > hp_)
        hp_ = 0;
    else
        hp_ -= amount;
    std::cout << " => ";
    std::cout << "[" << BLU << hp_ << ORG << "]";
    std::cout << "[" << GRN << mp_ << ORG << "]";
    std::cout << std::endl;
}

void	ScavTrap::beRepaired(uint amount)
{
	hp_ += amount;
    mp_ += amount;
    if (hp_ > 100)
        hp_ = 100;
    if (mp_ > 100)
        mp_ = 100;
    std::cout << std::endl;
    std::cout << "*** Repair [amount : " << BLU << amount << ORG << "] ***" <<std::endl;
    std::cout << YEL << name_ << ORG << " : Sweet life juice!" << std::endl;
    std::cout << MAG << "SC4V-TP " << YEL << name_ << ORG << " ";
    std::cout << "[" << BLU << hp_ << ORG << "]";
    std::cout << "[" << GRN << mp_ << ORG << "]";
    std::cout << std::endl;
}

void	ScavTrap::challengeNewcomer(const std::string& target)
{	
	if (mp_ < 25)
	{
		std::cout << std::endl;
		std::cout << MAG << "SC4V-TP " << YEL << name_ << ORG << " ";
    	std::cout << "[" << BLU << hp_ << ORG << "]";
    	std::cout << "[" << GRN << mp_ << ORG << "]";
		std::cout << " : Not Enough Energy ! " << std::endl;
		return ;
	}
	std::string	quote_pool[] = {
		"You versus me! Me versus you! Either way!",
		"I will prove to you my robotic superiority!",
		"Dance battle! Or, you know... regular battle.",
		"Man versus machine! Very tiny streamlined machine!",
		"Care to have a friendly duel?",
		"You wanna fight with me?! Put 'em up!.. Put 'em up?",
		"A million baddies, and you wanna hit me? Aww!"
	};
	rand();
	std::cout << std::endl;
	std::cout << "*** New Challenge ***" << std::endl;
	std::cout << YEL << name_ << ORG << " : ";
	std::cout << quote_pool[rand() % 7] << std::endl;
	std::cout << MAG << "SC4V-TP " << YEL << name_ << ORG << " ";
   	std::cout << "[" << BLU << hp_ << ORG << "]";
   	std::cout << "[" << GRN << mp_ << ORG << "]";
	std::cout << " Challenge to " << YEL << target << ORG << std::endl;
	mp_ -= 25;
}
