#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
    std::cout << "Constructor used for creating " << _name << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Destructor used for deleting" << _name << std::endl;
}

Zombie *newZombie(std::string name)
{
    Zombie *zombie1 = new Zombie(name);
    return (zombie1);
}

void randomChump(std::string name)
{
    Zombie zombie2(name);
    zombie2.announce();
}

void Zombie::announce() const
{
	std::cout << this->_name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}