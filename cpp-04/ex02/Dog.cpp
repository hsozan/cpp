#include "Dog.hpp"

// Constructors
Dog::Dog()
{
	_type = "Dog";
	_dogBrain = new Brain();
	std::cout << "Default Constructor called of " << _type << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
	_type = copy.getType();
	_dogBrain = new Brain(copy.getBrain());
	std::cout << "Copy Constructor called of " << _type << std::endl;
}

Dog::Dog(std::string type)
{
	_type = type;
	_dogBrain = new Brain();
	std::cout << "Constructor called of " << _type << std::endl;
}

// Destructor
Dog::~Dog()
{
	delete _dogBrain;
	std::cout << "Destructor called of " << _type << std::endl;
}

// Operators
Dog &Dog::operator=(const Dog &assign)
{
	_type = assign.getType();
	_dogBrain = new Brain(assign.getBrain());
	std::cout << "Assign Operator called of " << _type << std::endl;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Bark" << std::endl;
}

const Brain &Dog::getBrain() const
{
	return *_dogBrain;
}
