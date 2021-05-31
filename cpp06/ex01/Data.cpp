/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 20:02:51 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/31 21:00:05 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "Data.hpp"

Data::Data(const std::string& s1, int n, const std::string& s2)
	:	s1_(s1),
		n_(n),
		s2_(s2)
{}

Data::Data(const Data& ref)
	:	s1_(ref.s1_),
		n_(ref.n_),
		s2_(ref.s2_)
{}

Data&	Data::operator=(const Data& ref)
{
	s1_ = ref.s1_;
	n_ = ref.n_;
	s2_ = ref.s2_;
	return *this;
}

Data::~Data()
{}

std::string	Data::getS1() const
{
	return s1_;
}

std::string	Data::getS2() const
{
	return s2_;
}

int	Data::getN() const
{
	return n_;
}

std::ostream&	operator<<(std::ostream& os, const Data& ref)
{
	os << "String1 : " << ref.getS1() << std::endl
	   << "String2 : " << ref.getS2() << std::endl
	   << "Integer : " << ref.getN() << std::endl;
	return os;
}

void*	serialize(void)
{
	std::string	s1;
	std::string	s2;
	int			n;
	Data*		data;

	s1.reserve(8);
	s2.reserve(8);
	for (int i = 0; i < 8; ++i)
	{
		s1 += (rand() % 95) + 32;
		s2 += (rand() % 95) + 32;
	}
	n = rand();
	data = new Data(s1, n, s2);
	return (reinterpret_cast<void*>(data));
}

Data*	deserialize(void* raw)
{
	unsigned char*	temp;
	std::string*	s1;
	std::string*	s2;
	int*			n;
	
	temp = reinterpret_cast<unsigned char*>(raw);
	s1 = reinterpret_cast<std::string*>(temp);
	n  = reinterpret_cast<int*>(temp + sizeof(std::string));
	s2 = reinterpret_cast<std::string*>(temp + sizeof(std::string) + 8);
	return new Data(*s1, *n, *s2);
}
