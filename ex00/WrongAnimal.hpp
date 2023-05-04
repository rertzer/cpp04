/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:43:35 by rertzer           #+#    #+#             */
/*   Updated: 2023/05/04 14:21:46 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class	WrongAnimal
{
	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal& an);
		~WrongAnimal(void);

		WrongAnimal & operator=(const WrongAnimal & rhs);

		std::string		getType(void) const;
		void			makeSound(void) const;

	protected:
		std::string	type;
};

#endif
