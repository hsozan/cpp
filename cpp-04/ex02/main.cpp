#include "Cat.hpp"
#include "Dog.hpp"
#include <cstdlib>

int main()
{
	Cat cat;
	Dog dog;
	//Animal anim; //not allowed
	//Animal *anim = new Animal(); //not allowed
	Cat cat2(cat);
	std::cout << cat.getBrain().getIdea(0) << std::endl;
	std::cout << dog.getBrain().getIdea(1) << std::endl;
	//system("leaks Animals02");
}
