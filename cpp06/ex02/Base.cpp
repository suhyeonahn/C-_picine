#include "Base.hpp"

Base::~Base()
{
	std::cout << "Base destructor is called." << std::endl;
}

Base *  generate(void)
{
    switch (rand() % 3)
    {
        case 0:
            return new A();
        case 1:
            return new B();
        case 2:
            return new C();
        default :
            return NULL;
        break;
    }
}

// dynamic_cast works only the pointer that indicates a certain class is eqaul to the demanded class type of cast.

void    identify(Base * p)
{
    if (dynamic_cast<A*>(p) != NULL)
        std::cout << GREEN << "Actual type of the object is " << BOLDWHITE << "A" << std::endl << RESET;
    if (dynamic_cast<B*>(p) != NULL)
        std::cout << GREEN << "Actual type of the object is " << BOLDWHITE << "B" << std::endl << RESET;
    if (dynamic_cast<C*>(p) != NULL)
        std::cout << GREEN << "Actual type of the object is " << BOLDWHITE << "C" << std::endl << RESET;
}

// dynamic_cast returns a reference so it's not possible to simply verify if the return value is NULL or not.
// For that reason using 'try and catch' to catch an exceptoin obj. 
void    identify(Base & p)
{
    try 
    {   (void)dynamic_cast<A&>(p);
        std::cout << GREEN << "Actual type of the object is " << BOLDWHITE << "A" << std::endl << RESET;
    }
    catch(std::exception &e)
    {
        std::cout << RED << "Type Convertion has failed because '" << e.what() << "'" << std::endl << RESET;
    }

    try
    {
        (void)dynamic_cast<B&>(p);
        std::cout << GREEN << "Actual type of the object is " << BOLDWHITE << "B" << std::endl << RESET;
    }
    catch(std::exception &e)
    {
        std::cout << RED << "Type Convertion has failed because '" << e.what() << "'" << std::endl << RESET;
    }

    try
    {
        (void)&dynamic_cast<C&>(p);
        std::cout << GREEN << "Actual type of the object is " << BOLDWHITE << "C" << std::endl << RESET;
    }
    catch(std::exception &e)
    {
        std::cout << RED << "Type Convertion has failed because '" << e.what() << "'" << std::endl << RESET;
    }
}