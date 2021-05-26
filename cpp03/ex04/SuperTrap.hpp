/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 20:59:52 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/26 21:27:10 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include "NinjaTrap.hpp"
# include "FragTrap.hpp"

class	SuperTrap : public NinjaTrap, public FragTrap
{
	public :
		SuperTrap();
		SuperTrap(std::string name);
		SuperTrap(const SuperTrap& ref);
		SuperTrap&	operator=(const SuperTrap& ref);
		~SuperTrap();
};

#endif
