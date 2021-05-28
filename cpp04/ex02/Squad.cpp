/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 21:59:02 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/28 22:39:00 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Squad.hpp"

Squad::Squad()
	:	head_(NULL),
		count_(0)
{
}

Squad::Squad(const Squad&)
{
	// deep copy
}

Squad&	Squad::operator=(const Squad&)
{
	// deep copy
	// if previos unit exist remove it
	return *this;
}

Squad::~Squad()
{
	t_marine	*iter;
	t_marine	*next;
	
	iter = head_;
	while (iter != NULL)
	{
		next = iter->next;
		delete iter->unit;
		delete iter;
		iter = next;
	}
	head_ = NULL;
	count_ = 0;
}

int	Squad::getCount() const
{
	return count_;
}

ISpaceMarine*	Squad::getUnit(int index) const
{
	if (index < 0 || index + 1 > count_)
		return NULL;
	t_marine	*iter;
	int		count;

	iter = head_;
	count = 0;
	while (count != index)
	{
		iter = iter->next;
		count++;
	}
	return iter->unit;
}

int	Squad::push(ISpaceMarine *marine)
{
	t_marine	*iter;

	if (marine == NULL)
		return -1;
	if (head_ == NULL)
	{
		head_ = new t_marine;
		head_->unit = marine;
		head_->next = NULL;
	}
	else
	{
		iter = head_;
		while (iter->next != NULL && iter->unit != marine)
			iter = iter->next;
		if (iter->next != NULL)
			return (-1);
		iter->next = new t_marine;
		iter->next->unit = marine;
		iter->next->next = NULL;
	}
	count_++;
	return (count_);
}
