/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 20:10:18 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/26 20:52:49 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap()
	:	ClapTrap()
{
	type_ = "NINJA-TP";
	hp_ = 60;
	max_hp_ = 60;
	mp_ = 120;
   	max_mp_ = 120;
	melee_ad_ = 60;
	ranged_ad_ = 5;
	armor_ = 0;
	melee_quote = NINJA_MELEE_QUOTE;
	ranged_quote = NINJA_RANGED_QUOTE;
	damage_quote = NINJA_DAMAGE_QUOTE;
	repair_quote = NINJA_REPAIR_QUOTE;

	std::cout << "NinjaTrap Default constructor Called!" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name)
	:	ClapTrap(name)
{
	type_ = "NINJA-TP";
	hp_ = 60;
	max_hp_ = 60;
	mp_ = 120;
   	max_mp_ = 120;
	melee_ad_ = 60;
	ranged_ad_ = 5;
	armor_ = 0;
	melee_quote = NINJA_MELEE_QUOTE;
	ranged_quote = NINJA_RANGED_QUOTE;
	damage_quote = NINJA_DAMAGE_QUOTE;
	repair_quote = NINJA_REPAIR_QUOTE;
	std::cout << "NinjaTrap Constructor Called!" << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap& ref)
	:	ClapTrap(ref.name_)
{
	type_ = ref.type_;
	hp_ = ref.hp_;
	max_hp_ = ref.max_hp_;
	mp_ = ref.mp_;
   	max_mp_ = ref.max_mp_;
	melee_ad_ = ref.melee_ad_;
	ranged_ad_ = ref.ranged_ad_;
	armor_ = ref.armor_;
	melee_quote = ref.melee_quote;
	ranged_quote = ref.ranged_quote;
	damage_quote = ref.damage_quote;
	repair_quote = ref.repair_quote;
	std::cout << "NinjaTrap Copy Constructor Called!" << std::endl;
}

NinjaTrap&	NinjaTrap::operator=(const NinjaTrap& ref)
{
	type_ = ref.type_;
	name_ = ref.name_;
	hp_ = ref.hp_;
	max_hp_ = ref.max_hp_;
	mp_ = ref.mp_;
   	max_mp_ = ref.max_mp_;
	melee_ad_ = ref.melee_ad_;
	ranged_ad_ = ref.ranged_ad_;
	armor_ = ref.armor_;
	melee_quote = ref.melee_quote;
	ranged_quote = ref.ranged_quote;
	damage_quote = ref.damage_quote;
	repair_quote = ref.repair_quote;
	std::cout << "NinjaTrap Assign Operator Called!" << std::endl;
	return *this;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "NinjaTrap Destructor!" << std::endl;
}

void	NinjaTrap::ninjaShoebox(const std::string quote)
{
	std::cout << YEL << name_ << ORG << " : " << quote << std::endl;
}

void	NinjaTrap::ninjaShoebox(const ClapTrap& ref)
{
	if (mp_ < 25)
	{
		std::cout << YEL << name_ << ORG << " : " << "Not enough mp" << std::endl;
		return ;
	}
	mp_ -= 25;
	std::cout << std::endl << "*** Catch Clap Trap";
	std::cout << YEL << "[" << ref.getName() << "] " << ORG << "***" << std::endl;
	ninjaShoebox("I am Fire, I am Death!");
}

void	NinjaTrap::ninjaShoebox(const FragTrap& ref)
{
	if (mp_ < 25)
	{
		std::cout << YEL << name_ << ORG << " : " << "Not enough mp" << std::endl;
		return ;
	}
	mp_ -= 25;
	std::cout << std::endl << "*** Catch Frag Trap";
	std::cout << YEL << "[" << ref.getName() << "] " << ORG << "***" << std::endl;
	ninjaShoebox("Burn, baby, burn!");
}

void	NinjaTrap::ninjaShoebox(const ScavTrap& ref)
{
	if (mp_ < 25)
	{
		std::cout << YEL << name_ << ORG << " : " << "Not enough mp" << std::endl;
		return ;
	}
	mp_ -= 25;
	std::cout << std::endl << "*** Catch Scav Trap";
	std::cout << YEL << "[" << ref.getName() << "] " << ORG << "***" << std::endl;
	ninjaShoebox("Remember, use caution near an open flame!");
}

void	NinjaTrap::ninjaShoebox(const NinjaTrap& ref)
{
	if (mp_ < 25)
	{
		std::cout << YEL << name_ << ORG << " : " << "Not enough mp" << std::endl;
		return ;
	}
	mp_ -= 25;
	std::cout << std::endl << "*** Catch Ninja Trap";
	std::cout << YEL << "[" << ref.getName() << "] " << ORG << "***" << std::endl;
	ninjaShoebox("Sizzlin'!");
}
