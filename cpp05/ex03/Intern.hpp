/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 20:25:54 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/30 21:30:30 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"

class	Intern
{
	private :
		class	Generator;
		Generator*	generator_[3];

	public :
		Intern();
		Intern(const Intern& ref);
		Intern&	operator=(const Intern& ref);
		~Intern();
		Form*	makeForm(std::string forn_name, std::string target);
};

#endif
