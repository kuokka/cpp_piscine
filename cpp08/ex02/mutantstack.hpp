/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 02:51:25 by seunghoh          #+#    #+#             */
/*   Updated: 2021/06/04 03:43:58 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>

template <class T>
class	MutantStack : public std::stack<T>
{
	typedef typename std::stack<T>::container_type::iterator iterator;

	public :
		iterator	begin()
		{
			this->c.begin(); // 이거는 됨;;
			//c.begin(); //이거 안됨
			return std::stack<T>::c.begin(); // 이거는 됨
		}
		iterator	end()
		{
			return std::stack<T>::c.end();
		}
};

#endif
