/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 18:37:33 by seunghoh          #+#    #+#             */
/*   Updated: 2021/04/12 18:39:02 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int		main()
{
	std::string	brain = "HI THIS IS BRAIN";
	std::string* ptr_brain = &brain;
	std::string& ref_brain = brain;

	std::cout << "Pointer Brain : " << *ptr_brain << std::endl;
	std::cout << "Reference Brain : " << ref_brain << std::endl;
	
	return (0);
}
