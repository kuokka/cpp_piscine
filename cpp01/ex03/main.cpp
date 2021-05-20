/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 14:55:16 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/20 13:20:44 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <cstdlib>
#include <iostream>
#include "ZombieHorde.hpp"

void	check_leak()
{
	ZombieHorde	horde1(5);
	ZombieHorde	horde2(6);

	std::cout << "Horde1 Announce" << std::endl;
	horde1.announce();

	std::cout << "---------------" << std::endl;

	std::cout << "Horde2 Announce" << std::endl;
	horde2.announce();
}

int		main()
{
	srand(time(NULL));
	check_leak();
	std::cout << std::endl << std::endl;
	//system("leaks a.out");
	return (0);
}
