/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 02:04:31 by seunghoh          #+#    #+#             */
/*   Updated: 2021/06/01 19:39:02 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Converter.hpp"

int		main(int argc, char **argv)
{
	std::string	literal;

	if (argc != 2)
	{
		std::cout << "Invalid Arguments" << std::endl;
		return (1);
	}
	literal = std::string(argv[1]);
	Converter	converter(literal);
	converter.toChar();
	converter.toInt();
	converter.toFloat();
	converter.toDouble();
	return (0);
}
