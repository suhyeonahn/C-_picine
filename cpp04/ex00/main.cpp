#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    {
        std::cout << "TEST1" << std::endl;

        const Animal* meta = new Animal();
        const Animal* j = new Dog();
        const Animal* i = new Cat();

        std::cout << std::endl << i->getType() << ": ";
        i->makeSound();
        std::cout << std::endl;

        std::cout << j->getType() << ": ";
        j->makeSound();
        std::cout << std::endl;

        std::cout << meta->getType() << ": ";
        meta->makeSound();
        std::cout << std::endl;

        delete meta;
        delete j;
        delete i;
    }
    {
        std::cout << "\nTEST2" << std::endl;

        const WrongAnimal* meta = new WrongAnimal();
        const WrongAnimal* i = new WrongCat();

        std::cout << std::endl << i->getType() << ": ";
        i->makeSound();
        std::cout << std::endl;

        std::cout << meta->getType() << ": ";
        meta->makeSound();
        std::cout << std::endl;


        delete meta;
        delete i;
    }
    {
        std::cout << "\nTEST3" << std::endl;
        Dog i;
        Dog j = i;

        std::cout << "\nAddress of first class Dog: " << &i << std::endl;
        std::cout << "Address of second class Dog: " << &j << std::endl;
        i.setType("Cat");

        std::cout << "\nI am a " << i.getType() << std::endl << std::endl;
        i = j;
        std::cout << "\nNow i became a " << i.getType() << std::endl << std::endl;
    }
    return 0;
}