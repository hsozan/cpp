#include "ClapTrap.hpp"

int main()
{
    ClapTrap simple;
    ClapTrap a("AAA");
    ClapTrap b("BBB");

    a.attack("wall");
    b.attack("");
    simple.attack("wall");
    a.takeDamage(5);
    b.takeDamage(9);
    simple.takeDamage(10);
    a.beRepaired(10);
    b.beRepaired(10);
    simple.beRepaired(10);
    simple.attack("wall");
}
