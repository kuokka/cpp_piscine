/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 02:45:04 by seunghoh          #+#    #+#             */
/*   Updated: 2021/06/01 19:50:37 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <limits>
#include <cmath>
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
	std::cout << "char: ";
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
	std::cout << "int: ";
	if (is_number_)
	{
		try
		{
			std::cout << static_cast<int>(std::stoi(literal_)) << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "impossible" << std::endl;
		}
	}
	else
	{
		std::cout << static_cast<int>(unit_literal_) << std::endl;
	}
}

void	Converter::toFloat()
{
	float	data;

	std::cout << "float: ";
	if (is_number_)
	{
		try
		{
			data = static_cast<float>(std::stof(literal_));
		}
		catch (std::exception &e)
		{
			std::cout << "impossible" << std::endl;
			return ;
		}
	}
	else
	{
		data = static_cast<float>(unit_literal_);
	}
	std::cout << data;
	if (data == std::numeric_limits<float>::infinity() ||
		data == -std::numeric_limits<float>::infinity() ||
		std::isnan(data))
		std::cout << "f";
	else if (static_cast<float>(static_cast<int>(data)) == data)
		std::cout << ".0f";
	else
		std::cout << "f";
	std::cout << std::endl;
}

void	Converter::toDouble()
{
	double	data;

	std::cout << "double: ";
	if (is_number_)
	{
		try
		{
			data = static_cast<double>(std::stod(literal_));
		}
		catch (std::exception &e)
		{
			std::cout << "impossible" << std::endl;
		}
	}
	else
		data = static_cast<double>(unit_literal_);
	std::cout << data;
	if (static_cast<double>(static_cast<int>(data)) == data)
		std::cout << ".0";
	std::cout << std::endl;
}
