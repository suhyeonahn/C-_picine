#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form() : _name(""), _isSigned(0), _gradeToSign(150), _gradeToExcute(150)
{
	std::cout << "Form Default Constructor called." << std::endl;
}

Form::Form( std::string name, int gradeToSign, int gradeToExcute ) : _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExcute(gradeToExcute)
{
	std::cout << "Form Name + Grade Constructor called." << std::endl;
	checkGrade(gradeToSign);
	checkGrade(gradeToExcute);
}

Form::Form( const Form & src ) : _gradeToSign(150), _gradeToExcute(150)
{
	std::cout << "From Copy Constructor called." << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
	std::cout << "Form Destructor called." << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &				Form::operator=( Form const & rhs )
{
	std::cout << "Form Copy Assignment Operator called." << std::endl;
	if (this == &rhs)
		return *this;
	this->_isSigned = rhs._isSigned;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	o << i.getName() << "Form requires " << i.getGradeToSign() << " grade to sign and " 
		<< i.getGradeToExcute() << " grade to excute.\n";
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Form::checkGrade( int grade )
{
	if (grade > 150)
		throw GradeTooLowException();
	if (grade < 1)
		throw GradeTooHighException();
}

const char *	Form::GradeTooHighException::what()	const throw() // Does not throw an exception.
{
	return "Grade is too high.";
}

const char *	Form::GradeTooLowException::what()	const throw()
{
	return "Grade is too low.";
}

void				Form::beSigned(const Bureaucrat & b)
{
	if (b.getGrade() > this->_gradeToSign)
		throw GradeTooLowException();
	this->_isSigned = true;

}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const std::string	Form::getName()				const
{
	return this->_name;
}

bool				Form::getIsSigned()			const
{
	return this->_isSigned;
}

int					Form::getGradeToSign()		const
{
	return this->_gradeToSign;
}

int					Form::getGradeToExcute()	const
{
	return this->_gradeToExcute;
}


/* ************************************************************************** */