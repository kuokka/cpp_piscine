/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 15:57:08 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/29 17:09:39 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"

Character::Character(std::string name)
	:	name_(name)
{
	for (int i = 0; i < 4; ++i)
		inven_[i] = 0;
}

Character::Character(const Character& ref)
	:	name_(ref.name_)
{
	for (int i = 0; i < 4; ++i)
		inven_[i] = 0;
	for (int i = 0; i < 4; ++i)
	{
		if (ref.inven_[i] != 0)
			inven_[i] = ref.inven_[i]->clone();
	}
}

Character&	Character::operator=(const Character& ref)
{
	for (int i = 0; i < 4; ++i)
	{
		if (inven_[i] != 0)
			delete inven_[i];
	}
	for (int i = 0; i < 4; ++i)
		inven_[i] = 0;
	for (int i = 0; i < 4; ++i)
	{
		if (ref.inven_[i] != 0)
			inven_[i] = ref.inven_[i]->clone();
	}
	return *this;
}

Character::~Character()
{
	for(int i = 0; i < 4; ++i)
	{
		if (inven_[i] != 0)
			delete inven_[i];
	}
}

const std::string&	Character::getName() const
{
	return name_;
}

void	Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; ++i)
	{
		if (inven_[i] == 0)
		{
			inven_[i] = m;
			return ;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		return ;
	if (inven_[idx] != 0)
		inven_[idx] = 0;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
		return ;
	if (inven_[idx] == 0)
		return ;
	inven_[idx]->use(target);
}
