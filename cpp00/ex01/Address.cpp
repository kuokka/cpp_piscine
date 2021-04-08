#include <string>
#include <iostream>
#include "Address.hpp"

Address::Address() {}

Address::Address(
					std::string first_name,
					std::string last_name,
					std::string nickname,
					std::string login,
					std::string postal_address,
					std::string email_address,
					std::string phone_number,
					std::string birthday_date,
					std::string favorite_meal,
					std::string underwear_color,
					std::string darkset_secret
				)
				:
					first_name_(first_name),
					last_name_(last_name),
					nickname_(nickname),
					login_(login),
					postal_address_(postal_address),
					email_address_(email_address),
					phone_number_(phone_number),
					birthday_date_(birthday_date),
					favorite_meal_(favorite_meal),
					underwear_color_(underwear_color),
					darkset_secret_(darkset_secret) {}

void	Address::PrintAddress() const
{
	std::cout << std::endl;
	std::cout << "First Name : " << first_name_ << std::endl;
	std::cout << "Last Name : " << last_name_ << std::endl;
	std::cout << "Nick Name : " << nickname_ << std::endl;
	std::cout << "Login : " << login_ << std::endl;
	std::cout << "Postal Address " << postal_address_ << std::endl;
	std::cout << "Email Address : " << email_address_ << std::endl;
	std::cout << "Phone Number : " << phone_number_ << std::endl;
	std::cout << "Birthday Date : " << birthday_date_ << std::endl;
	std::cout << "Favorite Meal : " << favorite_meal_ << std::endl;
	std::cout << "Underwear Color : " << underwear_color_ << std::endl;
	std::cout << "Darkset Secret : " << darkset_secret_ << std::endl;
	std::cout << std::endl;
}
