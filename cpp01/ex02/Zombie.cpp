/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 14:15:31 by seunghoh          #+#    #+#             */
/*   Updated: 2021/04/09 17:19:00 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type)
	: name_(name),
	  type_(type) {}

void	Zombie::announce() const
{
	std::cout << "<"
			  << name_
			  << " ("
			  << type_
			  << ")>"
			  << " Grrrrrrrr...."
			  << std::endl;
}
