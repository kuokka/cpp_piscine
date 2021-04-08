#include <string>
#include <iostream>
#include "Address.hpp"

Address::Address() {}

void	Address::show_address() const {
	std::cout << first_name_ << std::endl;
	std::cout << last_name_ << std::endl;
	std::cout << nickname_ << std::endl;
	std::cout << login_ << std::endl;
	std::cout << postal_address_ << std::endl;
	std::cout << email_address_ << std::endl;
	std::cout << phone_number_ << std::endl;
	std::cout << birthday_date_ << std::endl;
	std::cout << favorite_meal_ << std::endl;
	std::cout << underwear_color_ << std::endl;
	std::cout << darkset_secret_ << std::endl;
}