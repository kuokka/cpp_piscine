/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 17:05:05 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/30 23:46:36 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <exception>
#include "Form.hpp"

class	Form::GradeTooLowException : public std::exception
{
	private :
		std::string err_msg_;

	public :
		GradeTooLowException(std::string err_msg)
			:	err_msg_(err_msg)
		{}
		~GradeTooLowException() throw() {}
		const char*	what() const throw()
		{
			if (err_msg_ == "Sign")
				return "Sign Grade is Too Low";
			return "Execute Grade is Too Low";
		}
};

class	Form::GradeTooHighException : public std::exception
{
	private :
		std::string err_msg_;

	public :
		GradeTooHighException(std::string err_msg)
			:	err_msg_(err_msg)
		{}
		~GradeTooHighException() throw() {}

		const char*	what() const throw()
		{
			if (err_msg_ == "Sign")
				return "Sign Grade is Too High";
			return "Execute Grade is Too High";
		}
};

class	Form::NotSignedException : public std::exception
{
	public :
		const char* what() const throw()
		{
			return "Form is Not Signed";
		}
};

Form::Form(std::string name, int sign_grade, int execute_grade, std::string target)
	:	name_(name),
		sign_grade_(sign_grade),
		execute_grade_(execute_grade),
		signed_(false),
		target_(target)
{
	checkGrade(*this);
}

Form::Form(const Form& ref)
	:	name_(ref.name_),
		sign_grade_(ref.sign_grade_),
		execute_grade_(ref.execute_grade_),
		signed_(ref.signed_),
		target_(ref.target_)
{
	checkGrade(*this);
}

Form&	Form::operator=(const Form& ref)
{
	signed_ = ref.signed_;
	target_ = ref.target_;
	return *this;
}

Form::~Form()
{
}

std::string	Form::getName() const
{
	return name_;
}

int	Form::getSignGrade() const
{
	return sign_grade_;
}

int	Form::getExecuteGrade() const
{
	return execute_grade_;
}

bool	Form::getSigned() const
{
	return signed_;
}

std::string	Form::getTarget() const
{
	return target_;
}

void	Form::beSigned(const Bureaucrat& ref)
{
	if (ref.getGrade() <= sign_grade_)
		signed_ = true;
	else
		throw GradeTooLowException("Sign");
}

void	Form::execute(Bureaucrat const &execute) const
{
	if (signed_ == false)
		throw NotSignedException();
	if (execute.getGrade() <= execute_grade_)
		beExecuted();
	else
		throw GradeTooLowException("Execute");
}

void	Form::beExecuted() const
{}

void	Form::checkGrade(const Form& ref)
{
	if (ref.sign_grade_< 1)
		throw GradeTooHighException("Sign");
	if (ref.sign_grade_ > 150)
		throw GradeTooLowException("Sign");
	if (ref.execute_grade_ < 1)
		throw GradeTooHighException("Execute");
	if (ref.execute_grade_ > 150)
		throw GradeTooLowException("Execute");
}

std::ostream&	operator<<(std::ostream& os, const Form& ref)
{
	os << ref.getName()
	   << " Form ["
	   << ref.getExecuteGrade()
	   << "] ["
	   << ref.getSignGrade()
	   << "] ["
	   << ref.getTarget()
	   << "] : ";
	if (ref.getSigned())
		os << "Signed";
	else
		os << "Not Signed";
	return os;
}
