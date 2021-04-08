#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# include "Address.hpp"

// c++ 11에서는 enum class 사용
enum status
{
	ADD,
	SEARCH,
	EXIT
};

class PhoneBook
{
	Address	address_[8];
	int	current_index_;

	public :
		PhoneBook(int current_index);
		void Run();
		void AddAddress();
		void SearchAddress();
		void PrintAddress();
};

#endif