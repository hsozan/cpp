#include "DiamondTrap.hpp"

// Constructors
DiamondTrap::DiamondTrap()
{
    _name = "PrivateAnonymous";
    _hitPoints = FragTrap::_hitPoints;
    _energyPoints = ScavTrap::_energyPoints;
    _attackDamage = FragTrap::_attackDamage;
    std::cout << "Default Constructor called of DiamondTrap " << this->_name << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy) : ClapTrap(copy), ScavTrap(copy), FragTrap(copy)
{
    std::cout << "Copy Constructor called of DiamondTrap " << this->_name << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
    _name = name;
    _hitPoints = FragTrap::_hitPoints;
    _energyPoints = ScavTrap::_energyPoints;
    _attackDamage = FragTrap::_attackDamage;
    std::cout << "Fields Constructor called of DiamondTrap " << this->_name << std::endl;
}

// Destructor
DiamondTrap::~DiamondTrap()
{
    std::cout << "Destructor called of DiamondTrap " << this->_name << std::endl;
}

// Operators
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &assign)
{
    _name = assign._name;
    _hitPoints = assign._hitPoints;
    _energyPoints = assign._energyPoints;
    _attackDamage = assign._attackDamage;
    return *this;
}

// Other Members
void DiamondTrap::attack(const std::string &target)
{
    if (this->_hitPoints > 0 && this->_energyPoints > 0)
    {
        this->_energyPoints--;
        std::cout << "DiamondTrap " << this->_name << " attacks " << target << " causing " << this->_attackDamage << " points of damage!" << std::endl;
    }
    else
        std::cout << "DiamondTrap " << this->_name << " wants to attack but no hit points or energy points left!" << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name: " << this->_name << ", ClapTrap name: " << this->ClapTrap::_name << std::endl;
}
