/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Troll.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 20:35:01 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/28 20:36:08 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TROLL_HPP
# define TROLL_HPP

# include <string>
# include "Victim.hpp"

class	Troll : public Victim
{
	private :
		Troll();
	
	public :
		Troll(std::string name);
		Troll(const Troll& ref);
		Troll&	operator=(const Troll& ref);
		~Troll();
		void	getPolymorphed() const;
};

#endif
