/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 20:06:31 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/28 16:46:40 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <string>

class AWeapon
{
	private :
		AWeapon();

	protected :
		std::string name_;
		int			apcost_;
		int			damage_;

	public :
		AWeapon(const std::string& name, int apcost, int damage);
		AWeapon(const AWeapon& ref);
		AWeapon&	operator=(const AWeapon& ref);
		virtual ~AWeapon();
		std::string	getName() const;
		int	getAPCost() const;
		int getDamage() const;
		virtual void attack() const = 0;
};

#endif
