/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 13:54:58 by seunghoh          #+#    #+#             */
/*   Updated: 2021/04/09 14:00:57 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

void	ponyOnTheStack()
{
	Pony	pony("Stack Pony");
	std::cout << "Pony on Stack!!" << std::endl;
	pony.ShowName();
}

void	ponyOnTheHeap()
{
	Pony	*pony = new Pony("Heap Pony");
	std::cout << "Pony on Heap!!" << std::endl;
	pony->ShowName();
	delete pony;
}

int		main()
{
	ponyOnTheHeap();
	ponyOnTheStack();
	return (0);
}
