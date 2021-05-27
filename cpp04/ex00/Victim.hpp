/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 19:14:51 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/27 19:53:14 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <string>
# include <iostream>

class	Victim
{
	protected :
		std::string	name_;
		Victim();
		void	print_born() const;

	public :
		Victim(std::string name);
		Victim(const Victim& ref);
		Victim&	operator=(const Victim& ref);
		~Victim();
		std::string	getName() const;
		virtual void	getPolymorphed() const;
};

std::ostream&	operator<<(std::ostream& os, const Victim& ref);

#endif
