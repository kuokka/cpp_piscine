/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 15:24:39 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/29 15:46:15 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Ice.hpp"

Ice::Ice()
	:	AMateria("ice")
{
}

Ice::Ice(const Ice& ref)
	:	AMateria("ice")
{
	xp_ = ref.xp_;
}

Ice&	Ice::operator=(const Ice& ref)
{
	xp_ = ref.xp_;
	return *this;
}

Ice::~Ice()
{
}

AMateria*	Ice::clone() const
{
	return new Ice(*this);
}

void	Ice::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at "
			  << target.getName()
			  << " *"
			  << std::endl;
}
