/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 00:55:07 by seunghoh          #+#    #+#             */
/*   Updated: 2021/06/02 01:20:54 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int		main()
{
	char str[12] = "hello world";
	
	std::cout << "*** before apply ***" << std::endl;
	std::cout << str << std::endl;
	iter<char>(str, 11, add);
	std::cout << "*** after apply ***" << std::endl;
	std::cout << str << std::endl;

	std::cout << std::endl << std::endl;
	int		a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	std::cout << "*** before apply ***" << std::endl;
	iter<int>(a, 10, print);
	std::cout << std::endl;
	iter<int>(a, 10, add);
	std::cout << "*** after apply ***" << std::endl;
	iter<int>(a, 10, print);
	std::cout << std::endl;
	return (0);
}
