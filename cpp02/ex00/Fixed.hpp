/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 17:34:39 by seunghoh          #+#    #+#             */
/*   Updated: 2021/04/26 18:15:37 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class	Fixed {
	private:
		int		value;
		static const int	fraction_bit = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed& ref);
		Fixed&	operator=(const Fixed& ref);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif
