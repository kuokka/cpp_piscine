/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 18:05:39 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/30 23:40:04 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	:	Form("ShrubberyCreationForm", 145, 137, target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& ref)
	:	Form(ref.getName(), ref.getSignGrade(), ref.getExecuteGrade(), ref.getTarget())
{}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm &ref)
{
	if (this == &ref)
		return *this;
	Form::operator=(ref);
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

void	ShrubberyCreationForm::beExecuted() const
{
	std::string	file_name;

	file_name = getTarget() + "_shrubbery";
	std::ofstream out(file_name.c_str());
	if (out.is_open())
	{
		out << "   /\\" << std::endl
			<< "  /  \\" << std::endl
			<< " /    \\" << std::endl
			<< "/      \\" << std::endl
			<< "  |  |" << std::endl
			<< "  |  |" << std::endl
			<< "---------" << std::endl;
	}
	else
		std::cout << "File open Fail..." << std::endl;	
}
