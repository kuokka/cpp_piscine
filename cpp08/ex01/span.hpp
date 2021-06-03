/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 15:55:54 by seunghoh          #+#    #+#             */
/*   Updated: 2021/06/03 23:55:52 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# define NO_SPACE_EXCEPTION	0
# define NO_SPAN_EXCEPTION 1

# include <exception>
# include <vector>
# include <algorithm>
# include <iostream>

class Span
{
	private :
		Span();
		std::vector<int>	data_;
		unsigned int		size_;
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
		std::vector<int>	getData() const;
		int				shortestSpan() const;
		int				longestSpan() const;
		void			addNumber(int value);
		template <class T>
		void	addNumber(T begin, T end)
		{
			if (size_ == data_.size() ||
				static_cast<unsigned int>(end - begin) >
				size_ - data_.size())
				throw Exception(NO_SPACE_EXCEPTION);
			while (begin != end)
			{
				data_.push_back(*begin);
				begin++;
			}
		}	
};

std::ostream&	operator<<(std::ostream& os, const Span& ref);

#endif
