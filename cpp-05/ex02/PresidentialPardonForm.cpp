#include "PresidentialPardonForm.hpp"

//sign 25, exec 5

PresidentialPardonForm::PresidentialPardonForm() : AForm("Default President Parent", 25, 5)
{
	this->_target = "Default";
	std::cout << "Presidential Pardon " << *this << " has beed defaultly constructed" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("President Parent", 25, 5)
{
	this->_target = target;
	std::cout << "Presidential Pardon " << *this << " has beed constructed" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Presidential Pardon " << *this << " has been destroyed" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & ref) : AForm(ref.getName(), ref.getGradeToSign(), ref.getGradeToExecute())
{
	this->_target = ref.getTarget();
	std::cout << "Presidential Pardon " << *this << " has beed constructed from a copy" << std::endl;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & ref)
{
	this->_target = ref.getTarget();
	return (*this);
}

std::string	PresidentialPardonForm::getTarget( void ) const
{
	return (this->_target);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->getSigned() == false)
		throw (AForm::UnsignedFormException());
	else if (executor.getGrade() > this->getGradeToExecute())
		throw (AForm::GradeTooLowException());
	else
		std::cout << this->_target << " was pardonned by Zafod Beeblebrox\n";
}