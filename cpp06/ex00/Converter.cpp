/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 02:45:04 by seunghoh          #+#    #+#             */
/*   Updated: 2021/06/01 03:04:38 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Converter.hpp"

Converter::Converter(std::string literal)
	:	literal_(literal)
{}

Converter::Converter(const Converter& ref)
	:	literal_(ref.literal_)
{}

Converter&	Converter::operator=(const Converter& ref)
{
	literal_ = ref.literal_;
	return *this;
}

Converter::~Converter()
{}

void	Converter::toChar()
{
	try
	{
		std::cout << static_cast<char>(std::stof(literal_)) << std::endl;
	}
	catch (std::exception &e)
	{
		e.what();
	}
}

void	Converter::toInt()
{
	std::cout << "Int : " << std::endl;
}

void	Converter::toFloat()
{
	std::cout << "Float : " << std::endl;
}

void	Converter::toDouble()
{
	std::cout << "Double : " << std::endl;
}
