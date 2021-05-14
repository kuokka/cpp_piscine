/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 16:25:30 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/14 19:41:38 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <string>
# include "ClapTrap.hpp"

class	FragTrap : public ClapTrap
{
	
	public :
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap const &ref);
		FragTrap&	operator=(FragTrap const &ref);
		~FragTrap();
		void	laserAttack(std::string const &target) const;
		void	fiestaAttack(std::string const &target) const;
		void	canonAttack(std::string const &target) const;
		void	shotAttack(std::string const &target) const;
		void	magicAttack(std::string const &target) const;
		void	vaulthunter_dot_exe(std::string const &target);
};

#endif
