/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 16:25:22 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/14 16:12:54 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ********a****************************************************************** */

#include <iostream>
#include <cstdlib>
#include "FragTrap.hpp"

FragTrap::FragTrap()
	:	hp_(100),
		max_hp_(100),
		mp_(100),
		max_mp_(100),
		level_(1),
		name_("Unknown"),
		melee_ad_(30),
		ranged_ad_(20),
		skill_ad_(25),
		armor_(5)
{
	std::cout << "FragTrap Default Constructor Called !!" << std::endl;
}

FragTrap::FragTrap(std::string name)
	:	hp_(100),
		max_hp_(100),
		mp_(100),
		max_mp_(100),
		level_(1),
		name_(name),
		melee_ad_(30),
		ranged_ad_(20),
		skill_ad_(25),
		armor_(5)
{
	std::cout << "FragTrap Constructor Called !!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& ref)
	:	hp_(ref.hp_),
		max_hp_(ref.max_hp_),
		mp_(ref.mp_),
		max_mp_(ref.max_mp_),
		level_(ref.level_),
		name_(ref.name_),
		melee_ad_(ref.melee_ad_),
		ranged_ad_(ref.ranged_ad_),
		skill_ad_(25),
		armor_(ref.armor_)
{
	std::cout << "Frag Trap Copy Constructor Called !!" << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& ref)
{
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

uint	FragTrap::getRangedAD() const
{
	return ranged_ad_;
}

uint	FragTrap::getMeleeAD() const
{
	return melee_ad_;
}

uint	FragTrap::getSkillAD() const
{
	return skill_ad_;
}

std::string	FragTrap::getName() const
{
	return name_;
}

void	FragTrap::rangedAttack(std::string const &target) const
{
	std::cout << std::endl;
	std::cout << "*** Ranged Attack [damage : " << BLU << ranged_ad_ << ORG << "] ***" <<std::endl;
	std::cout << YEL << name_ << ORG << " : Chk-chk, BOOM!" << std::endl;
	std::cout << RED << "FR4G-TP " << YEL << name_ << ORG << " ";
	std::cout << "[" << BLU << hp_ << ORG << "]";
	std::cout << "[" << GRN << mp_ << ORG << "]";
	std::cout << " attacks " << YEL << target << ORG << std::endl;
}

void	FragTrap::meleeAttack(std::string const &target) const
{
	std::cout << std::endl;
	std::cout << "*** Melee Attack [damage : " << BLU << melee_ad_ << ORG << "] ***" <<std::endl;
	std::cout << YEL << name_ << ORG << " : This is why you do your homework!" << std::endl;
	std::cout << RED << "FR4G-TP " << YEL << name_ << ORG << " ";
	std::cout << "[" << BLU << hp_ << ORG << "]";
	std::cout << "[" << GRN << mp_ << ORG << "]";
	std::cout << " attacks " << YEL << target << ORG << std::endl;
}

void	FragTrap::takeDamage(uint amount)
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

void	FragTrap::beRepaired(uint amount)
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

void    FragTrap::laserAttack(std::string const &target) const
{
	std::cout << std::endl;
	std::cout << "*** Laser Attack [damage : " << BLU << skill_ad_ << ORG << "] ***" <<std::endl;
	std::cout << YEL << name_ << ORG << " : ";
	std::cout << "Everybody, dance time! Da-da-da-dun-daaa-da-da-da-dun-daaa!" << std::endl;
	std::cout << RED << "FR4G-TP " << YEL << name_ << ORG << " ";
	std::cout << "[" << BLU << hp_ << ORG << "]";
	std::cout << "[" << GRN << mp_ << ORG << "]";
	std::cout << " attacks " << YEL << target << ORG << std::endl;

}

void    FragTrap::fiestaAttack(std::string const &target) const
{
	std::cout << std::endl;
	std::cout << "*** Fiesta Attack [damage : " << BLU << skill_ad_ << ORG << "] ***" <<std::endl;
	std::cout << YEL << name_ << ORG << " : One for you, one for you, one for you" << std::endl;
	std::cout << RED << "FR4G-TP " << YEL << name_ << ORG << " ";
	std::cout << "[" << BLU << hp_ << ORG << "]";
	std::cout << "[" << GRN << mp_ << ORG << "]";
	std::cout << " attacks " << YEL << target << ORG << std::endl;
}

void    FragTrap::canonAttack(std::string const &target) const
{
	std::cout << std::endl;
	std::cout << "*** Canon Attack [damage : " << BLU << skill_ad_ << ORG << "] ***" <<std::endl;
	std::cout << YEL << name_ << ORG << " : Is this really canon?" << std::endl;
	std::cout << RED << "FR4G-TP " << YEL << name_ << ORG << " ";
	std::cout << "[" << BLU << hp_ << ORG << "]";
	std::cout << "[" << GRN << mp_ << ORG << "]";
	std::cout << " attacks " << YEL << target << ORG << std::endl;

}

void    FragTrap::shotAttack(std::string const &target) const
{
	std::cout << std::endl;
	std::cout << "*** Shot Attack [damage : " << BLU << skill_ad_ << ORG << "] ***" <<std::endl;
	std::cout << YEL << name_ << ORG << " : Crack shot!" << std::endl;
	std::cout << RED << "FR4G-TP " << YEL << name_ << ORG << " ";
	std::cout << "[" << BLU << hp_ << ORG << "]";
	std::cout << "[" << GRN << mp_ << ORG << "]";
	std::cout << " attacks " << YEL << target << ORG << std::endl;

}

void    FragTrap::magicAttack(std::string const &target) const
{
	std::cout << std::endl;
	std::cout << "*** Magic Attack [damage : " << BLU << skill_ad_ << ORG << "] ***" <<std::endl;
	std::cout << YEL << name_ << ORG << " : Uh, how do I cast magic missile?" << std::endl;
	std::cout << RED << "FR4G-TP " << YEL << name_ << ORG << " ";
	std::cout << "[" << BLU << hp_ << ORG << "]";
	std::cout << "[" << GRN << mp_ << ORG << "]";
	std::cout << " attacks " << YEL << target << ORG << std::endl;
}

void    FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	if (mp_ < 25)
	{
		std::cout << std::endl;
		std::cout << RED << "FR4G-TP " << YEL << name_ << ORG << " ";
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
