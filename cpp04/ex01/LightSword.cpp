/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LightSword.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 20:46:16 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/28 20:53:45 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "LightSword.hpp"

LightSword::LightSword()
	:	AWeapon("Light Sword", 20, 80)
{
}

LightSword::LightSword(const LightSword& ref)
	:	AWeapon(ref.name_, ref.apcost_, ref.damage_)
{
}

LightSword&	LightSword::operator=(const LightSword& ref)
{
	name_ = ref.name_;
	apcost_ = ref.apcost_;
	damage_ = ref.damage_;
	return *this;
}

LightSword::~LightSword()
{
}

void	LightSword::attack() const
{
	std::cout << "* Zwwwang Zwwwang *" << std::endl;
}
