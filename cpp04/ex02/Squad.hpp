/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 21:56:15 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/29 14:36:08 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"

class	Squad : public ISquad
{
	private :
		typedef struct			s_marine
		{
			ISpaceMarine*		unit;
			struct s_marine*	next;
		}						t_marine;
		t_marine	*head_;
		int	count_;

	public :
		Squad();
		Squad(const Squad& ref);
		Squad&	operator=(const Squad& ref);
		~Squad();
		int	getCount() const;
		ISpaceMarine*	getUnit(int index) const;
		int	push(ISpaceMarine* marine);
};

#endif
