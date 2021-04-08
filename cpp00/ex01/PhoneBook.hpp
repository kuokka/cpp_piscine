#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# include <string>
# include "Address.hpp"

// c++ 11에서는 enum class 사용
enum status
{
	ADD,
	SEARCH,
	EXIT,
	OTHERS
};

class PhoneBook
{
	Address	address_[8];
	int	current_index_;
	int	current_size_;

	public :
		PhoneBook();
		void	Run();
		status	ParseStatus(std::string task);
		void	AddAddress();
		void	SearchAddress() const;
		void	ChooseAddress() const;
};

#endif
