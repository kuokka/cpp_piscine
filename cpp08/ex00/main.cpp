/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 01:34:31 by seunghoh          #+#    #+#             */
/*   Updated: 2021/06/03 15:41:46 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <iostream>
#include "easyfind.hpp"

int		main()
{
	std::vector<int>	a;

	a.push_back(1);
	a.push_back(2);
	a.push_back(3);
	a.push_back(4);
	try
	{
		std::cout << "Found! : " << easyfind(a, 2) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << "Found! : " << easyfind(a, -2) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
