#include "WrongCat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongCat::WrongCat() : WrongAnimal()
{
	this->_type = "WrongCat";
	std::cout << "WrongCat: Default Constructor called" << std::endl;
}

WrongCat::WrongCat( const WrongCat & src ) : WrongAnimal ( src )
{
	std::cout << "WrongCat: Copy Constructor called" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongCat::~WrongCat()
{
	std::cout << "WrongCat: Default Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongCat &				WrongCat::operator=( WrongCat const & rhs )
{
	std::cout << "WrongCat: Copy assignment operator called" << std::endl;
    if (this == &rhs)
        return *this;
    this->_type = rhs._type;
    return *this;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

void    WrongCat::makeSound( void ) const {
    std::cout << "Meow!!!!!" << std::endl;
}

/* ************************************************************************** */