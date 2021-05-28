/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 17:08:09 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/28 19:04:48 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, const std::string& type)
	:	hp_(hp),
		type_(type)
{
}

Enemy::Enemy(const Enemy& ref)
	:	hp_(ref.hp_),
		type_(ref.type_)
{
}

Enemy&	Enemy::operator=(const Enemy& ref)
{
	hp_ = ref.hp_;
	return *this;
}

Enemy::~Enemy()
{
}

int	Enemy::getHP() const
{
	return hp_;
}

std::string	Enemy::getType() const
{
	return type_;
}

void	Enemy::takeDamage(int damage)
{
	if (damage < 0 && hp_ == 0)
		return ;
	hp_ -= damage;
	if (hp_ < 0)
		hp_ = 0;
}
