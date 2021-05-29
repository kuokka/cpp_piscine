/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 15:02:57 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/29 16:22:51 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "AMateria.hpp"

AMateria::AMateria(const std::string& type)
	:	type_(type),
		xp_(0)
{
}

AMateria::AMateria(const AMateria& ref)
	:	type_(ref.type_),
		xp_(ref.xp_)
{
}

AMateria&	AMateria::operator=(const AMateria& ref)
{
	type_ = ref.type_;
	xp_ = ref.xp_;
	return *this;
}

AMateria::~AMateria()
{
}

const std::string&	AMateria::getType() const
{
	return type_;
}

unsigned int	AMateria::getXP() const
{
	return xp_;
}

void	AMateria::use(ICharacter& target)
{
	(void)target;
	xp_ += 10;
}
