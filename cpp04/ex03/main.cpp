#include "Cure.hpp"
#include "Ice.hpp"

int main()
{
    AMateria * cure = new Cure();
    AMateria * ice = new Ice();
    cure->use();
    ice->use();
    delete cure;
    delete ice;
    return 0;
}