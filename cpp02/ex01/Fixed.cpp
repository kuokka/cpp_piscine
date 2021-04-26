/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 17:34:32 by seunghoh          #+#    #+#             */
/*   Updated: 2021/04/26 18:56:35 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	value = 0;
}

Fixed::Fixed(const int value_) {
	std::cout << "Int constructor called" << std::endl;
	value = value_ << fraction_bit;
}

Fixed::Fixed(const float value_) {
	std::cout << "Float constructor called" << std::endl;
	value = std::roundf(value_ * (1 << fraction_bit));
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

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return value;
}

void	Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	value = raw;
}

float	Fixed::toFloat(void) const {
	return (float)value / (1 << fraction_bit);
}

int		Fixed::toInt(void) const {
	return value >> fraction_bit;
}

std::ostream&	operator<<(std::ostream& os, const Fixed& ref) {
	os << ref.toFloat();
	return os;
}
