/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 16:12:05 by seunghoh          #+#    #+#             */
/*   Updated: 2021/06/03 19:12:24 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <exception>
#include "span.hpp"

Span::Span(unsigned int n)
	:	data_(new int[n]),
		size_(0),
		capacity_(n)
{}

Span::Span(const Span& ref)
	:	data_(new int[ref.capacity_]),
		size_(ref.size_),
		capacity_(ref.capacity_)
{
	for (unsigned int i = 0; i < size_; ++i)
	{
		data_[i] = ref.data_[i];
	}
}

Span&	Span::operator=(const Span& ref)
{
	if (this == &ref)
		return *this;
	delete[] data_;
	data_ = new int[ref.capacity_];
	size_ = ref.size_;
	capacity_ = ref.capacity_;
	for (unsigned int i = 0; i < size_; ++i)
	{
		data_[i] = ref.data_[i];
	}
	return *this;
}

Span::~Span()
{
	delete[] data_;
}

Span::Exception::Exception(char type)
	:	type_(type)
{}

const char*	Span::Exception::what() const throw()
{
	if (type_ == NO_SPACE_EXCEPTION)
		return "Not Enough Space";
	else if (type_ == NO_SPAN_EXCEPTION)
		return "Cannot Find Span";
	return "Exception";
}

void	Span::addNumber(int value)
{
	if (size_ == capacity_)
		throw Exception(NO_SPACE_EXCEPTION);
	data_[size_++] = value;
}

