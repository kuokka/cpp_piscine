/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Troll.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 20:38:18 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/28 20:41:24 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Troll.hpp"

Troll::Troll(std::string name)
	:	Victim(name)
{
	std::cout << "Hump Dump"
			  << std::endl;
}

Troll::Troll(const Troll& ref)
	:	Victim(ref.name_)
{
	std::cout << "Hump Dump"
			  << std::endl;
}

Troll&	Troll::operator=(const Troll& ref)
{
	name_ = ref.name_;
	std::cout << "Troll Changed!"
			  << std::endl;
	return *this;
}

Troll::~Troll()
{
	std::cout << "Gueeeekekek" << std::endl;
}

void	Troll::getPolymorphed() const
{
	std::cout << getName()
			  << " has been turned into a sheeps!"
			  << std::endl;
}
