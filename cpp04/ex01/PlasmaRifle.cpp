/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 16:55:21 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/28 19:02:05 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle()
	:	AWeapon("Plasma Rifle", 5, 21)
{
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle& ref)
	:	AWeapon(ref.name_, ref.apcost_, ref.damage_)
{
}

PlasmaRifle&	PlasmaRifle::operator=(const PlasmaRifle& ref)
{
	name_ = ref.name_;
	apcost_ = ref.apcost_;
	damage_ = ref.damage_;
	return *this;
}

PlasmaRifle::~PlasmaRifle()
{
}

void	PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
