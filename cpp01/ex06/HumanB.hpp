/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 19:38:58 by seunghoh          #+#    #+#             */
/*   Updated: 2021/04/12 19:40:48 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include "Weapon.hpp"

class	HumanB
{
	private:
		std::string name_;
		Weapon*		weapon_;

	public:
		HumanB(std::string name);
		void	setWeapon(Weapon& weapon);
		void	attack() const;
};

#endif
