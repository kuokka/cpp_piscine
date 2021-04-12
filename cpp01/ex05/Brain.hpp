/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 18:42:35 by seunghoh          #+#    #+#             */
/*   Updated: 2021/04/12 19:10:17 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# define HEX "0123456789ABCDEF"

# include <string>

class	Brain
{
	private:
		int	iq_;

	public:
		Brain();
		void		show_iq() const;
		std::string	identify() const;
};

#endif
