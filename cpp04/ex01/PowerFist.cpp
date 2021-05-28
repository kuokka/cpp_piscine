/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 16:25:11 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/28 19:02:54 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PowerFist.hpp"

PowerFist::PowerFist()
	:	AWeapon("Power Fist", 8, 50)
{
}

PowerFist::PowerFist(const PowerFist& ref)
	:	AWeapon(ref.name_, ref.apcost_, ref.damage_)
{
}

PowerFist&	PowerFist::operator=(const PowerFist& ref)
{
	name_ = ref.name_;
	apcost_ = ref.apcost_;
	damage_ = ref.damage_;
	return *this;
}

PowerFist::~PowerFist()
{
}

void	PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
