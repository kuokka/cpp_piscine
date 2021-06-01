/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 00:55:59 by seunghoh          #+#    #+#             */
/*   Updated: 2021/06/02 01:20:21 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <class T>
void	iter(T* head, int length, void (*func)(T&))
{
	for (int i = 0; i < length; ++i)
	{
		func(head[i]);
	}
}

template <class T>
void	add(T& value)
{
	++value;
}

template <class T>
void	print(T& value)
{
	std::cout << value << " ";
}
#endif
