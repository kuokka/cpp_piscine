/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 01:57:11 by seunghoh          #+#    #+#             */
/*   Updated: 2021/04/13 03:12:52 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "Modifier.hpp"

int		check_argument(int argc, char **argv)
{
	if (argc != 4)
		return (1);
	if (*argv[1] == '\0' ||
		*argv[2] == '\0' ||
		*argv[3] == '\0')
		return (1);
	std::ifstream	in(argv[1]);
	if (!in.is_open())
		return (1);
	return (0);
}

int		main(int argc, char **argv)
{
	if (check_argument(argc, argv))
	{
		std::cout << "Invalid Arguments" << std::endl;
		return (1);
	}
	Modifier	modifier(argv[1], 
						 argv[2], 
						 argv[3]);
	modifier.modify();
	return (0);
}
