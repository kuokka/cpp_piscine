/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 20:14:53 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/31 22:25:04 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <cstdlib>
#include "Data.hpp"

int		main()
{

	void*	raw;
	Data*	data;

	srand(time(NULL));
	raw = serialize();
	data = deserialize(raw);
	std::cout << "*** Deserializing !! ***" << std::endl;
	std::cout << *data << std::endl;
	std::cout << "Size of Data Type : " << sizeof(Data) << std::endl;
	delete[] reinterpret_cast<char *>(raw);
	delete data->getS1();
	delete data->getS2();
	delete data;
	system("leaks serializer");
	return (0);
}
