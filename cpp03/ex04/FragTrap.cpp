/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 16:25:22 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/26 21:28:34 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ********a****************************************************************** */

#include <iostream>
#include <cstdlib>
#include "FragTrap.hpp"

FragTrap::FragTrap()
	:	ClapTrap(),
		skill_ad_(25)
{
	melee_quote = FR4G_MELEE_QUOTE;
	ranged_quote = FR4G_RANGED_QUOTE;
	damage_quote = FR4G_DAMAGE_QUOTE;
	repair_quote = FR4G_REPAIR_QUOTE;
	melee_ad_ = 30;
	ranged_ad_ = 20;
	armor_ = 5;
	type_ = "FR4G-TP";
	std::cout << "FragTrap Default Constructor" << std::endl;
}

FragTrap::FragTrap(std::string name)
	:	ClapTrap(name),
		skill_ad_(25)
{
	melee_quote = FR4G_MELEE_QUOTE;
	ranged_quote = FR4G_RANGED_QUOTE;
	damage_quote = FR4G_DAMAGE_QUOTE;
	repair_quote = FR4G_REPAIR_QUOTE;
	melee_ad_ = 30;
	ranged_ad_ = 20;
	armor_ = 5;
	type_ = "FR4G-TP";
	std::cout << "FragTrap Constructor" << std::endl;
}

FragTrap::FragTrap(const FragTrap& ref)
	:	ClapTrap(ref.name_),
		skill_ad_(25)
{
	melee_quote = ref.melee_quote;
	ranged_quote = ref.ranged_quote;
	damage_quote = ref.damage_quote;
	repair_quote = ref.repair_quote;
	melee_ad_ = ref.melee_ad_;
	ranged_ad_ = ref.ranged_ad_;
	armor_ = ref.armor_;
	type_ = ref.type_;
	std::cout << "Frag Trap Copy Constructor" << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& ref)
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
	skill_ad_ = ref.skill_ad_;
	armor_ = ref.armor_;
	std::cout << "Frag Trap Assign Operator Called !!" << std::endl;
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "Frag Trap Destructor Called !!" << std::endl;
}

uint	FragTrap::getSkillAD() const
{
	return skill_ad_;
}

void    FragTrap::laserAttack(std::string const &target) const
{
	std::cout << std::endl;
	std::cout << "*** Laser Attack [damage : " << BLU << skill_ad_ << ORG << "] ***" <<std::endl;
	std::cout << YEL << name_ << ORG << " : ";
	std::cout << "Everybody, dance time! Da-da-da-dun-daaa-da-da-da-dun-daaa!" << std::endl;
	std::cout << RED << type_ << " " << YEL << name_ << ORG << " ";
	std::cout << "[" << BLU << hp_ << ORG << "]";
	std::cout << "[" << GRN << mp_ << ORG << "]";
	std::cout << " attacks " << YEL << target << ORG << std::endl;

}

void    FragTrap::fiestaAttack(std::string const &target) const
{
	std::cout << std::endl;
	std::cout << "*** Fiesta Attack [damage : " << BLU << skill_ad_ << ORG << "] ***" <<std::endl;
	std::cout << YEL << name_ << ORG << " : One for you, one for you, one for you" << std::endl;
	std::cout << RED << type_ << " " << YEL << name_ << ORG << " ";
	std::cout << "[" << BLU << hp_ << ORG << "]";
	std::cout << "[" << GRN << mp_ << ORG << "]";
	std::cout << " attacks " << YEL << target << ORG << std::endl;
}

void    FragTrap::canonAttack(std::string const &target) const
{
	std::cout << std::endl;
	std::cout << "*** Canon Attack [damage : " << BLU << skill_ad_ << ORG << "] ***" <<std::endl;
	std::cout << YEL << name_ << ORG << " : Is this really canon?" << std::endl;
	std::cout << RED << type_ << " " << YEL << name_ << ORG << " ";
	std::cout << "[" << BLU << hp_ << ORG << "]";
	std::cout << "[" << GRN << mp_ << ORG << "]";
	std::cout << " attacks " << YEL << target << ORG << std::endl;

}

void    FragTrap::shotAttack(std::string const &target) const
{
	std::cout << std::endl;
	std::cout << "*** Shot Attack [damage : " << BLU << skill_ad_ << ORG << "] ***" <<std::endl;
	std::cout << YEL << name_ << ORG << " : Crack shot!" << std::endl;
	std::cout << RED << type_ << " " << YEL << name_ << ORG << " ";
	std::cout << "[" << BLU << hp_ << ORG << "]";
	std::cout << "[" << GRN << mp_ << ORG << "]";
	std::cout << " attacks " << YEL << target << ORG << std::endl;

}

void    FragTrap::magicAttack(std::string const &target) const
{
	std::cout << std::endl;
	std::cout << "*** Magic Attack [damage : " << BLU << skill_ad_ << ORG << "] ***" <<std::endl;
	std::cout << YEL << name_ << ORG << " : Uh, how do I cast magic missile?" << std::endl;
	std::cout << RED <<type_ << " " << YEL << name_ << ORG << " ";
	std::cout << "[" << BLU << hp_ << ORG << "]";
	std::cout << "[" << GRN << mp_ << ORG << "]";
	std::cout << " attacks " << YEL << target << ORG << std::endl;
}

void    FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	if (mp_ < 25)
	{
		std::cout << std::endl;
		std::cout << RED << type_ << " " << YEL << name_ << ORG << " ";
		std::cout << "[" << BLU << hp_ << ORG << "]";
		std::cout << "[" << GRN << mp_ << ORG << "]";
		std::cout << " : Not Enough Energy !" << std::endl;
		return ;
	}
	switch (rand() % 5)
	{
		case 0 :
			shotAttack(target);
			break ;
		case 1 :
			magicAttack(target);
			break ;
		case 2 : 
			canonAttack(target);
			break ;
		case 3 : 
			laserAttack(target);
			break ;
		default :
			fiestaAttack(target);
	}
	mp_ -= 25;
}
