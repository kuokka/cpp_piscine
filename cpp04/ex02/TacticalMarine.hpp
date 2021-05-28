/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 21:22:55 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/28 21:38:08 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include "ISpaceMarine.hpp"

class	TacticalMarine : public ISpaceMarine
{
	public :
		TacticalMarine();
		TacticalMarine(const TacticalMarine&);
		TacticalMarine&	operator=(const TacticalMarine&);
		~TacticalMarine();
		ISpaceMarine*	clone() const;
		void	battleCry() const;
		void	rangedAttack() const;
		void	meleeAttack() const;
};

#endif
