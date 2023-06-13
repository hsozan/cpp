#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
	std::cout << "HumanB constructor is called for " << this->_name << " with no weapon " << std::endl;
}

HumanB::HumanB(std::string name, Weapon &weapon) : _name(name), _weapon(&weapon)
{
	std::cout << "HumanB constructor is called for " << this->_name << " with " << this->_weapon->getType() << " weapon " << std::endl;
}

HumanB::HumanB(HumanB const &human) : _name(human._name)
{
	if (human._weapon)
		this->_weapon = human._weapon;
	else
		this->_weapon = NULL;
}

HumanB::~HumanB()
{}

void	HumanB::attack(void)
{
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}