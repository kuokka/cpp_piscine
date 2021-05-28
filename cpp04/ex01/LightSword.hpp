/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LightSword.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 20:30:03 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/28 20:46:30 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIGHTSWORD_HPP
# define LIGHTSWORD_HPP

# include "AWeapon.hpp"

class	LightSword : public AWeapon
{
	public :
		LightSword();
		LightSword(const LightSword& ref);
		LightSword&	operator=(const LightSword& ref);
		~LightSword();
		void	attack() const;
};

#endif
