/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 19:40:40 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/27 19:44:58 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include <string>
# include "Victim.hpp"

class	Peon : public Victim
{
	private :
		Peon();

	public :
		Peon(std::string name);
		Peon(const Peon& ref);
		Peon&	operator=(const Peon& ref);
		~Peon();
		void	getPolymorphed() const;
};

#endif
