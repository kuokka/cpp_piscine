/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 15:22:29 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/29 16:23:34 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class	Ice : public AMateria
{
	public :
		Ice();
		Ice(const Ice& ref);
		Ice&	operator=(const Ice& ref);
		~Ice();
		AMateria*	clone() const;
		void	use(ICharacter& target);
};

#endif
