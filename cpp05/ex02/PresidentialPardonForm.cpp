/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 18:30:50 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/30 18:51:51 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target)
	:	Form("PresidentialPardonForm", 25, 5, target)
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& ref)
	:	Form(ref.getName(), ref.getSignGrade(), ref.getExecuteGrade(), ref.getTarget())
{}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& ref)
{
	if (this == &ref)
		return *this;
	Form::operator=(ref);
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{}

void	PresidentialPardonForm::beExecuted() const
{
	std::cout << getTarget()
			  << " has been pardoned by Zafod Beeblebrox."
			  << std::endl;
}
