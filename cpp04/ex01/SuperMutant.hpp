/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 17:14:27 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/28 17:20:55 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include "Enemy.hpp"

class	SuperMutant : public Enemy
{
	public :
		SuperMutant();
		SuperMutant(const SuperMutant& ref);
		SuperMutant&	operator=(const SuperMutant& ref);
		~SuperMutant();
		void	takeDamage(int damage);
};

#endif
