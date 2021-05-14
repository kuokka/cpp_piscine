/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 18:35:15 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/14 19:39:13 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
	:	type_("CL4P-TP"),
		hp_(100),
		max_hp_(100),
		mp_(100),
		max_mp_(100),
		level_(1),
		name_("Unknown"),
		melee_ad_(1),
		ranged_ad_(1),
		skill_ad_(1),
		armor_(1)
{
	std::cout << "ClapTrap Default Constructor" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
	:	type_("CL4P-TP"),
		hp_(100),
		max_hp_(100),
		mp_(100),
		max_mp_(100),
		level_(1),
		name_(name),
		melee_ad_(1),
		ranged_ad_(1),
		skill_ad_(1),
		armor_(1)
{
	std::cout << "ClapTrap Constructor" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& ref)
	:	type_(ref.type_),
		hp_(ref.hp_),
		max_hp_(ref.max_hp_),
		mp_(ref.mp_),
		max_mp_(ref.max_mp_),
		level_(ref.level_),
		name_(ref.name_),
		melee_ad_(ref.melee_ad_),
		ranged_ad_(ref.ranged_ad_),
		skill_ad_(ref.skill_ad_),
		armor_(ref.armor_)
{
	std::cout << "ClapTrap Copy Constructor" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor" << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& ref)
{
	std::cout << "ClapTrap Assign Operation" << std::endl;
	type_ = ref.type_;
	hp_ = ref.hp_;
	max_hp_ = ref.max_hp_;
	mp_ = ref.mp_;
	max_mp_ = ref.max_mp_;
	level_ = ref.level_;
	name_ = ref.name_;
	melee_ad_ = ref.melee_ad_;
	ranged_ad_ = ref.ranged_ad_;
	skill_ad_ = ref.skill_ad_;
	armor_ = ref.armor_;
	return *this;
}

std::string	ClapTrap::getName() const
{
	return name_;
}

uint	ClapTrap::getRangedAD() const
{
	return ranged_ad_;
}

uint	ClapTrap::getMeleeAD() const
{
	return melee_ad_;
}

uint	ClapTrap::getSkillAD() const
{
	return skill_ad_;
}

void	ClapTrap::rangedAttack(std::string const &target) const
{
    std::cout << std::endl;
    std::cout << "*** Ranged Attack [damage : " << BLU << ranged_ad_ << ORG << "] ***" <<std::endl;
    std::cout << YEL << name_ << ORG << " : Chk-chk, BOOM!" << std::endl;
    std::cout << RED << ClapTrap::type_ << " " << YEL << name_ << ORG << " ";
    std::cout << "[" << BLU << hp_ << ORG << "]";
    std::cout << "[" << GRN << mp_ << ORG << "]";
    std::cout << " attacks " << YEL << target << ORG << std::endl;
}

void	ClapTrap::meleeAttack(std::string const &target) const
{
    std::cout << std::endl;
    std::cout << "*** Ranged Attack [damage : " << BLU << ranged_ad_ << ORG << "] ***" <<std::endl;
    std::cout << YEL << name_ << ORG << " : Chk-chk, BOOM!" << std::endl;
    std::cout << RED << ClapTrap::type_ << " " << YEL << name_ << ORG << " ";
    std::cout << "[" << BLU << hp_ << ORG << "]";
    std::cout << "[" << GRN << mp_ << ORG << "]";
    std::cout << " attacks " << YEL << target << ORG << std::endl;
}

void	ClapTrap::takeDamage(uint amount)
{
    if (amount > armor_)
        amount -= armor_;
    else
        amount = 0;
    std::cout << std::endl;
    std::cout << "*** Take Damage [damage : " << BLU << amount << ORG << "] ***" <<std::endl;
    std::cout << YEL << name_ << ORG << " : Why do I even feel pain?" << std::endl;
    std::cout << RED << "FR4G-TP " << YEL << name_ << ORG << " ";
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

void	ClapTrap::beRepaired(uint amount)
{
    hp_ += amount;
    mp_ += amount;
    if (hp_ > 100)
        hp_ = 100;
    if (mp_ > 100)
        mp_ = 100;
    std::cout << std::endl;
    std::cout << "*** Repair [amount : " << BLU << amount << ORG << "] ***" <<std::endl;
    std::cout << YEL << name_ << ORG << " : I found health!" << std::endl;
    std::cout << RED << "FR4G-TP " << YEL << name_ << ORG << " ";
    std::cout << "[" << BLU << hp_ << ORG << "]";
    std::cout << "[" << GRN << mp_ << ORG << "]";
    std::cout << std::endl;
}
