/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 16:09:53 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/28 16:55:04 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include "AWeapon.hpp"

class	PowerFist : public AWeapon
{
	private :

	public :
		PowerFist();
		PowerFist(const PowerFist& ref);
		PowerFist&	operator=(const PowerFist& ref);
		~PowerFist();
		void	attack() const ;
};

#endif
