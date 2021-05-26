/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 16:25:30 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/26 19:41:49 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# define FR4G_MELEE_QUOTE "Pain school is now in session."
# define FR4G_RANGED_QUOTE "Get ready for some Fragtrap face time!"
# define FR4G_DAMAGE_QUOTE "Why did they build me out of galvanized flesh?!"
# define FR4G_REPAIR_QUOTE "Health over here!"

# include <string>
# include "ClapTrap.hpp"

class	FragTrap : public ClapTrap
{
	private :
		uint	skill_ad_;

	public :
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap const &ref);
		FragTrap&	operator=(FragTrap const &ref);
		~FragTrap();
		uint	getSkillAD() const;
		void	laserAttack(std::string const &target) const;
		void	fiestaAttack(std::string const &target) const;
		void	canonAttack(std::string const &target) const;
		void	shotAttack(std::string const &target) const;
		void	magicAttack(std::string const &target) const;
		void	vaulthunter_dot_exe(std::string const &target);
};

#endif
