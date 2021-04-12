/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 19:40:32 by seunghoh          #+#    #+#             */
/*   Updated: 2021/04/12 19:43:12 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name)
	: name_(name),
	  weapon_(NULL) {}

void	HumanB::setWeapon(Weapon& weapon)
{
	weapon_ = &weapon;
}

void	HumanB::attack() const
{
	if (weapon_ == NULL)
		return ;
	
	std::cout << name_ << " attacks with his " << weapon_->getType() << std::endl;
}
