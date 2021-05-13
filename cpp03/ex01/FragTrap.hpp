/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 16:25:30 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/13 20:22:14 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

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

class	FragTrap
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
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap const &ref);
		FragTrap&	operator=(FragTrap const &ref);
		~FragTrap();
		std::string getName() const;
		uint	getRangedAD() const;
		uint	getMeleeAD() const;
		uint	getSkillAD() const;
		void	rangedAttack(std::string const &target) const;
		void	meleeAttack(std::string const &target) const;
		void	takeDamage(uint amount);
		void	beRepaired(uint amount);
		void	laserAttack(std::string const &target) const;
		void	fiestaAttack(std::string const &target) const;
		void	canonAttack(std::string const &target) const;
		void	shotAttack(std::string const &target) const;
		void	magicAttack(std::string const &target) const;
		void	vaulthunter_dot_exe(std::string const &target);
};

#endif
