/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 01:34:48 by seunghoh          #+#    #+#             */
/*   Updated: 2021/06/03 15:40:32 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <exception>
# include <algorithm>

class	NotFoundException : public std::exception
{
	const char*	what() const throw();
};

template<class T>
int		easyfind(T &container, int value)
{
	typename T::iterator	it = std::find(container.begin(), container.end(), value);
	if (it != container.end())
		return *it;
	throw NotFoundException();
}

#endif
