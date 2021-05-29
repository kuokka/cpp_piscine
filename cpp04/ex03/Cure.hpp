/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 15:30:24 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/29 16:23:17 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class	Cure : public AMateria
{
	public :
		Cure();
		Cure(const Cure& ref);
		Cure&	operator=(const Cure& ref);
		~Cure();
		AMateria*	clone() const;
		void	use(ICharacter& target);
};

#endif
