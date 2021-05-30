/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 18:30:50 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/30 18:52:15 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target)
	:	Form("RobotomyRequestForm", 72, 45, target)
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& ref)
	:	Form(ref.getName(), ref.getSignGrade(), ref.getExecuteGrade(), ref.getTarget())
{}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& ref)
{
	if (this == &ref)
		return *this;
	Form::operator=(ref);
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{}

void	RobotomyRequestForm::beExecuted() const
{
	std::cout << "Drrrrrrrrrrr zraafasfa drrrrrrr drrrr drrrr" << std::endl;
	if (rand() % 2 == 1)
		std::cout << getTarget()
				  << "has been robotomized successfully"
				  << std::endl;
	else
		std::cout << "Robotomy Request Faild .." << std::endl;
}
