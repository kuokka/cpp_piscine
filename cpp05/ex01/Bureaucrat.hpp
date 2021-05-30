/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 17:26:36 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/30 17:42:00 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class	Form;

class	Bureaucrat
{
	private :
		const std::string	name_;
		int	grade_;
		class	GradeTooHighException;
		class	GradeTooLowException;
		Bureaucrat();
	
	public :
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat& ref);
		Bureaucrat&	operator=(const Bureaucrat& ref);
		~Bureaucrat();
		std::string	getName() const;
		int	getGrade() const;
		void	increaseGrade();
		void	decreaseGrade();
		static void	checkGrade(const Bureaucrat& ref);
		void	signForm(Form& form);
};

std::ostream&	operator<<(std::ostream& os, Bureaucrat& ref);

#endif
