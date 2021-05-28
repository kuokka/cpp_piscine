/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 17:00:46 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/28 17:18:09 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <string>

class	Enemy
{
	private :
		Enemy();

	protected :
		int	hp_;
		std::string	type_;

	public :
		Enemy(int hp, const std::string& type);
		Enemy(const Enemy& ref);
		Enemy&	operator=(const Enemy& ref);
		virtual ~Enemy();
		int		getHP() const;
		std::string getType() const;
		virtual void	takeDamage(int damage);
};

#endif
