/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 21:43:35 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/28 21:47:30 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include "ISpaceMarine.hpp"

class	AssaultTerminator : public ISpaceMarine
{
	public :
		AssaultTerminator();
		AssaultTerminator(const AssaultTerminator&);
		AssaultTerminator&	operator=(const AssaultTerminator&);
		~AssaultTerminator();
		ISpaceMarine*	clone() const;
		void	battleCry() const;
		void	rangedAttack() const;
		void	meleeAttack() const;
};

#endif
