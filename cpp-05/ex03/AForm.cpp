# include "AForm.hpp"

AForm::AForm() : _name("Default"), _grade_to_sign(150), _grade_to_execute(150), _signed(0)
{
	std::cout << "A default " << *this << " has been constructed" << std::endl;
}

AForm::~AForm()
{
	std::cout << *this << " has beed destroyed\n";
}

AForm::AForm(std::string name, int grade_to_sign, int grade_to_execute) : _name(name), _grade_to_sign(grade_to_sign), _grade_to_execute(grade_to_execute), _signed(0)
{
	if (_grade_to_sign > 150 || _grade_to_execute > 150)
		throw (AForm::GradeTooLowException());
	else if (_grade_to_sign < 1 || _grade_to_execute < 1)
		throw (AForm::GradeTooHighException());
	else
		std::cout << *this << " has been constructed" << std::endl;
}

AForm::AForm(AForm const & ref) : _name(ref.getName()), _grade_to_sign(ref.getGradeToSign()), _grade_to_execute(ref.getGradeToExecute()), _signed(ref.getSigned())
{
	std::cout << *this << " has been constructed from a copy" << std::endl;
}

AForm & AForm::operator=(AForm const & ref)
{
	this->_signed = ref.getSigned();
	return (*this);
}

// Getters
const std::string	AForm::getName( void ) const
{
	return (this->_name);
}

int					AForm::getGradeToSign( void ) const
{
	return (this->_grade_to_sign);
}

int					AForm::getGradeToExecute( void ) const
{
	return (this->_grade_to_execute);
}

bool				AForm::getSigned( void ) const
{
	return (this->_signed);
}

// Setters
void				AForm::setSigned( const bool new_value)
{
	std::cout << *this << " signed value was set to " << new_value << std::endl;
	this->_signed = new_value;
}

// Nested Exception classes:
const char* AForm::Exception::what() const throw()
{
	return ("FormException");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("the grade is too low");
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("the grade is too high");
};

const char* AForm::UnsignedFormException::what() const throw()
{
	return ("Cannot execute an unsigned form");
};

// << operator overload

std::ostream & operator<<( std::ostream & o, AForm const & rhs)
{
	o << "Form " << rhs.getName() << " having a grade_to_sign " << rhs.getGradeToSign() << " and a grade_to_execute "
		<< rhs.getGradeToExecute() << " with signed equal to " << rhs.getSigned();
	return (o);
}

// Functions
void	AForm::be_signed(Bureaucrat & ref)
{
	int	grade = ref.getGrade();

	if (grade > _grade_to_sign)
	{
		throw (AForm::GradeTooLowException());
		return ;
	}
	_signed = true;
	std::cout << *this << " was just signed by the bureaucrat " << ref.getName() << " with a grade " << ref.getGrade() << std::endl;
}