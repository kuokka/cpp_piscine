/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 17:09:37 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/27 19:49:39 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <string>
# include <iostream>
# include "Victim.hpp"

class	Sorcerer
{
	private :
		std::string	name_;
		std::string	title_;
		void	print_born() const;
		Sorcerer();

	public :
		Sorcerer(std::string name, std::string title);
		Sorcerer(const Sorcerer& ref);
		Sorcerer&	operator=(const Sorcerer& ref);
		~Sorcerer();
		std::string	getName() const;
		std::string getTitle() const;
		void	polymorph(Victim const &ref) const;
};

std::ostream&	operator<<(std::ostream& os, const Sorcerer& ref);

#endif
