/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 02:45:04 by seunghoh          #+#    #+#             */
/*   Updated: 2021/06/01 03:55:27 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Converter.hpp"

Converter::Converter(std::string literal)
	:	literal_(literal),
		unit_literal_(0),
		is_number_(true)
{
	if (literal_.length() == 3 &&
		literal_[0] == '\'' &&
		literal_[2] == '\'')
	{
		is_number_ = false;
		unit_literal_ = static_cast<char>(literal_[1]);
	}
}

Converter::Converter(const Converter& ref)
	:	literal_(ref.literal_),
		unit_literal_(ref.unit_literal_),
		is_number_(ref.is_number_)
{}

Converter&	Converter::operator=(const Converter& ref)
{
	literal_ = ref.literal_;
	unit_literal_ = ref.unit_literal_;
	is_number_ = ref.is_number_;
	return *this;
}

Converter::~Converter()
{}

void	Converter::toChar()
{
	std::cout << "char : ";
	if (is_number_)
	{
		try
		{
			unit_literal_ = static_cast<char>(std::stoi(literal_));
		}
		catch (std::exception &e)
		{
			std::cout << "impossible" << std::endl;
			return ;
		}
	}
	if (unit_literal_ >= 32 &&
		unit_literal_ <= 127)
		std::cout << "'" << unit_literal_ << "'";
	else
		std::cout << "Non displayable";
	std::cout << std::endl;
}

void	Converter::toInt()
{
	std::cout << "Int : ";
	if (is_number_)
	{

	}
	else
	{

	}
	std::cout << std::endl;
}

void	Converter::toFloat()
{
	std::cout << "Float : ";
	std::cout << std::endl;
}

void	Converter::toDouble()
{
	std::cout << "Double : ";
	std::cout << std::endl;
}
