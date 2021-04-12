/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 14:15:34 by seunghoh          #+#    #+#             */
/*   Updated: 2021/04/12 18:27:44 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class	Zombie
{
	private:
		std::string	name_;
		std::string	type_;

	public:
		Zombie();
		Zombie(std::string name, std::string type);
		void	set_name(std::string name);
		void	set_type(std::string type);
		void	announce() const;
};

#endif
