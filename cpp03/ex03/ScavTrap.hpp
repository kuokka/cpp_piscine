/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 16:25:30 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/26 20:08:14 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# define SC4V_MELEE_QUOTE "Guess who?"
# define SC4V_RANGED_QUOTE "Chk-chk, BOOM!"
# define SC4V_DAMAGE_QUOTE "Ow hohoho, that hurts! Yipes!"
# define SC4V_REPAIR_QUOTE "Sweet life juice!"

# include <string>
# include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
	public :
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& ref);
		ScavTrap&	operator=(const ScavTrap &ref);
		~ScavTrap();
		void	challengeNewcomer(std::string const &target);
};

#endif
