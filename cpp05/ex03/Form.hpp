/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 16:52:55 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/30 18:26:45 by seunghoh         ###   ########.fr       */
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
		std::string			target_;
		class				GradeTooLowException;
		class				GradeTooHighException;
		class				NotSignedException;
		Form();

	public :
		Form(std::string name, int sign_grade, int execute_grade, std::string target);
		Form(const Form& ref);
		Form&	operator=(const Form& ref);
		virtual			~Form();
		std::string		getName() const;
		int				getSignGrade() const;
		int				getExecuteGrade() const;
		bool			getSigned() const;
		std::string		getTarget() const;
		void			beSigned(const Bureaucrat& ref);
		void			execute(Bureaucrat const &executor) const;
		virtual void	beExecuted() const;
		static void		checkGrade(const Form& ref);
};

std::ostream&	operator<<(std::ostream &os, const Form& ref);

#endif
