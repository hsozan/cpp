#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Dog : public Animal
{
public:
	// Constructors
	Dog();
	Dog(const Dog &copy);
	Dog(std::string type);

	// Destructor
	virtual ~Dog();

	// Operators
	Dog &operator=(const Dog &assign);

	void makeSound() const;

private:
};

#endif
