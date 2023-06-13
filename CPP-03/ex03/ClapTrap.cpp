#include "ClapTrap.hpp"

// Constructors
ClapTrap::ClapTrap() : _name("Anonymous"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Default Constructor called of ClapTrap " << this->_name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	_name = copy.getName();
	_hitPoints = copy.getHitPoints();
	_energyPoints = copy.getEnergyPoints();
	_attackDamage = copy.getAttackDamage();
	std::cout << "Copy Constructor called of ClapTrap " << this->_name << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	_name = name;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << "Fields Constructor called of ClapTrap " << this->_name << std::endl;
}

// Destructor
ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called of ClapTrap " << this->_name << std::endl;
}

// Operators
ClapTrap &ClapTrap::operator=(const ClapTrap &assign)
{
	_name = assign.getName();
	_hitPoints = assign.getHitPoints();
	_energyPoints = assign.getEnergyPoints();
	_attackDamage = assign.getAttackDamage();
	return *this;
}

// Getters / Setters
std::string ClapTrap::getName() const
{
	return _name;
}
int ClapTrap::getHitPoints() const
{
	return _hitPoints;
}
int ClapTrap::getEnergyPoints() const
{
	return _energyPoints;
}
int ClapTrap::getAttackDamage() const
{
	return _attackDamage;
}

// Other Members
void ClapTrap::attack(const std::string &target)
{
	if (this->_hitPoints > 0 && this->_energyPoints > 0)
	{
		this->_energyPoints--;
		std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing " << this->_attackDamage << " points of damage!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " wants to attack but no hit points or energy points left!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->_hitPoints -= amount;
	std::cout << "ClapTrap " << this->_name << " took " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints > 0 && this->_energyPoints > 0)
	{
		this->_energyPoints--;
		this->_hitPoints += amount;
		std::cout << "ClapTrap " << this->_name << " regained " << amount << " hit points!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " wants to be repaired but no hit points or energy points left!" << std::endl;
}
