#include "Cat.hpp"

// Constructors
Cat::Cat()
{
	_type = "Cat";
	std::cout << "Default Constructor called of " << _type << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
	_type = copy.getType();
	std::cout << "Copy Constructor called of " << _type << std::endl;
}

Cat::Cat(std::string type)
{
	_type = type;
	std::cout << "Constructor called of " << _type << std::endl;
}

// Destructor
Cat::~Cat()
{
	std::cout << "Destructor called of " << _type << std::endl;
}

// Operators
Cat &Cat::operator=(const Cat &assign)
{
	_type = assign.getType();
	return *this;
}

void Cat::makeSound() const
{

	std::cout << "Meow" << std::endl;
}
