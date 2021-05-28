/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 18:23:05 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/28 19:01:40 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(const std::string& name)
	:	name_(name),
		weapon_(NULL),
		ap_(40)
{
}

Character::Character(const Character& ref)
	:	name_(ref.name_),
		weapon_(ref.weapon_),
		ap_(ref.ap_)
{
}

Character&	Character::operator=(const Character& ref)
{
	name_ = ref.name_;
	weapon_ = ref.weapon_;
	ap_ = ref.ap_;
	return *this;
}

Character::~Character()
{
}

void	Character::recoverAP()
{
	ap_ += 10;
	if (ap_ > 40)
		ap_ = 40;
}

void	Character::equip(AWeapon* weapon)
{
	weapon_ = weapon;
}

void	Character::attack(Enemy* enemy)
{
	if (weapon_ == NULL || ap_ <= weapon_->getAPCost())
		return ;
	std::cout << name_
			  << " attacks "
			  << enemy->getType()
			  << " with a "
			  << weapon_->getName()
			  << std::endl;
	weapon_->attack();
	ap_ -= weapon_->getAPCost();
	enemy->takeDamage(weapon_->getDamage());
	if (enemy->getHP() <= 0)
		delete enemy;
}

std::string	Character::getName() const
{
	return name_;
}

AWeapon*	Character::getWeapon() const
{
	return weapon_;
}

int			Character::getAP() const
{
	return ap_;
}

std::ostream&   operator<<(std::ostream& os, const Character& ref)
{
    os << ref.getName()
       << " has "
       << ref.getAP()
       << " AP and ";
    if (ref.getWeapon() == NULL)
        os << "is unarmed";
    else
        os << "wields a " << ref.getWeapon()->getName();
   	os << std::endl;
    return os;
}
