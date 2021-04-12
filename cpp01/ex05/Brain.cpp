/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 18:42:37 by seunghoh          #+#    #+#             */
/*   Updated: 2021/04/12 19:09:39 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Brain.hpp"


Brain::Brain()
	: iq_(100) {}

void	Brain::show_iq() const
{
	std::cout << iq_ << std::endl;
}

std::string	Brain::identify() const
{
	unsigned long long hex_reference;
	std::string	reference;
	
	reference = "";
	hex_reference = reinterpret_cast<unsigned long long>(this);
	while (hex_reference != 0)
	{
		reference = HEX[hex_reference % 16] + reference;
		hex_reference /= 16;
		reference = HEX[hex_reference % 16] + reference;
		hex_reference /= 16;
	}
	reference = "0x" + reference;
	return (reference);
}
