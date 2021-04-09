/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 13:51:51 by seunghoh          #+#    #+#             */
/*   Updated: 2021/04/09 14:22:11 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Pony.hpp"

Pony::Pony(std::string name)
		  : name_(name) {}

void	Pony::ShowName() const
{
	std::cout << "My name is : " << name_ << std::endl;
}
