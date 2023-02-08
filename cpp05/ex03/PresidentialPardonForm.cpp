#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm() : Form("Presidential", "", 25, 5)
{
	std::cout << "PresidentialPardonForm Default Constructor called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : Form("Presidential", target, 25, 5)
{
	std::cout << "PresidentialPardonForm Target Constructor called." << std::endl;

}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src )
{
	std::cout << "PresidentialPardonForm Copy Constructor called." << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm Destructor called." << std::endl;

}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentialPardonForm &				PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	std::cout << "RobotomyReauestForm Copy Assignment Operator called." << std::endl;
	if (this == &rhs)
		return *this;
	Form::operator=(rhs);
	return *this;
}

std::ostream &			operator<<( std::ostream & o, PresidentialPardonForm const & i )
{
	o << i.getName() << "Form requires " << i.getGradeToSign() << " grade to sign and " 
		<< i.getGradeToExcute() << " grade to excute.\n";
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	PresidentialPardonForm::execute( Bureaucrat const & executor )	const
{
	if (getIsSigned() && executor.getGrade() <= getGradeToExcute())
		std::cout << CYAN << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl << RESET;
	else if (!getIsSigned())
		throw NotSignedException();
	else
		throw GradeTooLowException();
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */