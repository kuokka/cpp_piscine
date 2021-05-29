/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 15:34:47 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/29 15:44:59 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cure.hpp"

Cure::Cure()
	:	AMateria("cure")
{
}

Cure::Cure(const Cure& ref)
	:	AMateria("cure")
{
	xp_ = ref.xp_;
}

Cure&	Cure::operator=(const Cure& ref)
{
	type_ = "cure";
	xp_ = ref.xp_;
	return	*this;
}

Cure::~Cure()
{
}

AMateria*	Cure::clone() const
{
	return new Cure(*this);
}

void	Cure::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* heals "
			  << target.getName()
			  << "'s wounds *"
			  << std::endl;
}
