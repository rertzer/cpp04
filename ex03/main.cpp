/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 17:06:33 by rertzer           #+#    #+#             */
/*   Updated: 2023/05/10 11:37:58 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

int main()
{

	AMateria * tmp;
	AMateria *	vault[99];
	for (int i = 0; i < 99; i++)
		vault[i] = NULL;

	std::cout << "Materia source\n";
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());

	MateriaSource*	src2 = new MateriaSource();
	src2->learnMateria(new Ice());
	MateriaSource*	src3 = src2;

	std::cout << "\nCharacter\n";
	ICharacter* me = new Character("me");
	ICharacter* bob = new Character("bob");
	tmp = src->createMateria("ice");
	me->equip(tmp);
	vault[0] = src->createMateria("cure");
	me->equip(vault[0]);

	tmp = src3->createMateria("ice");
	me->equip(tmp);
	tmp = src3->createMateria("cure");

	
	std::cout << "\nusing staff.\n";	
	me->use(0, *bob);
	me->use(1, *bob);
	me->unequip(1);
	me->use(1, *bob);
	me->use(2, *me);
	me->use(5, *bob);
	me->use(-42, *bob);
	
	std::cout << "\nDeleting...\n";
	delete bob;
	delete me;
	delete src;
	delete src2;
	delete vault[0];
	return 0;
}
