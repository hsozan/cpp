#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

class AForm;

class Intern
{
	public:
		// Canonic class methods:
		Intern();
		~Intern();
		Intern(Intern const & ref);
		Intern & operator=(Intern const & ref);

		// Subject required method:
		AForm *makeForm(std::string form_name, std::string form_target);

		// Exception:
		class Exception : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

#endif