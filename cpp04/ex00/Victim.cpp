/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 19:16:53 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/27 19:34:37 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Victim.hpp"

void	Victim::print_born() const
{
	std::cout << "Some random victim called "
			  << name_
			  << " just appeared!"
			  << std::endl;
}

Victim::Victim(std::string name)
	:	name_(name)
{
	print_born();
}

Victim::Victim(const Victim& ref)
	:	name_(ref.name_)
{
	print_born();
}

Victim&	Victim::operator=(const	Victim& ref)
{
	name_ = ref.name_;
	std::cout << "Victim Changed!"
			  << std::endl;
	
	return *this;
}

Victim::~Victim()
{
	std::cout << "Victim "
			  << name_
			  << " just died for no apparent reason!"
			  << std::endl;
}

std::string	Victim::getName() const
{
	return name_;
}

std::ostream&	operator<<(std::ostream& os, const Victim& ref)
{
	os << "I'm "
	   << ref.getName()
	   << " and I like otters!"
	   << std::endl;
	return os;
}

void	Victim::getPolymorphed() const
{
	std::cout << name_
			  << " has been turned into a cute little shepp!"
			  << std::endl;
}
