/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 18:19:10 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/28 18:57:42 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class	Character
{
	private :
		std::string	name_;
		AWeapon*	weapon_;
		int	ap_;
		Character();

	public :
		Character(const std::string& name);
		Character(const Character& ref);
		Character&	operator=(const Character& ref);
		~Character();
		void	recoverAP();
		void	equip(AWeapon*	weapon);
		void	attack(Enemy*	enemy);
		std::string	getName() const;
		AWeapon*	getWeapon() const;
		int		getAP() const;
};

std::ostream&	operator<<(std::ostream& os, const Character& ref);

#endif
