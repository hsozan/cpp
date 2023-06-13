#include "ScavTrap.hpp"

// Constructors
ScavTrap::ScavTrap() : ClapTrap()
{
	//_name = "Anonymous";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "Default Constructor called of ScavTrap " << this->_name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
	//_name = copy._name;
	//_hitPoints = copy._hitPoints;
	//_energyPoints = copy._energyPoints;
	//_attackDamage = copy._attackDamage;
	std::cout << "Copy Constructor called of ScavTrap " << this->_name << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	//_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "Fields Constructor called of ScavTrap " << this->_name << std::endl;
}

// Destructor
ScavTrap::~ScavTrap()
{
	std::cout << "Destructor called of ScavTrap " << this->_name << std::endl;
}

// Operators
ScavTrap &ScavTrap::operator=(const ScavTrap &assign)
{
	_name = assign._name;
	_hitPoints = assign._hitPoints;
	_energyPoints = assign._energyPoints;
	_attackDamage = assign._attackDamage;
	return *this;
}

// Other Members
void ScavTrap::attack(const std::string &target)
{
	if (this->_hitPoints > 0 && this->_energyPoints > 0)
	{
		this->_energyPoints--;
		std::cout << "ScavTrap " << this->_name << " attacks " << target << " causing " << this->_attackDamage << " points of damage!" << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->_name << " wants to attack but no hit points or energy points left!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap" << this->_name << " in Gate Keeper mode now!" << std::endl;
}
