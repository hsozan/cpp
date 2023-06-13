#include "Zombie.hpp"

int main(void)
{
    Zombie zombie1;
    zombie1.announce();
    Zombie *zombies = zombieHorde(5, "Bob");
    std::cout << "Say hi!" << std::endl;
    Zombie::announcehorde(zombies, 5);
    delete [] zombies;
    return (0);
}