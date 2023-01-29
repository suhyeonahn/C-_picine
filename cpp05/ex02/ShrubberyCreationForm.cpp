#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreation", "", 145, 137)
{
	std::cout << "ShrubberyCreationForm Default Constructor called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target) : Form("ShrubberyCreation", target, 145, 137)
{
	std::cout << "ShrubberyCreationForm Target Constructor called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src ) : Form(src)
{
	std::cout << "ShrubberyCreationForm Copy Constructor called." << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm Destructor called." << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm &				ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	std::cout << "ShrubberyCreationForm Copy Assignment Operator called." << std::endl;
	if (this == &rhs)
		return *this;
	Form::operator=(rhs);
	return *this;
}

std::ostream &			operator<<( std::ostream & o, ShrubberyCreationForm const & i )
{
	o << i.getName() << "Form requires " << i.getGradeToSign() << " grade to sign and " 
		<< i.getGradeToExcute() << " grade to excute.\n";
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	ShrubberyCreationForm::execute( Bureaucrat const & executor )	const
{

	if (getIsSigned() && executor.getGrade() <= getGradeToExcute())
	{
		std::string	fileName = this->getTarget() + "_shrubbery";
		std::ofstream file(fileName.c_str());

		std::cout << CYAN << "drawing some trees in " << fileName << " file..." << std::endl << RESET;

		file << "_\\/_                 |                _\\/_" << std::endl;
		file << "/o\\\\             \\       /            //o\\" << std::endl;
		file << " |                 .---.                |" << std::endl;
		file << "_|_______     --  /     \\  --     ______|__" << std::endl;
		file << "         `~^~^~^~^~^~^~^~^~^~^~^~` " << std::endl;

		file.close();
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