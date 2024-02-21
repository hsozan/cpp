#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
public:
	// Constructors
	Animal();
	Animal(const Animal &copy);
	Animal(std::string type);

	// Destructor
	virtual ~Animal(); // virtual is needed to call the right destructor

	// Operators
	Animal &operator=(const Animal &assign);

	// Getters / Setters
	std::string getType() const;
	virtual void makeSound() const = 0; // pure virtual function

protected:
	std::string _type;
};

#endif
