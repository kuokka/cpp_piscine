/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 15:55:54 by seunghoh          #+#    #+#             */
/*   Updated: 2021/06/03 19:12:48 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# define NO_SPACE_EXCEPTION	0
# define NO_SPAN_EXCEPTION 1

class Span
{
	private :
		Span();
		int				*data_;
		unsigned int	size_;
		unsigned int	capacity_;
		class	Exception : public std::exception
		{
			private :
				char	type_;
			
			public :
				Exception(char type);
				const char* what() const throw();
		};

	public :
		Span(unsigned int n);
		Span(const Span& ref);
		Span&	operator=(const Span& ref);
		~Span();
		void	addNumber(int value);
		int		shortestSpan();
		int		longestSpan();
	
		template <class T>
		void	addRange(T begin, T end)
		{
			if (size_ == capacity_ ||
				static_cast<unsigned int>(end - begin) >
				capacity_ - size_)
				throw Exception(NO_SPACE_EXCEPTION);
			while (begin != end)
			{
				data_[size_++] = *begin;
				begin++;
			}
		}	
};

#endif
