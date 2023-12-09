#include "FragTrap.hpp"

int main( void )
{
	FragTrap frag("fragName");
	frag.attack("");
	while(frag.getEnergyPoints() > 0)
		frag.attack("Wall");
	frag.attack("Wall");
	frag.setEnergyPoints(2);
	frag.takeDamage(5);
	frag.takeDamage(5);
	frag.takeDamage(5);
	frag.setHitPoints(10);
	frag.takeDamage(5);
	frag.beRepaired(5);
	frag.highFivesGuys();
	//frag.guardGate();


	FragTrap frag2(frag);
	frag2.attack("1");
	frag2.takeDamage(10);
	frag2.beRepaired(10);
	frag2.highFivesGuys();

	ScavTrap scav("scavName");
	scav.attack("2");
	scav.takeDamage(5);
	scav.beRepaired(5);
	scav.guardGate();
	// scav3.highFivesGuys();

	ClapTrap clap("clapName");
	//clap.guardGate();
	// clap.highFivesGuys();
	clap = frag;
	clap.attack("3");
	clap.takeDamage(5);
	clap.beRepaired(5);
	// clap.highFivesGuys();


	return 0;
}