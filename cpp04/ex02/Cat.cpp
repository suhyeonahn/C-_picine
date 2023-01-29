#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat( void ) : Animal ()
{
    std::cout << "Cat" << ": Default Constructor called" << std::endl;
    this->_type = "Cat";
    this->_brain = new Brain();
}

Cat::Cat( const Cat & src ) : Animal ( src )
{
	std::cout << "Cat" << ": Copy Constructor called" << std::endl;
    this->_brain = new Brain();
    *this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
	std::cout << "Cat" << ": Default Destructor called" << std::endl;
    delete this->_brain;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &				Cat::operator=( Cat const & rhs )
{
    std::cout << "Cat" << ": Copy assignment operator called" << std::endl;
    if (this == &rhs)
        return *this;
    Animal::operator=(rhs);
    *(this->_brain) = *(rhs._brain);
	return *this;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

void    Cat::makeSound ( void ) const {
    std::cout << "Meow" << std::endl;
}


/* ************************************************************************** */