/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 15:47:53 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/29 16:30:29 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <string>

class	AMateria;
class	ICharacter
{
	public :
		virtual	~ICharacter() {}
		virtual const std::string&	getName() const = 0;
		virtual void	equip(AMateria*) = 0;
		virtual void	unequip(int) = 0;
		virtual void	use(int, ICharacter&) = 0;
};

#endif
