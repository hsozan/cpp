#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	public:
		// Constructors / destructor / '=' overload
		AForm();
		virtual ~AForm();
		AForm(std::string name, int grade_to_sign, int grade_to_execute);
		AForm(AForm const & ref);
		AForm & operator=(AForm const & ref);

		// Getters
		const std::string	getName( void ) const;
		int					getGradeToSign( void ) const;
		int					getGradeToExecute( void ) const;
		bool				getSigned( void ) const;

		// Setters
		void				setSigned( const bool new_value);

		// Nested Exception classes:
		class Exception : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public AForm::Exception
		{
			public:
				virtual const char* what() const throw();
		};
		
		class GradeTooHighException : public AForm::Exception
		{
			public:
				virtual const char* what() const throw();
		};

		class UnsignedFormException : public AForm::Exception
		{
			public:
				virtual const char* what() const throw();
		};

		// Functions
		void	be_signed(Bureaucrat & ref);

		//Ex02
		virtual void execute(Bureaucrat const & executor) const = 0;

	private:
		const std::string	_name;
		const int			_grade_to_sign;
		const int			_grade_to_execute;
		bool				_signed;
};

// << overload
std::ostream & operator<<( std::ostream & o, AForm const & rhs);

#endif