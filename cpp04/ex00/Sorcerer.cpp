/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 17:30:05 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/27 19:39:12 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title)
	:	name_(name),
		title_(title)
{
	print_born();
}

Sorcerer::Sorcerer(const Sorcerer& ref)
	:	name_(ref.name_),
		title_(ref.title_)
{
	print_born();
}

Sorcerer&	Sorcerer::operator=(const Sorcerer& ref)
{
	name_ = ref.name_;
	title_ = ref.title_;
	std::cout << "Sorcerer Changed!"
			  << std::endl;
	return *this;
}

Sorcerer::~Sorcerer()
{
	std::cout << name_
			  << ", "
			  << title_
			  << ", "
			  << "is dead. Consequences will never be the same!"
			  << std::endl;
}

void	Sorcerer::print_born() const
{
	std::cout << name_
			  << ", "
			  << title_
			  << ", is born!"
			  << std::endl;
}

std::string	Sorcerer::getName() const
{
	return name_;
}

std::string	Sorcerer::getTitle() const
{
	return title_;
}

void	Sorcerer::polymorph(Victim const &ref) const
{
	ref.getPolymorphed();
}

std::ostream&	operator<<(std::ostream& os, const Sorcerer& ref)
{
	os << "I am "
	   << ref.getName()
	   << ", "
	   << ref.getTitle()
	   << ", "
	   << "and I like ponies!"
	   << std::endl;
	return os;
}
