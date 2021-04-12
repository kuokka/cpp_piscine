/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 14:04:21 by seunghoh          #+#    #+#             */
/*   Updated: 2021/04/12 18:33:27 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include "Zombie.hpp"
# include <string>

class ZombieHorde
{
	private:
		const static std::string name_pool[8];
		Zombie	*horde_;
		int		horde_size_;
		ZombieHorde();

	public:
		ZombieHorde(int n);
		~ZombieHorde();
		void	announce() const;
};

#endif
