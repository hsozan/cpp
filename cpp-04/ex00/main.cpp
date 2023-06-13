/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sciftci <sciftci@student.42kocaeli.com.tr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 15:05:19 by sciftci           #+#    #+#             */
/*   Updated: 2023/06/12 22:20:51 by sciftci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* anim = new Animal();
	const Animal* cat = new Cat("Siamese");
	const Animal* dog = new Dog("Bulldog");
	const WrongAnimal* wrongcat1 = new WrongCat("Şerafettin");
	const WrongCat* wrongcat2 = new WrongCat("Van");

	std::cout << std::endl << cat->getType() << " " << std::endl;
	std::cout << dog->getType() << " " << std::endl;
	std::cout << wrongcat1->getType() << " " << std::endl;
	std::cout << wrongcat2->getType() << " " << std::endl << std::endl;
	anim->makeSound();
	cat->makeSound();
	dog->makeSound();
	std::cout << std::endl;
	wrongcat1->makeSound();
	wrongcat2->makeSound();
	std::cout << std::endl;

	delete anim;
	delete cat;
	delete dog;
	delete wrongcat1;
	delete wrongcat2;
	system("leaks justlikeanimal");
}
