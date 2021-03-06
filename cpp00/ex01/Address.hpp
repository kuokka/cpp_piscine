#ifndef ADDRESS_H
# define ADDRESS_H

# include <string>

class Address {
	public:
	std::string	first_name_;
	std::string	last_name_;
	std::string	nickname_;
	std::string	login_;
	std::string	postal_address_;
	std::string email_address_;
	std::string phone_number_;
	std::string birthday_date_;
	std::string favorite_meal_;
	std::string underwear_color_;
	std::string	darkset_secret_;

	Address();
	Address(
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
		   );
	void	PrintAddress() const;
};
	
	
#endif
