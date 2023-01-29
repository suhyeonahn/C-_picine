#include "WrongAnimal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
	std::cout << _type << ": Default Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal & src )
{
	std::cout << _type << ": Copy Constructor called" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongAnimal::~WrongAnimal()
{
	std::cout << _type << ": Default Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongAnimal &				WrongAnimal::operator=( WrongAnimal const & rhs )
{
	std::cout << _type << ": Copy assignment operator called" << std::endl;
	if (this == &rhs)
        return *this;
    this->_type = rhs.getType();
    return *this;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

void		WrongAnimal::setType( std::string type)
{
	this->_type = type;
}

std::string WrongAnimal::getType( void ) const
{
    return this->_type;
}

void	WrongAnimal::makeSound( void ) const
{
    std::cout << "..." << std::endl;
}

/* ************************************************************************** */