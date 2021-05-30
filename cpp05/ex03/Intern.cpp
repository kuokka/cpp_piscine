/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 20:27:36 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/30 21:34:50 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

class	Intern::Generator
{
	private :
		std::string	type_;
		Form*	(Intern::Generator::*generate_)(const std::string&);
		Generator();

	public :
		Generator(std::string type, Form* (Intern::Generator::*generate)(const std::string&));
		Generator(const Generator& ref);
		Generator&	operator=(const Generator& ref);
		~Generator();
		bool	compare(const std::string& type);
		Form*	generate_PD(const std::string& target);
		Form*	generate_RR(const std::string& target);
		Form*	generate_SC(const std::string& target);
		Form*	generate(const std::string& target);
};

Form*	Intern::Generator::generate_PD(const std::string& target)
{
	return new PresidentialPardonForm(target);
}

Form*	Intern::Generator::generate_RR(const std::string& target)
{
	return new RobotomyRequestForm(target);
}

Form*	Intern::Generator::generate_SC(const std::string& target)
{
	return new ShrubberyCreationForm(target);
}

Intern::Generator::Generator(std::string type, Form* (Intern::Generator::*generate)(const std::string&))
	:	type_(type),
		generate_(generate)
{}

Intern::Generator::Generator(const Generator& ref)
	:	type_(ref.type_),
		generate_(ref.generate_)
{}

Intern::Generator&	Intern::Generator::operator=(const Generator& ref)
{
	type_ = ref.type_;
	generate_ = ref.generate_;
	return *this;
}

Intern::Generator::~Generator()
{}

bool	Intern::Generator::compare(const std::string& type)
{
	if (type_ == type)
		return (true);
	return (false);
}

Form*	Intern::Generator::generate(const std::string& target)
{
	return (this->*generate_)(target);
}

Intern::Intern()
{
	generator_[0] = new Generator("robotomy request", &Generator::generate_RR);
	generator_[1] = new Generator("shrubbery creation", &Generator::generate_SC);
	generator_[2] = new Generator("presidential pardon", &Generator::generate_PD);
}

Intern::Intern(const Intern& ref)
{	
	(void)ref;
	generator_[0] = new Generator("robotomy request", &Generator::generate_RR);
	generator_[1] = new Generator("shrubbery creation", &Generator::generate_SC);
	generator_[2] = new Generator("presidential pardon", &Generator::generate_PD);
}

Intern&	Intern::operator=(const Intern& ref)
{
	(void)ref;
	return *this;
}

Intern::~Intern()
{
	delete generator_[0];
	delete generator_[1];
	delete generator_[2];
}

Form*	Intern::makeForm(std::string form_name, std::string target)
{
	Form*	ret;

	ret = 0;
	for (int i = 0; i < 3; ++i)
	{
		if (generator_[i]->compare(form_name))
			ret = generator_[i]->generate(target);
	}
	if (ret == 0)
		std::cout << "Type is Invalid" << std::endl;
	return ret;
}
