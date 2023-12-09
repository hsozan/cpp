#include "Dog.hpp"

// Constructors
Dog::Dog()
{
	_type = "Dog";
	std::cout << "Default Constructor called of " << _type << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
	_type = copy.getType();
	std::cout << "Copy Constructor called of " << _type << std::endl;
}

Dog::Dog(std::string type)
{
	_type = type;
	std::cout << "Constructor called of " << _type << std::endl;
}

// Destructor
Dog::~Dog()
{
	std::cout << "Destructor called of " << _type << std::endl;
}

// Operators
Dog &Dog::operator=(const Dog &assign)
{
	_type = assign.getType();
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Bark" << std::endl;
}
