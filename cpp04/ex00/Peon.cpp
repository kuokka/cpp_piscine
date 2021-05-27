/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 19:42:24 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/27 19:49:55 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string name)
	:	Victim(name)
{
	std::cout << "Zog zog."
			  << std::endl;
}

Peon::Peon(const Peon& ref)
	:	Victim(ref.name_)
{
	std::cout << "Zog zog."
			  << std::endl;
}

Peon&	Peon::operator=(const Peon& ref)
{
	name_ = ref.name_;
	std::cout << "Peon Changed!"
			  << std::endl;
	return *this;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

void	Peon::getPolymorphed() const
{
	std::cout << getName()
			  << " has been turned into a pink pony!"
			  << std::endl;
}
