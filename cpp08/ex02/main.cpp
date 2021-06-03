/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 02:58:04 by seunghoh          #+#    #+#             */
/*   Updated: 2021/06/04 03:04:23 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "mutantstack.hpp"

void	subject_test()
{
	MutantStack<int>	s;

	s.push(5);
	s.push(17);

	std::cout << s.top() << std::endl;

	s.pop();
	std::cout << s.size() << std::endl;

	s.push(3);
	s.push(5);
	s.push(737);
	s.push(123);
	s.push(232);
	s.push(0);

	s.begin();
	std::stack<int> s2(s);
}

int		main()
{
	subject_test();
	return (0);
}
