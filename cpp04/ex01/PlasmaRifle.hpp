/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 16:53:35 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/28 16:55:39 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include "AWeapon.hpp"

class	PlasmaRifle : public AWeapon
{
	public :
		PlasmaRifle();
		PlasmaRifle(const PlasmaRifle& ref);
		PlasmaRifle&	operator=(const PlasmaRifle& ref);	
		~PlasmaRifle();
		void	attack() const;
};

#endif
