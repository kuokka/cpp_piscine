/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 01:59:08 by seunghoh          #+#    #+#             */
/*   Updated: 2021/06/02 02:32:38 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int		main()
{
	Array<int>	arr1;
	Array<int>	arr2(5);
	Array<int> arr3 = arr2;

	arr1 = arr2;
	std::cout << arr1.size() << std::endl;
	std::cout << arr2.size() << std::endl;
	std::cout << arr3.size() << std::endl;
	for (uint i = 0; i < arr1.size(); ++i)
	{
		arr1[i] = i;
	}
	std::cout << arr1;
	try
	{
		std::cout << arr1[100] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
