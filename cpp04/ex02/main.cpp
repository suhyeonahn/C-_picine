#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    // base abstract class - not instantiable
    //Animal j = Dog();
    
    Animal* i = new Dog();

    std::cout << std::endl << i->getType() << ": ";
    i->makeSound();
    std::cout << std::endl;

    delete i;
}