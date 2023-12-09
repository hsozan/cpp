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

	for (size_t i = 0; i < 8; i++)
	{
		if (i % 2 == 0)
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

	for (size_t i = 0; i < 8; i++)
	{
		delete anims[i];
	}
	//system("leaks Animals01");
}
