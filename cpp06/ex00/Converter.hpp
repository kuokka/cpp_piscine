/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 02:39:53 by seunghoh          #+#    #+#             */
/*   Updated: 2021/06/01 02:51:15 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
# define CONVERTER_HPP

# include <string>

class	Converter
{
	private :
		std::string	literal_;

	public :
		Converter(std::string literal);
		Converter(const Converter& ref);
		Converter&	operator=(const Converter& ref);
		~Converter();
		void	toChar();
		void	toInt();
		void	toFloat();
		void	toDouble();
};

#endif
