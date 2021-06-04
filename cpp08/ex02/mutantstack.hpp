/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 02:51:25 by seunghoh          #+#    #+#             */
/*   Updated: 2021/06/04 16:42:12 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iostream>

template <class T>
class	MutantStack : public std::stack<T>
{
	public :
		typedef typename
			std::stack<T>::container_type::iterator	iterator;
		typedef typename
			std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename
			std::stack<T>::container_type::reverse_iterator	reverse_iterator;
		typedef typename
			std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
		MutantStack() 
			:	std::stack<T>() 
		{}
		MutantStack(const MutantStack& ref)
			:	std::stack<T>(ref)
		{}
		MutantStack&	operator=(const MutantStack& ref)
		{
			if (this == &ref)
				return *this;
			std::stack<T>::operator=(ref);
			return	*this;
		}
		~MutantStack()
		{}
		iterator	begin()
		{
			return this->c.begin();
		}
		const_iterator	begin() const
		{
			return this->c.begin();
		}
		iterator	end()
		{
			return (this->c.end());
		}
		const_iterator	end() const
		{
			return (this->c.end());
		}
		reverse_iterator	rbegin()
		{
			return (this->c.rbegin());
		}
		const_reverse_iterator	r_begin() const
		{
			return (this->c.rbegin());
		}
		reverse_iterator	rend()
		{
			return (this->c.rend());
		}
		const_reverse_iterator	rend() const
		{
			return (this->c.rend());
		}
};

#endif
