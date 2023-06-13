#include "ClapTrap.hpp"

int main()
{
    ClapTrap rucio;
    ClapTrap don("Don Quijote");
    ClapTrap zancaz("Zancaz");

    don.attack("windmill");
    zancaz.attack("windmill");
    rucio.attack("windmill");
    don.takeDamage(5);
    zancaz.takeDamage(9);
    rucio.takeDamage(10);
    don.beRepaired(10);
    zancaz.beRepaired(10);
    rucio.beRepaired(10);
    rucio.attack("windmill");
}
