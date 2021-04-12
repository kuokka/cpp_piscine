/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Modifier.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 02:48:07 by seunghoh          #+#    #+#             */
/*   Updated: 2021/04/13 03:10:54 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODIFIER_HPP
# define MODIFIER_HPP

# include <string>

class	Modifier
{
	private:
		std::string	input_file;
		std::string output_file;
		std::string	old_string;
		std::string new_string;
		Modifier();

	public:
		Modifier(std::string input_file_,
				 std::string old_string_,
				 std::string new_string_);
		int	modify();
};

#endif
