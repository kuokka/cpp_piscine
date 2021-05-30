/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 16:52:55 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/30 17:07:43 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class	Form
{
	private :
		const std::string	name_;
		const int			sign_grade_;
		const int			execute_grade_;
		bool				signed_;
		class				GradeTooLowException;
		class				GradeTooHighException;
		Form();

	public :
		Form(std::string name, int sign_grade, int execute_grade);
		Form(const Form& ref);
		Form&	operator=(const Form& ref);
		~Form();
		std::string	getName() const;
		int			getSignGrade() const;
		int			getExecuteGrade() const;
		bool		getSigned() const;
		void		beSigned(const Bureaucrat& ref);
		static void	checkGrade(const Form& ref);
};

std::ostream&	operator<<(std::ostream &os, const Form& ref);

#endif
