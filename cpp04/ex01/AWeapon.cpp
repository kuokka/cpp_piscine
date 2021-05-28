/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 15:33:44 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/28 19:04:56 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(const std::string &name, int apcost, int damage)
	:	name_(name),
		apcost_(apcost),
		damage_(damage)
{
}

AWeapon::AWeapon(const AWeapon& ref)
	:	name_(ref.name_),
		apcost_(ref.apcost_),
		damage_(ref.damage_)
{
}

AWeapon&	AWeapon::operator=(const AWeapon& ref)
{
	name_ = ref.name_;
	apcost_ = ref.apcost_;
	damage_ = ref.damage_;
	return *this;
}

AWeapon::~AWeapon()
{
}

std::string	AWeapon::getName() const
{
	return name_;
}

int	AWeapon::getAPCost() const
{
	return apcost_;
}

int	AWeapon::getDamage() const
{
	return damage_;
}
