/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 19:12:16 by seunghoh          #+#    #+#             */
/*   Updated: 2021/04/12 19:15:37 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Human.hpp"
#include "Brain.hpp"

std::string	Human::identify() const
{
	return (brain_.identify());
}

Brain&	Human::getBrain()
{
	return (brain_);
}
