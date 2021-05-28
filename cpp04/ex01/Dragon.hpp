/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dragon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 20:55:47 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/28 21:01:38 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DRAGON_HPP
# define DRAGON_HPP

# include "Enemy.hpp"

class	Dragon : public Enemy
{
	public :
		Dragon();
		Dragon(const Dragon& ref);
		Dragon&	operator=(const Dragon& ref);
		~Dragon();
		void	takeDamage(int damage);
};

#endif
