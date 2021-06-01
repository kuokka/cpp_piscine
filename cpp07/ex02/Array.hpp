/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 02:00:27 by seunghoh          #+#    #+#             */
/*   Updated: 2021/06/02 02:30:38 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>
# include <iostream>

typedef unsigned int	uint;

template <class T>
class	Array
{
	private :
		T*		data_;
		uint	size_;
		class	RangeException : public std::exception
		{
			const char*	what() const throw()
			{
				return "Out of Range!";
			}
		};
	public :
		Array()
		{
			data_ = new T[0];
			size_ = 0;
		}
		Array(uint n)
		{
			data_ = new T[n];
			size_ = n;
		}
		Array(const Array& ref)
		{
			size_ = ref.size_;
			data_ = new T[size_];
			for (uint i = 0; i < size_; ++i)
			{
				data_[i] = ref.data_[i];
			}
		}

		Array&	operator=(const Array& ref)
		{
			if (this == &ref)
				return *this;
			delete[] data_;
			size_ = ref.size_;
			data_ = new T[size_];
			for (uint i = 0; i < size_; ++i)
			{
				data_[i] = ref.data_[i];
			}
			return *this;
		}

		~Array()
		{
			delete[] data_;
		}
		T&	operator[](uint index)
		{
			if (index < 0 || index >= size_)
			{
				throw RangeException();
			}
			return data_[index];
		}
		uint	size() const
		{
			return size_;
		}

		void	print(std::ostream &os) const
		{
			for (uint i = 0; i < size_; ++i)
			{
				os << data_[i] << " ";
			}
			os << std::endl;
		}
};

template <class T>
std::ostream&	operator<<(std::ostream& os, const Array<T>& ref)
{
	ref.print(os);
	return os;
}
#endif
