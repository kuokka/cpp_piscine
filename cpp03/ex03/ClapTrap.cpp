/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 18:35:15 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/26 19:25:50 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
	:	melee_quote(CL4P_MELEE_QUOTE),
		ranged_quote(CL4P_RANGED_QUOTE),
		damage_quote(CL4P_DAMAGE_QUOTE),
		repair_quote(CL4P_REPAIR_QUOTE),
		type_("CL4P-TP"),
		hp_(100),
		max_hp_(100),
		mp_(100),
		max_mp_(100),
		level_(1),
		name_("Unknown"),
		melee_ad_(20),
		ranged_ad_(10),
		armor_(1)
{
	std::cout << "ClapTrap Default Constructor" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
	:	melee_quote(CL4P_MELEE_QUOTE),
		ranged_quote(CL4P_RANGED_QUOTE),
		damage_quote(CL4P_DAMAGE_QUOTE),
		repair_quote(CL4P_REPAIR_QUOTE),
		type_("CL4P-TP"),
		hp_(100),
		max_hp_(100),
		mp_(100),
		max_mp_(100),
		level_(1),
		name_(name),
		melee_ad_(20),
		ranged_ad_(10),
		armor_(1)
{
	std::cout << "ClapTrap Constructor" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& ref)
	:	melee_quote(CL4P_MELEE_QUOTE),
		ranged_quote(CL4P_RANGED_QUOTE),
		damage_quote(CL4P_DAMAGE_QUOTE),
		repair_quote(CL4P_REPAIR_QUOTE),
		type_(ref.type_),
		hp_(ref.hp_),
		max_hp_(ref.max_hp_),
		mp_(ref.mp_),
		max_mp_(ref.max_mp_),
		level_(ref.level_),
		name_(ref.name_),
		melee_ad_(ref.melee_ad_),
		ranged_ad_(ref.ranged_ad_),
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
	melee_quote = CL4P_MELEE_QUOTE;
	ranged_quote = CL4P_RANGED_QUOTE;
	damage_quote = CL4P_DAMAGE_QUOTE;
	repair_quote = CL4P_REPAIR_QUOTE;
	type_ = ref.type_;
	hp_ = ref.hp_;
	max_hp_ = ref.max_hp_;
	mp_ = ref.mp_;
	max_mp_ = ref.max_mp_;
	level_ = ref.level_;
	name_ = ref.name_;
	melee_ad_ = ref.melee_ad_;
	ranged_ad_ = ref.ranged_ad_;
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

void	ClapTrap::rangedAttack(std::string const &target) const
{
    std::cout << std::endl;
    std::cout << "*** Ranged Attack [damage : " << BLU << ranged_ad_ << ORG << "] ***" <<std::endl;
    std::cout << YEL << name_ << ORG << " : " << ranged_quote << std::endl;
    std::cout << RED << type_ << " " << YEL << name_ << ORG << " ";
    std::cout << "[" << BLU << hp_ << ORG << "]";
    std::cout << "[" << GRN << mp_ << ORG << "]";
    std::cout << " attacks " << YEL << target << ORG << std::endl;
}

void	ClapTrap::meleeAttack(std::string const &target) const
{
    std::cout << std::endl;
    std::cout << "*** Melee Attack [damage : " << BLU << melee_ad_ << ORG << "] ***" <<std::endl;
    std::cout << YEL << name_ << ORG << " : " << melee_quote << std::endl;
    std::cout << RED << type_ << " " << YEL << name_ << ORG << " ";
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
    std::cout << YEL << name_ << ORG << " : " << damage_quote << std::endl;
    std::cout << RED << type_ << YEL << " " << name_ << ORG << " ";
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
    std::cout << YEL << name_ << ORG << " : " << repair_quote << std::endl;
    std::cout << RED << type_ << YEL << " " << name_ << ORG << " ";
    std::cout << "[" << BLU << hp_ << ORG << "]";
    std::cout << "[" << GRN << mp_ << ORG << "]";
    std::cout << std::endl;
}
