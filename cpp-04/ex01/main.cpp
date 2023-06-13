/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sciftci <sciftci@student.42kocaeli.com.tr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 15:05:19 by sciftci           #+#    #+#             */
/*   Updated: 2023/06/12 22:18:57 by sciftci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include <cstdlib>

int main()
{
	Animal *anims[20];
	Dog	*dog = new Dog;
	Cat	*cat = new Cat;
	Cat *catcopy;
	Dog *dogcopy;

	std::cout << std::endl;

	for (size_t i = 0; i < 20; i++)
	{
		if (i < 10)
			anims[i] = new Cat();
		else
			anims[i] = new Dog();
	}

	std::cout << std::endl;

	catcopy = new Cat(*cat);
	dogcopy = new Dog(*dog);

	std::cout << std::endl;

	std::cout << "Cat's idea: " << cat->getBrain().getIdea(3) << ". Brain address: " << &cat->getBrain() << std::endl;
	std::cout << "Catcopy's idea: " << catcopy->getBrain().getIdea(4) << ". Brain address: " << &catcopy->getBrain() << std::endl;
	std::cout << "Dog's idea: " << cat->getBrain().getIdea(3) << ". Brain address: " << &dog->getBrain() << std::endl;
	std::cout << "Dogcopy's idea: " << catcopy->getBrain().getIdea(4) << ". Brain address: " << &dogcopy->getBrain() << std::endl;

	std::cout << std::endl;

	delete cat;
	delete catcopy;
	delete dog;
	delete dogcopy;

	std::cout << std::endl;

	for (size_t i = 0; i < 20; i++)
	{
		delete anims[i];
	}
	system("leaks animalbrain");
}
