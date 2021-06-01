/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 20:02:51 by seunghoh          #+#    #+#             */
/*   Updated: 2021/06/01 19:52:42 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "Data.hpp"

Data::Data(char* s1, int n, char* s2)
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
{
}

char*	Data::getS1() const
{
	return s1_;
}

char*	Data::getS2() const
{
	return s2_;
}

int	Data::getN() const
{
	return n_;
}

std::ostream&	operator<<(std::ostream& os, const Data& ref)
{
	os << "s1 : " << ref.getS1() << std::endl
	   << "s2 : " << ref.getS2() << std::endl
	   << "n  : " << ref.getN() << std::endl;
	return os;
}

void*	serialize(void)
{
	char*		data;
	char*		s1;
	char*		s2;
	int			n;

	std::cout << "*** Serializing !! ***" << std::endl;
	data = new char[2 * sizeof(char *) + sizeof(int)];
	s1 = new char[10];
	s2 = new char[10];
	for (int i = 0; i < 9; ++i)
	{
		s1[i] = (rand() % 95) + 32;
		s2[i] = (rand() % 95) + 32;
	}
	s1[9] = '\0';
	s2[9] = '\0';
	n = rand();
	std::cout << "s1 : " << s1 << std::endl;
	std::cout << "s2 : " << s2 << std::endl;
	std::cout << "n  : " << n  << std::endl;
	std::cout << "*** End Serializing !! ***" << std::endl;
	*(reinterpret_cast<char**>(data)) = s1;
	*reinterpret_cast<int *>(data + sizeof(char *)) = n;
	*(reinterpret_cast<char**>(data + sizeof(char *) + sizeof(int))) = s2;
	return (reinterpret_cast<void*>(data));
}

Data*	deserialize(void* raw)
{
	char*	temp = reinterpret_cast<char*>(raw);
	char*	s1;
	char*	s2;
	int		n;

	s1 = *(reinterpret_cast<char**>(temp));
	n  = *reinterpret_cast<int*>(temp + sizeof(char*));
	s2 = *(reinterpret_cast<char**>(temp + sizeof(char *) + sizeof(int)));
	return new Data(s1, n, s2);
}
