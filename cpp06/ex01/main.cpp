/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 20:14:53 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/31 20:52:34 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <cstdlib>
#include "Data.hpp"

int		main()
{

	void*	data;
	Data*	real1;
	Data*	real2;

	srand(time(NULL));
	data = serialize();
	real1 = reinterpret_cast<Data*>(data);
	std::cout << sizeof(Data) << std::endl;
	std::cout << *real1;
	real2 = deserialize(data);
	std::cout << *real2;
	delete real1;
	delete real2;
	return (0);
}
