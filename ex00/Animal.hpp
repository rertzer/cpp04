/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:34:40 by rertzer           #+#    #+#             */
/*   Updated: 2023/05/06 11:48:36 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class	Animal
{
	public:
		Animal(void);
		Animal(const std::string tp);
		Animal(const Animal& an);
		virtual ~Animal(void);

		Animal 			& operator=(const Animal & rhs);
		
		std::string		getType(void) const;
		virtual void	makeSound(void) const;

	protected:
		std::string	type;
};

#endif
