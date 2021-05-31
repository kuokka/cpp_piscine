/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 19:59:03 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/31 22:23:43 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>

class	Data
{
	private :
		char		*s1_;
		int			n_;
		char		*s2_;
		Data();

	public :
		Data(char *s1, int n, char *s2);
		Data(const Data& ref);
		Data&	operator=(const Data& ref);
		~Data();
		char*	getS1() const;
		char*	getS2() const;
		int	getN() const;
};

std::ostream&	operator<<(std::ostream &os, const Data& ref);
void*	serialize(void);
Data*	deserialize(void* raw);

#endif
