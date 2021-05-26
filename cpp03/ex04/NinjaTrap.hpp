/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 20:03:26 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/26 21:12:51 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# define NINJA_MELEE_QUOTE "Meet professor punch!"
# define NINJA_RANGED_QUOTE "You're listening to 'Short-Range Damage Radio'."
# define NINJA_DAMAGE_QUOTE "My robotic flesh! AAHH!"
# define NINJA_REPAIR_QUOTE "I found health!"

# include <string>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class	NinjaTrap : public virtual ClapTrap
{
	public :
		NinjaTrap();
		NinjaTrap(std::string name);
		NinjaTrap(const NinjaTrap& ref);
		NinjaTrap&	operator=(const NinjaTrap& ref);
		~NinjaTrap();
		void	ninjaShoebox(const std::string quote);
		void	ninjaShoebox(const ClapTrap& ref);
		void	ninjaShoebox(const FragTrap& ref);
		void	ninjaShoebox(const ScavTrap& ref);
		void	ninjaShoebox(const NinjaTrap& ref);
};

#endif
