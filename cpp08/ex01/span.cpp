/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 16:12:05 by seunghoh          #+#    #+#             */
/*   Updated: 2021/06/04 01:31:02 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

namespace
{
	int	ft_abs(int n)
	{
		if (n < 0)
			return -n;
		return n;
	}
}

Span::Span(unsigned int n)
	:	size_(n)
{}

Span::Span(const Span& ref)
	:	data_(ref.data_),
		size_(ref.size_)
{}

Span&	Span::operator=(const Span& ref)
{
	if (this == &ref)
		return *this;
	data_ = ref.data_;
	size_ = ref.size_;
	return *this;
}

Span::~Span()
{
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

std::vector<int>	Span::getData() const
{
	return data_;
}

void	Span::addNumber(int value)
{
	if (data_.size() == size_)
		throw Exception(NO_SPACE_EXCEPTION);
	data_.push_back(value);
}

int		Span::shortestSpan() const
{
	if (data_.size() < 2)
		throw Exception(NO_SPAN_EXCEPTION);
	std::vector<int>	temp = data_;
	std::sort (temp.begin(), temp.end());
	std::vector<int>::iterator	it = temp.begin();
	int	before = *it;
	++it;
	int	min = ft_abs(*it - before);
	before = *it;
	++it;
	while (it != temp.end())
	{
		if (ft_abs(*it - before) < min)
			min = ft_abs(*it - before);
		before = *it;
		++it;
	}
	return (min);	
}

int		Span::longestSpan() const
{
	int	max;
	int	min;

	if (data_.size() < 2)
		throw Exception(NO_SPAN_EXCEPTION);
	max = *std::max_element(data_.begin(), data_.end());
	min = *std::min_element(data_.begin(), data_.end());
	return (max - min);
}

std::ostream&	operator<<(std::ostream& os, const Span& ref)
{
	std::vector<int>	data = ref.getData();
	std::vector<int>::iterator	it;

	it = data.begin();
	while (it != data.end())
	{
		os << *it << " ";
		++it;
	}
	return os;
}

