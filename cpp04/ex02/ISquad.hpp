/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 21:07:00 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/28 22:21:52 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
# define ISQUAD_HPP

# include "ISpaceMarine.hpp"

class	ISquad
{
	public :
		virtual ~ISquad() {}
		virtual int	getCount() const = 0;
		virtual ISpaceMarine*	getUnit(int) const = 0;
		virtual int push(ISpaceMarine*) = 0;
};

#endif
