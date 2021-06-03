/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 16:20:02 by seunghoh          #+#    #+#             */
/*   Updated: 2021/06/03 19:01:44 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "span.hpp"

int		main()
{
	Span		a(10);
	std::vector<int> temp(5, 10);
	a.addNumber(1);
	a.addNumber(1);
	a.addNumber(1);
	a.addNumber(1);
	a.addNumber(1);

	try
	{
		a.addRange(temp.begin(), temp.end());
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		a.addNumber(1);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
