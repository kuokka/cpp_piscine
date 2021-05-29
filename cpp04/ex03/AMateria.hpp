/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 14:46:14 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/29 16:22:08 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>

class	ICharacter;

class	AMateria
{
	protected :
		std::string	type_;
		unsigned int	xp_;
		AMateria();

	public :
		AMateria(const std::string&	type);
		AMateria(const AMateria& ref);
		AMateria&	operator=(const AMateria& ref);
		virtual ~AMateria();
		const std::string&	getType() const;
		unsigned int	getXP() const;
		virtual AMateria*	clone() const = 0;
		virtual void	use(ICharacter& target);
};

#endif
