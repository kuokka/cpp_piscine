/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 16:29:56 by seunghoh          #+#    #+#             */
/*   Updated: 2021/05/28 21:01:28 by seunghoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "PowerFist.hpp"
#include "PlasmaRifle.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Dragon.hpp"
#include "Character.hpp"
#include "LightSword.hpp"

int		main()
{
	Character* me = new Character("me");
	std::cout << *me;

	Enemy* b = new RadScorpion;
	Enemy* c = new SuperMutant;
	Enemy* d = new Dragon;

	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	AWeapon* ls = new LightSword();

	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	
	me->equip(ls);
	me->attack(c);
	std::cout << *me;
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	me->attack(c);
	std::cout << *me;
	

	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	me->attack(c);
	std::cout << *me;

	me->attack(c);
	std::cout << *me;

	me->attack(c);
	std::cout << *me;

	me->attack(c);
	std::cout << *me;
	
	me->attack(c);
	std::cout << *me;


	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	me->attack(d);
	std::cout << *me;


	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	me->attack(d);
	std::cout << *me;

	for(int i=0; i<5; ++i)
	{
		me->recoverAP();
		std::cout << *me;
	}
	std::cout << "*****  End  *****" << std::endl;
	delete me;
	delete pr;
	delete pf;
	delete ls;
	return 0;
}
