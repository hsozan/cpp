#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* anim = new Animal();
	const Animal* cat = new Cat("Siamese");
	const Animal* dog = new Dog("Bulldog");
	Animal a("sda");
	const WrongAnimal* wrongcat1 = new WrongCat("Garfield");
	const WrongCat* wrongcat2 = new WrongCat("Tom");

	std::cout << cat->getType() << std:: endl;
	std::cout << dog->getType() << std::endl;
	std::cout << wrongcat1->getType() << std::endl;
	std::cout << wrongcat2->getType() << std::endl;
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
	//system("leaks Animals");
}
