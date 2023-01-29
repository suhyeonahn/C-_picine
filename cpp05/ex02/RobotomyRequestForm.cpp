#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequest", "", 72, 45)
{
	std::cout << "RobotomyRequestForm Default Constructor called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( std::string target ) : Form("RobotomyRequest", target, 72, 45)
{
	std::cout << "RobotomyRequestForm Target Constructor called." << std::endl;
}


RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src )
{
	std::cout << "RobotomyRequestForm Copy Constructor called." << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm Destructor called." << std::endl;

}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &				RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	std::cout << "RobotomyRequestForm Copy Assignment Operator called." << std::endl;
	if (this == &rhs)
		return *this;
	Form::operator=(rhs);
	return *this;
}

std::ostream &			operator<<( std::ostream & o, RobotomyRequestForm const & i )
{
	o << i.getName() << "Form requires " << i.getGradeToSign() << " grade to sign and " 
		<< i.getGradeToExcute() << " grade to excute.\n";
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	RobotomyRequestForm::execute( Bureaucrat const & executor )	const
{
	std::cout << YELLOW << "DRRRRrrrrrrrrr.....!!!!!!!!!!! (drilling)" << std::endl << RESET;
	if (getIsSigned() && executor.getGrade() <= getGradeToExcute())
	{
		std::cout << CYAN << this->getTarget() << " has been robotomized successfully 50% of the time." << std::endl << RESET;
	}
	else if (!getIsSigned())
		throw NotSignedException();
	else
		throw GradeTooLowException();
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */