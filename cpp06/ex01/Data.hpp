/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 19:59:03 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/31 21:00:13 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>

class	Data
{
	private :
		std::string	s1_;
		int			n_;
		std::string	s2_;

	public :
		Data(const std::string& s1, int n, const std::string& s2);
		Data(const Data& ref);
		Data&	operator=(const Data& ref);
		~Data();
		std::string	getS1() const;
		std::string	getS2() const;
		int	getN() const;
};

std::ostream&	operator<<(std::ostream &os, const Data& ref);
void*	serialize(void);
Data*	deserialize(void* raw);

#endif
