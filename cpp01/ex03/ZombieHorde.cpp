/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 14:07:02 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/19 23:06:38 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "ZombieHorde.hpp"

const std::string ZombieHorde::name_pool[8] = {
	"john",
	"james",
	"duke",
	"jane",
	"lisa",
	"jisu",
	"rose",
	"jenny"
};

ZombieHorde::ZombieHorde(int n)
{
	if (n < 0)
		n = 1;
	horde_size_ = n;
	horde_ = new Zombie[horde_size_];

	for (int i = 0; i < horde_size_; ++i)
	{
		horde_[i].set_name(name_pool[rand() % 8]);
		horde_[i].set_type("horde");
	}
}

ZombieHorde::~ZombieHorde()
{
	delete[] horde_;
}

void	ZombieHorde::announce() const
{
	for (int i = 0; i < horde_size_; ++i)
		horde_[i].announce();
}
