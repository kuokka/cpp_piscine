/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Modifier.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 02:51:49 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/19 23:09:12 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include "Modifier.hpp"

Modifier::Modifier(std::string input_file_,
				   std::string old_string_,
				   std::string new_string_)
	: input_file(input_file_),
	  old_string(old_string_),
	  new_string(new_string_) {
	output_file = input_file + ".replace";
}

int	Modifier::modify()
{
	std::ifstream	in(input_file.c_str());
	std::ofstream	out(output_file.c_str());
	std::string	text;
	int	size;
	std::string::size_type	pos;

	if (!in.is_open() || !out.is_open())
		return (1);
	in.seekg(0, std::ios::end);
	size = in.tellg();
	text.resize(size);
	in.seekg(0, std::ios::beg);
	in.read(&text[0], size);

	pos = text.find(old_string);
	while (pos != std::string::npos)
	{
        text.replace(pos, old_string.length(), new_string);
		pos = text.find(old_string, pos + 1);
	}
	out << text;
	return (0);
}
