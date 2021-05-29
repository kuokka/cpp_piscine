/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 16:28:17 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/29 16:54:52 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class	MateriaSource : public IMateriaSource
{
	private :
		AMateria*	inven_[4];

	public :
		MateriaSource();
		MateriaSource(const MateriaSource& ref);
		MateriaSource&	operator=(const MateriaSource& ref);
		~MateriaSource();
		void	learnMateria(AMateria *m);
		AMateria*	createMateria(const std::string& type);
};

#endif
