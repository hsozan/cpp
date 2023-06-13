#include "Zombie.hpp"

int main()
{
	Zombie *zombie1 = newZombie("Arthur");
	zombie1->announce();
	randomChump("Dent");
	delete zombie1;
}