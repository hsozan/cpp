#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <iomanip>
#include <fstream>

class AForm;

class ShrubberyCreationForm : public AForm
{
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm();
		ShrubberyCreationForm(ShrubberyCreationForm const & ref);
		ShrubberyCreationForm & operator=(ShrubberyCreationForm const & ref);
		
		std::string	getTarget( void ) const;
		
		void execute(Bureaucrat const & executor) const;
	private:
		std::string	_target;
};

#endif