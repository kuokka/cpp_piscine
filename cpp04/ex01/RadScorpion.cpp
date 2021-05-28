/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 18:09:31 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/28 19:02:27 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "RadScorpion.hpp"

RadScorpion::RadScorpion()
	:	Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion& ref)
	:	Enemy(ref.hp_, ref.type_)
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion&	RadScorpion::operator=(const RadScorpion& ref)
{
	hp_ = ref.hp_;
	type_ = ref.type_;
	return *this;
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

void	RadScorpion::takeDamage(int damage)
{
	Enemy::takeDamage(damage);
}
