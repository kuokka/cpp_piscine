/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 16:25:30 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/14 11:46:03 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# define ORG "\033[0m"
# define BLK "\e[0;30m"
# define RED "\e[0;31m"
# define GRN "\e[0;32m"
# define YEL "\e[0;33m"
# define BLU "\e[0;34m"
# define MAG "\e[0;35m"
# define CYN "\e[0;36m"
# define WHT "\e[0;37m"

# include <string>

typedef unsigned int	uint;

class	ScavTrap
{
	private :
		uint	hp_;
		uint	max_hp_;
		uint	mp_;
		uint	max_mp_;
		uint	level_;
		std::string	name_;
		uint	melee_ad_;
		uint	ranged_ad_;
		uint	skill_ad_;
		uint	armor_;
	
	public :
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& ref);
		ScavTrap&	operator=(const ScavTrap &ref);
		~ScavTrap();
		std::string getName() const;
		uint	getRangedAD() const;
		uint	getMeleeAD() const;
		uint	getSkillAD() const;
		void	rangedAttack(std::string const &target) const;
		void	meleeAttack(std::string const &target) const;
		void	takeDamage(uint amount);
		void	beRepaired(uint amount);
		void	challengeNewcomer(std::string const &target);
};

#endif
