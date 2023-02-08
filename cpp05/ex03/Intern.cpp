#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
	std::cout << "Intern Default Constructor called." << std::endl;
}

Intern::Intern( const Intern & src )
{
	std::cout << "Intern Copy Constructor called." << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
	std::cout << "Intern Destructor called." << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &				Intern::operator=( Intern const & rhs )
{
	std::cout << "Intern Copy Assignment Operator called." << std::endl;
	if (this == &rhs)
		return *this;
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

Form *	Intern::makeForm(std::string formName, std::string target)
{
	std::string _formName[3];
	_formName[0] = "ShrubberyCreation";
	_formName[1] = "RobotomyRequest";
	_formName[2] = "PresidentialPardon";

	int level = -1;
 	for (int i = 0; i < 3; i++)
	{
		if (_formName[i] == formName)
			level = i;
	}
	
	Form * f = NULL;
	switch (level)
	{
		case 0: {
			f = new ShrubberyCreationForm(target);
			break;
		}
		case 1: {
			f = new RobotomyRequestForm(target);
			break;
		}
		case 2: {
			f = new PresidentialPardonForm(target);
			break;
		}
		default: {
			std::cout << RED << "Intern failed to make a form since form name is inappropriate." << std::endl << RESET;
		}
	}
	return f;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */