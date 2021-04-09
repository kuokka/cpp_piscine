/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 14:03:02 by seunghoh          #+#    #+#             */
/*   Updated: 2021/04/09 14:09:47 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	memoryLeak()
{
	std::string*	panther = new std::string("String Panther");
	std::cout << *panther << std::endl;
	#ifndef LEAK
	delete panther;
	#endif
}

int		main()
{
	memoryLeak();
	system("leaks a.out");
	return (0);
}
