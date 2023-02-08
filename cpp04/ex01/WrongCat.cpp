#include "WrongCat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongCat::WrongCat()
{
	std::cout << _type << ": Default Constructor called" << std::endl;
	_type = "WrongCat";
}

WrongCat::WrongCat( const WrongCat & src )
{
	std::cout << _type << ": Copy Constructor called" << std::endl;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongCat::~WrongCat()
{
	std::cout << _type << ": Default Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongCat &				WrongCat::operator=( WrongCat const & rhs )
{
	std::cout << _type << ": Copy assignment operator called" << std::endl;
	if (this == &rhs)
        return *this;
    this->_type = rhs._type;
	return *this;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

void    WrongCat::makeSound ( void ) const {
    std::cout << "Meow!!!!!" << std::endl;
}

/* ************************************************************************** */