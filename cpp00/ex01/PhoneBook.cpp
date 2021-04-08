#include <iostream>
#include "PhoneBook.hpp"


PhoneBook::PhoneBook(int current_index)
	: current_index_(current_index) {}

void	PhoneBook::Run()
{
	std::string temp;
	std::cout << "Start !!" << std::endl;
	std::cin >> temp;
	std::cout << temp << std::endl;
}

void	PhoneBook::AddAddress()
{
	std::cout << "Add!" << std::endl;
}

void	PhoneBook::SearchAddress()
{
	std::cout << "Search !!" << std::endl;
}

void	PhoneBook::PrintAddress()
{
	std::cout << "Print !!" << std::endl;
}
