#include "ScavTrap.hpp"

int main()
{
    ScavTrap scav("scavtrap");
    ScavTrap scav2(scav);
    ScavTrap scav3;
    ClapTrap clapTrap(scav);
    scav3 = scav2;

    scav3.attack("wall");
    scav3.takeDamage(5);
    scav3.beRepaired(5);

    scav3.guardGate();
    scav3.guardGate();

    while (scav3.getEnergyPoints() > 0)
        scav3.attack("wall");
    return (0);
}
