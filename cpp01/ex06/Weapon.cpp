/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 19:23:36 by seunghoh          #+#    #+#             */
/*   Updated: 2021/04/12 19:37:55 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
	: type_(type) {}

const std::string& Weapon::getType()
{
	return type_;
}

void	Weapon::setType(std::string type)
{
	type_ = type;
}
