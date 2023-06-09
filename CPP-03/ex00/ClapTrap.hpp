#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
public:
	// Constructors
	ClapTrap();
	ClapTrap(const ClapTrap &copy);
	ClapTrap(std::string name);

	// Destructor
	~ClapTrap();

	// Operators
	ClapTrap &operator=(const ClapTrap &assign);

	// Getters / Setters
	std::string getName() const;
	int getHitPoints() const;
	int getEnergyPoints() const;
	int getAttackDamage() const;

	// Other Members
	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

private:
	std::string _name;
	int _hitPoints;
	int _energyPoints;
	int _attackDamage;
};

#endif
