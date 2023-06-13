#include "FragTrap.hpp"

// Constructors
FragTrap::FragTrap() : ClapTrap()
{
    //_name = "Anonymous";
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "Default Constructor called of FragTrap " << this->_name << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
    //_name = copy._name;
    //_hitPoints = copy._hitPoints;
    //_energyPoints = copy._energyPoints;
    //_attackDamage = copy._attackDamage;
    std::cout << "Copy Constructor called of FragTrap " << this->_name << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    //_name = name;
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "Fields Constructor called of FragTrap " << this->_name << std::endl;
}

// Destructor
FragTrap::~FragTrap()
{
    std::cout << "Destructor called of FragTrap " << this->_name << std::endl;
}

// Operators
FragTrap &FragTrap::operator=(const FragTrap &assign)
{
    _name = assign._name;
    _hitPoints = assign._hitPoints;
    _energyPoints = assign._energyPoints;
    _attackDamage = assign._attackDamage;
    return *this;
}

// Other Members
void FragTrap::attack(const std::string &target)
{
    if (this->_hitPoints > 0 && this->_energyPoints > 0)
    {
        this->_energyPoints--;
        std::cout << "FragTrap " << this->_name << " attacks " << target << " causing " << this->_attackDamage << " points of damage!" << std::endl;
    }
    else
        std::cout << "FragTrap " << this->_name << " wants to attack but no hit points or energy points left!" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap" << this->_name << " wants to high fives now!" << std::endl;
}
