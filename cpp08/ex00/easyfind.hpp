/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 01:34:48 by seunghoh          #+#    #+#             */
/*   Updated: 2021/06/03 15:54:36 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <exception>
# include <algorithm>
# include <iostream>

class	NotFoundException : public std::exception
{
	const char*	what() const throw();
};

template<class T>
typename T::iterator	easyfind(T &container, int value)
{
	typename T::iterator	it = std::find(container.begin(), container.end(), value);
	if (it != container.end())
	{
		std::cout << "value[" << value
				  << "] found at[" 
				  << it - container.begin()
				  << "]" << std::endl;
		return it;
	}
	throw NotFoundException();
}

#endif
