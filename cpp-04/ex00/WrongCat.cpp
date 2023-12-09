#include "WrongCat.hpp"

// Constructors
WrongCat::WrongCat()
{
	_type = "WrongCat";
	std::cout << "Default Constructor called of " << _type << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy)
{
	_type = copy.getType();
	std::cout << "Copy Constructor called of " << _type << std::endl;
}

WrongCat::WrongCat(std::string type)
{
	_type = type;
	std::cout << "Constructor called of " << _type << std::endl;
}

// Destructor
WrongCat::~WrongCat()
{
	std::cout << "Destructor called of " << _type << std::endl;
}

// Operators
WrongCat &WrongCat::operator=(const WrongCat &assign)
{
	_type = assign.getType();
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat sound" << std::endl;
}
