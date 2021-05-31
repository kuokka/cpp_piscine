/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 02:39:53 by seunghoh          #+#    #+#             */
/*   Updated: 2021/06/01 03:30:50 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
# define CONVERTER_HPP

# include <string>

class	Converter
{
	private :
		std::string	literal_;
		char		unit_literal_;
		bool		is_number_;
		
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
