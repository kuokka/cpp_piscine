/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 00:30:50 by seunghoh          #+#    #+#             */
/*   Updated: 2021/06/02 00:55:32 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <class T>
void	swap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

template <class T>
T	min(const T& a, const T& b)
{
	if (a < b)
		return a;
	return b;
}

template <class T>
T	max(const T& a, const T& b)
{
	if (a > b)
		return a;
	return b;
}

#endif
