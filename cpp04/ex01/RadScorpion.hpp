/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 17:51:20 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/28 18:16:52 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include "Enemy.hpp"

class	RadScorpion : public Enemy
{
	public :
		RadScorpion();
		RadScorpion(const RadScorpion& ref);
		RadScorpion&	operator=(const RadScorpion& ref);
		~RadScorpion();
		void	takeDamage(int damage);
};

#endif
