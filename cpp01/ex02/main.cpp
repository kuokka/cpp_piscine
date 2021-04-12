/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 16:42:53 by seunghoh          #+#    #+#             */
/*   Updated: 2021/04/12 13:52:20 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int		main()
{
	Zombie* z[4];
	ZombieEvent	event;

	z[0] = new Zombie("trump", "crazy");
	z[0]->announce();
	z[1] = event.newZombie("seunghoh");
	z[1]->announce();
	event.setZombieType("corona");
	z[2] = event.newZombie("ping");
	z[2]->announce();
	z[3] = event.randomChump();
	delete z[0];
	delete z[1];
	delete z[2];
	delete z[3];
	return (0);
}
