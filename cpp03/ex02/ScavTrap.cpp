/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 19:15:27 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/26 19:54:33 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
	:	ClapTrap()
{
	type_ = "SC4V-TP";
	melee_quote = SC4V_MELEE_QUOTE;
	ranged_quote = SC4V_RANGED_QUOTE;
	damage_quote = SC4V_DAMAGE_QUOTE;
	repair_quote = SC4V_REPAIR_QUOTE;
	melee_ad_ = 20;
	ranged_ad_ = 15;
	armor_ = 3;
	std::cout << "ScavTrap Default Constructor Called!" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
	:	ClapTrap(name)
{
	type_ = "SC4V-TP";
	melee_quote = SC4V_MELEE_QUOTE;
	ranged_quote = SC4V_RANGED_QUOTE;
	damage_quote = SC4V_DAMAGE_QUOTE;
	repair_quote = SC4V_REPAIR_QUOTE;
	melee_ad_ = 20;
	ranged_ad_ = 15;
	armor_ = 3;
	std::cout << "ScavTrap Constructor Called!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& ref)
	:	ClapTrap(ref.name_)
{
	melee_quote = ref.melee_quote;
	ranged_quote = ref.ranged_quote;
	damage_quote = ref.damage_quote;
	repair_quote = ref.repair_quote;
	melee_ad_ = ref.melee_ad_;
	ranged_ad_ = ref.ranged_ad_;
	armor_ = ref.armor_;
	type_ = ref.type_;
	std::cout << "ScavTrap Copy Constructor Called!" << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& ref)
{
	melee_quote = ref.melee_quote;
	ranged_quote = ref.ranged_quote;
	damage_quote = ref.damage_quote;
	repair_quote = ref.repair_quote;
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
	std::cout << "ScavTrap Assign Operator Called!" << std::endl;
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor Called!" << std::endl;
}

void	ScavTrap::challengeNewcomer(const std::string& target)
{	
	if (mp_ < 25)
	{
		std::cout << std::endl;
		std::cout << MAG << type_ << " " << YEL << name_ << ORG << " ";
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
	std::cout << std::endl;
	std::cout << "*** New Challenge ***" << std::endl;
	std::cout << YEL << name_ << ORG << " : ";
	std::cout << quote_pool[rand() % 7] << std::endl;
	std::cout << MAG << type_ << " " << YEL << name_ << ORG << " ";
   	std::cout << "[" << BLU << hp_ << ORG << "]";
   	std::cout << "[" << GRN << mp_ << ORG << "]";
	std::cout << " Challenge to " << YEL << target << ORG << std::endl;
	mp_ -= 25;
}
