/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 17:02:42 by seunghoh          #+#    #+#             */
/*   Updated: 2021/04/09 17:53:04 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <random>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

const std::string ZombieEvent::name_pool[8] = {
	"john",
	"james",
	"duke",
	"jane",
	"lisa",
	"jisu",
	"rose",
	"jenny"
};

ZombieEvent::ZombieEvent()
	: type_("normal") {}

void	ZombieEvent::setZombieType(std::string type)
{
	type_ = type;
}

Zombie*	ZombieEvent::newZombie(std::string name) const
{
	Zombie*	zombie = new Zombie(name, type_);
	return (zombie);
}

Zombie*	ZombieEvent::randomChump() const
{
	Zombie*	zombie;
	
	std::random_device seed;
	std::mt19937 generator(seed());
	std::uniform_int_distribution<int> selector(0, 7);
	
	zombie = new Zombie(name_pool[selector(generator)], type_);
	zombie->announce();
	return (zombie);
}
