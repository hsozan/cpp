#include "Intern.hpp"

// Canonic class methods:
Intern::Intern()
{
	std::cout << "An Intern has been constructed\n";
}

Intern::~Intern()
{
	std::cout << "An Intern has been destroyed\n";
}

// Nothing to copy, an Intern has no name/type or any defining characteristics
Intern::Intern(Intern const & ref)
{
	(void)ref; // remove the "unused argument" warning
	std::cout << "An Intern has been constructed from a copy\n";
}

// Nothing to assign, an Intern has no name/type or any defining characteristics
Intern & Intern::operator=(Intern const & ref)
{
	(void)ref; // remove the "unused argument" warning
	std::cout << "They're the exact same Interns\n";
	return (*this);
}

// Functions to create specific forms

static AForm	*new_robo(std::string target)
{
	AForm	*robo = new RobotomyRequestForm(target);
	return (robo);
}

static AForm	*new_president(std::string target)
{
	AForm	*president = new PresidentialPardonForm(target);
	return (president);
}

static AForm	*new_shrub(std::string target)
{
	AForm	*shrub = new ShrubberyCreationForm(target);
	return (shrub);
}

// Subject required method:
AForm *Intern::makeForm(std::string form_name, std::string form_target)
{
	AForm	*(*fct[3])(std::string target) = { new_robo, new_president, new_shrub};
	std::string	msg[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	AForm	*ret = NULL;
	for (int i = 0; i < 3; i++)
	{
		if (form_name == msg[i])
			ret = fct[i](form_target);
	}
	if (ret)
		std::cout << "Intern creates " << *ret << std::endl;
	else
		throw (Intern::Exception());
	return (ret);
}

// Exception:
const char* Intern::Exception::what() const throw()
{
	return ("Unknown Form exception");
}