#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	current_index_ = 0;
}

void	PhoneBook::add_address() {
	std::cin >> address_[current_index_].first_name_;
	std::cin >> address_[current_index_].last_name_;
	std::cin >> address_[current_index_].nickname_;
	std::cin >> address_[current_index_].login_;
	std::cin >> address_[current_index_].postal_address_;
	std::cin >> address_[current_index_].email_address_;
	std::cin >> address_[current_index_].phone_number_;
	std::cin >> address_[current_index_].birthday_date_;
	std::cin >> address_[current_index_].favorite_meal_;
	std::cin >> address_[current_index_].underwear_color_;
	std::cin >> address_[current_index_].darkset_secret_;
	current_index_++;
	current_index_ %= 8;
}

void	PhoneBook::show_phone_book() const {
	
	for (int i = 0; i < current_index_; ++i)
	{
		std::cout << "index is : [" << i << "]" << std::endl;
		address_[current_index_].show_address();
		std::cout << std::endl;
	}
}
