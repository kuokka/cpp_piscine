/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dragon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 20:56:59 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/28 21:01:45 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dragon.hpp"

Dragon::Dragon()
	:	Enemy(100, "Death Wing")
{
	std::cout << "All life ends in death!" << std::endl;
}

Dragon::Dragon(const Dragon& ref)
	:	Enemy(ref.hp_, ref.type_)
{
	std::cout << "All life ends in death!" << std::endl;
}

Dragon&	Dragon::operator=(const Dragon& ref)
{
	hp_ = ref.hp_;
	type_ = ref.type_;
	return *this;
}

Dragon::~Dragon()
{
	std::cout << "I will not be denied!" << std::endl;
}

void	Dragon::takeDamage(int damage)
{
	damage -= 10;
	Enemy::takeDamage(damage);
}
