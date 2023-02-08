#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat() : _name(""), _grade(0)
{
	std::cout << "Bureaucrat Default Constructor called." << std::endl;
}

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name(name)
{
	std::cout << "Bureaucrat Name + Grade Constructor called." << std::endl;
	
	checkGrade(grade);
	this->_grade = grade;
}

Bureaucrat::Bureaucrat( const Bureaucrat & src )
{
	std::cout << "Bureaucrat Copy Constructor called." << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Destructor called." << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat &				Bureaucrat::operator=( Bureaucrat const & rhs )
{
	std::cout << "Bureaucrat Copy Assignment Operator called." << std::endl;
	if ( this == &rhs )
		return *this;
	this->_grade = rhs._grade;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i )
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade() << ".\n";
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Bureaucrat::checkGrade( int grade )
{
	if (grade > 150)
		throw GradeTooLowException();
	if (grade < 1)
		throw GradeTooHighException();
}

const char *	Bureaucrat::GradeTooHighException::what()	const throw() // Does not throw an exception.
{
	return "Grade is too high.";
}

const char *	Bureaucrat::GradeTooLowException::what()	const throw()
{
	return "Grade is too low.";
}

void	Bureaucrat::incrementGrade( int num )
{
	checkGrade(this->_grade - num);
	this->_grade -= num;
}

void	Bureaucrat::decrementGrade( int num )
{
	checkGrade(this->_grade + num);
	this->_grade += num;
}

void	Bureaucrat::signFrom( Form & f )	const
{
	try
	{
		if (f.getIsSigned())
			std::cout << this->_name << " couldn't sign " << f.getName() << " because it's already signed." << std::endl;
		else
		{
			f.beSigned(*this);
			std::cout << this->_name << " signed " << f.getName() << "." << std::endl;
		}
	}
	catch (const std::exception& e)
	{
		std::cout << this->_name << " couldn't sign " << f.getName() << " because ";
		std::cerr << e.what() << '\n';
	}
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const std::string	Bureaucrat::getName()	const
{
	return this->_name;
}

int					Bureaucrat::getGrade()	const
{
	return this->_grade;
}


/* ************************************************************************** */