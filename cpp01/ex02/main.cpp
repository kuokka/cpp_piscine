/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 16:42:53 by seunghoh          #+#    #+#             */
/*   Updated: 2021/04/09 17:43:18 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int		main()
{
	Zombie* z[100];
	ZombieEvent	event;

	z[0] = event.newZombie("seunghoh");
	z[0]->announce();
	z[1] = event.randomChump();
	z[2] = event.randomChump();
	z[3] = event.randomChump();
	z[4] = event.randomChump();
	z[5] = event.randomChump();
	return (0);
}
