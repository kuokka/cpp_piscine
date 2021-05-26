/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 18:26:25 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/26 19:25:29 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# define ORG "\033[0m"
# define BLK "\e[0;30m"
# define RED "\e[0;31m"
# define GRN "\e[0;32m"
# define YEL "\e[0;33m"
# define BLU "\e[0;34m"
# define MAG "\e[0;35m"
# define CYN "\e[0;36m"
# define WHT "\e[0;37m"

# define CL4P_MELEE_QUOTE "This is why you do your homework!"
# define CL4P_RANGED_QUOTE "In yo' FACE!"
# define CL4P_DAMAGE_QUOTE "Why do I even feel pain?!"
# define CL4P_REPAIR_QUOTE "Health! Eww, what flavor is red?"

# include <string>
typedef unsigned int	uint;

class	ClapTrap
{
	protected:
		std::string	melee_quote;
		std::string	ranged_quote;
		std::string	damage_quote;
		std::string	repair_quote;
		std::string	type_;
		uint	hp_;
		uint	max_hp_;
		uint	mp_;
		uint	max_mp_;
		uint	level_;
		std::string name_;
		uint	melee_ad_;
		uint	ranged_ad_;
		uint	armor_;
	
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& ref);
		~ClapTrap();
		ClapTrap&	operator=(const ClapTrap& ref);
		std::string	getName() const;
		uint	getRangedAD() const;
		uint	getMeleeAD() const;
		uint	getSkillAD() const;
		void	rangedAttack(std::string const &target) const;
		void	meleeAttack(std::string const &target) const;
		void	takeDamage(uint amount);
		void	beRepaired(uint amount);
};

#endif
