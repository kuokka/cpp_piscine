/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 16:55:01 by seunghoh          #+#    #+#             */
/*   Updated: 2021/04/09 17:46:29 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include <string>
# include "Zombie.hpp"

class	ZombieEvent
{
	private:
		std::string type_;
		const static std::string name_pool[8];

	public:
		ZombieEvent();
		void	setZombieType(std::string type);
		Zombie*	newZombie(std::string name) const;
		Zombie*	randomChump() const;
};

#endif
