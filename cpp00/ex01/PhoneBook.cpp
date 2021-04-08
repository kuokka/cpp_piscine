#include <iostream>
#include <sstream>
#include "PhoneBook.hpp"

namespace {
	std::string	InsertField(std::string label)
	{
		std::string	field;

		std::cout << label << " : ";
		std::cin >> field;
		return (field);
	}
	
	std::string	Truncate(std::string str, size_t size)
	{
		if (str.length() > size)
			return (str.substr(0, 9) + ".");
		else
			return (str);
	}
}

PhoneBook::PhoneBook()
	: current_index_(0),
	  current_size_(0) {}

void	PhoneBook::Run()
{
	status		s;
	std::string	task;

	do
	{
		std::cout << "Type Command : ";
		std::cin >> task;
		s = ParseStatus(task);
		switch (s)
		{
			case ADD:
				AddAddress();
				break;
			case SEARCH:
				SearchAddress();
				break;
			case EXIT:
				return;
			default:
				break;
		}
	} while (!std::cin.eof());
}

status	PhoneBook::ParseStatus(std::string task)
{
	status		s;

	if (task == "ADD")
		s = ADD;
	else if (task == "SEARCH")
		s = SEARCH;
	else if (task == "EXIT")
		s = EXIT;
	else
		s = OTHERS;
	return (s);
}

void	PhoneBook::AddAddress()
{
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	login;
	std::string postal_address;
	std::string email_address;
	std::string phone_number;
	std::string birthday_date;
	std::string favorite_meal;
	std::string underwear_color;
	std::string darkset_secret;

	std::cout << std::endl;
	first_name = InsertField("First Name");
	last_name = InsertField("Last Name");
	nickname = InsertField("Nick Name");
	login = InsertField("Login");
	postal_address = InsertField("Postal Address");
	email_address = InsertField("Email Address");
	phone_number = InsertField("Phone Number");
	birthday_date = InsertField("Birthday date");
	favorite_meal = InsertField("Favorite Meal");
	underwear_color = InsertField("Underwear Color");
	darkset_secret = InsertField("Darkset Secret");
	address_[current_index_++] = Address(
											first_name,
											last_name,
											nickname,
											login,
											postal_address,
											email_address,
											phone_number,
											birthday_date,
											favorite_meal,
											underwear_color,
											darkset_secret
										);
	current_index_ %= 8;
	current_size_ += 1;
	if (current_size_ > 8)
		current_size_ = 8;
	std::cout << std::endl;
}

void	PhoneBook::SearchAddress() const
{
	std::string	cap = std::string(45, '=');
	std::string field = std::string(10, '0');

	std::cout << std::endl << cap << std::endl;
	std::cout.width(1);
	std::cout << "|";
	std::cout.width(10);
	std::cout << "index";
	std::cout.width(1);
	std::cout << "|";
	std::cout.width(10);
	std::cout << "first name";
	std::cout.width(1);
	std::cout << "|";
	std::cout.width(10);
	std::cout << "last name";
	std::cout.width(1);
	std::cout << "|";
	std::cout.width(10);
	std::cout << "nick name";
	std::cout.width(1);
	std::cout << "|";
	std::cout << std::endl << cap << std::endl;
	for (int i = 0; i < current_size_; ++i)
	{
		std::cout.width(1);
		std::cout << "|";
		std::cout.width(10);
		std::cout << i;
		std::cout.width(1);
		std::cout << "|";
		std::cout.width(10);
		std::cout << Truncate(address_[i].first_name_, 10);
		std::cout.width(1);
		std::cout << "|";
		std::cout.width(10);
		std::cout << Truncate(address_[i].last_name_, 10);
		std::cout.width(1);
		std::cout << "|";
		std::cout.width(10);
		std::cout << Truncate(address_[i].nickname_, 10);
		std::cout.width(1);
		std::cout << "|" << std::endl;
		std::cout << cap << std::endl;
	}
	std::cout << std::endl;
	ChooseAddress();
}

void	PhoneBook::ChooseAddress() const
{
	std::string			input;
	std::stringstream	stream;
	int					index;

	index = 0;
	std::cout << "Choose Index [Default : 0]: ";
	std::cin >> input;
	stream.str(input);
	stream >> index;
	if (index >= 0 && index < current_size_)
		address_[index].PrintAddress();
	else
		std::cout << "Not Available Index" << std::endl << std::endl;
}
