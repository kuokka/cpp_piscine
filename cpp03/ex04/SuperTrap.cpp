/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 21:01:03 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/26 21:45:48 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "SuperTrap.hpp"

SuperTrap::SuperTrap()
	:	ClapTrap(),
		NinjaTrap(),
		FragTrap()
{
	type_ = "Super-TP";
	hp_ = 100;
	max_hp_ = 100;
	mp_ = 120;
	max_mp_ = 120;
	melee_ad_ = 60;
	ranged_ad_ = 20;
	armor_ = 5;
    melee_quote = NINJA_MELEE_QUOTE;
    ranged_quote = FR4G_RANGED_QUOTE;
	std::cout << "SuperTrap Default Constructor" << std::endl;
}

SuperTrap::SuperTrap(std::string name)
	:	ClapTrap(name),
		NinjaTrap(name),
		FragTrap(name)
{
	type_ = "Super-TP";
	hp_ = 100;
	max_hp_ = 100;
	mp_ = 120;
	max_mp_ = 120;
	melee_ad_ = 60;
	ranged_ad_ = 20;
	armor_ = 5;
    melee_quote = NINJA_MELEE_QUOTE;
    ranged_quote = FR4G_RANGED_QUOTE;
	std::cout << "SuperTrap Constructor" << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap& ref)
	:	ClapTrap(ref.name_),
		NinjaTrap(ref.name_),
		FragTrap(ref.name_)
{
	type_ = ref.type_;
    hp_ = ref.hp_;
    max_hp_ = ref.max_hp_;
    mp_ = ref.mp_;
    max_mp_ = ref.max_mp_;
    melee_ad_ = ref.melee_ad_;
    ranged_ad_ = ref.ranged_ad_;
	skill_ad_ = ref.getSkillAD();
    armor_ = ref.armor_;
    melee_quote = ref.melee_quote;
    ranged_quote = ref.ranged_quote;
    damage_quote = ref.damage_quote;
    repair_quote = ref.repair_quote;
	std::cout << "SuperTrap Copy Constructor" << std::endl;
}

SuperTrap&	SuperTrap::operator=(const SuperTrap& ref)
{
    type_ = ref.type_;
	name_ = ref.name_;
    hp_ = ref.hp_;
    max_hp_ = ref.max_hp_;
    mp_ = ref.mp_;
    max_mp_ = ref.max_mp_;
    melee_ad_ = ref.melee_ad_;
    ranged_ad_ = ref.ranged_ad_;
	skill_ad_ = ref.getSkillAD();
    armor_ = ref.armor_;
    melee_quote = ref.melee_quote;
    ranged_quote = ref.ranged_quote;
    damage_quote = ref.damage_quote;
    repair_quote = ref.repair_quote;
	std::cout << "SuperTrap Assign Operator" << std::endl;
	return *this;
}

SuperTrap::~SuperTrap()
{
	std::cout << "SuperTrap Destructor Called" << std::endl;
}
