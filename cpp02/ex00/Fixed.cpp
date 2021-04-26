/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 17:34:32 by seunghoh          #+#    #+#             */
/*   Updated: 2021/04/26 18:06:31 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	value = 0;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& ref) {
	std::cout << "Copy constructor called" << std::endl;
	value = ref.getRawBits();
}

Fixed&	Fixed::operator=(const Fixed& ref) {
	std::cout << "Assignation operator called" << std::endl;
	value = ref.getRawBits();
	return *this;
}

int		Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return value;
}

void	Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	value = raw;
}
