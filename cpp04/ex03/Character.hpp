/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 15:49:55 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/29 16:21:19 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class	Character : public ICharacter
{
	private :
		std::string	name_;
		AMateria*	inven_[4];
		Character();

	public :
		Character(std::string name);
		Character(const Character& ref);
		Character&	operator=(const Character& ref);
		~Character();
		const std::string&	getName() const;
		void	equip(AMateria *m);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);
};

#endif
