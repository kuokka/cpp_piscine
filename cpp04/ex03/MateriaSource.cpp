/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 16:32:19 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/29 17:09:57 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; ++i)
	{
		inven_[i] = 0;
	}
}

MateriaSource::MateriaSource(const MateriaSource& ref)
{
	for (int i = 0; i < 4; ++i)
	{
		if (ref.inven_[i] != 0)
			inven_[i] = ref.inven_[i]->clone();
		else
			inven_[i] = 0;
	}
}


MateriaSource&	MateriaSource::operator=(const MateriaSource& ref)
{
	for (int i = 0; i < 4; ++i)
	{
		if (inven_[i] != 0)
			delete inven_[i];
		inven_[i] = 0;
	}
	for (int i = 0; i < 4; ++i)
	{
		if (ref.inven_[i] != 0)
			inven_[i] = ref.inven_[i]->clone();
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; ++i)
	{
		if (inven_[i] != 0)
			delete inven_[i];
	}
}

void	MateriaSource::learnMateria(AMateria *m)
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

AMateria*	MateriaSource::createMateria(const std::string& type)
{
	for (int i = 0; i < 4; ++i)
	{
		if (inven_[i] != 0)
		{
			if (inven_[i]->getType() == type)
				return inven_[i]->clone();
		}
	}
	return 0;
}
