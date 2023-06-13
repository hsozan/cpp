#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "new Zombie created" << std::endl;
}

Zombie::Zombie(std::string name)
{
    std::cout << "Zombie named " << name << " created" << std::endl;
    this->_name = name;
}

Zombie::Zombie(Zombie const &other): _name(other._name)
{}

Zombie::~Zombie()
{
    std::cout << "Zombie named " << this->_name << " destroyed" << std::endl;
}

Zombie newZombie(std::string name)
{
    Zombie zombie1(name);
    return (zombie1);
}

void randomChump(std::string name)
{
    Zombie zombie2(name);
    zombie2.announce();
}

void Zombie::announce(void)
{
    std::cout << this->_name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie:: announcehorde(Zombie *zombies, int N)
{
    for (int i = 0; i < N; i++)
        zombies[i].announce();
}

Zombie *zombieHorde(int N, std::string name)
{
    Zombie *zombies = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        zombies[i].setName(name);
    }
    return (zombies);
}

void Zombie::setName(std::string name)
{
    this->_name = name;
}
