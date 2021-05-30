/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 17:29:44 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/30 23:43:17 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <exception>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class	Bureaucrat::GradeTooLowException : public std::exception
{
	const char*	what() const throw()
	{
        return "Grade is Too Low";
    }
};

class	Bureaucrat::GradeTooHighException : public std::exception
{
	const char*	what() const throw()
	{
		return "Grade is Too High";
	}
};

std::ostream&	operator<<(std::ostream& os, Bureaucrat& ref)
{
	os << ref.getName()
	   << ", bureaucrat grade "
	   << ref.getGrade()
	   << ".";
	return os;
}

Bureaucrat::Bureaucrat(std::string name, int grade)
	:	name_(name),
		grade_(grade)
{
	checkGrade(*this);
}

Bureaucrat::Bureaucrat(const Bureaucrat& ref)
	:	name_(ref.name_),
		grade_(ref.grade_)
{
	checkGrade(*this);
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& ref)
{
	grade_ = ref.grade_;
	return *this;
}

Bureaucrat::~Bureaucrat()
{
}

std::string	Bureaucrat::getName() const
{
	return name_;
}

int	Bureaucrat::getGrade() const
{
	return grade_;
}

void	Bureaucrat::increaseGrade()
{
	--grade_;
	checkGrade(*this);
}

void	Bureaucrat::decreaseGrade()
{
	++grade_;
	checkGrade(*this);
}

void	Bureaucrat::checkGrade(const Bureaucrat& ref)
{
	if (ref.grade_ < 1)
	{
		throw GradeTooHighException();
	}
	if (ref.grade_ > 150)
	{
		throw GradeTooLowException();
	}
}

void	Bureaucrat::signForm(Form& form)
{
	try
	{
		form.beSigned(*this);
		std::cout << *this
				  << " signs "
				  << form
				  << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << *this
				  << " cannot sign "
				  << form
				  << " because "
				  << e.what()
				  << std::endl;
	}
}
