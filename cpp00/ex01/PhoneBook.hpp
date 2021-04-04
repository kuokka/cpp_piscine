#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# include "Address.hpp"

class PhoneBook
{
	Address		address_[8];
	int			current_index_;

	public :
	PhoneBook();
	void		add_address();
	void		show_phone_book() const;
};

#endif



