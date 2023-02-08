#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    Animal  *meta[6];

    std::cout << "[ Loading Dogs... ]" << std::endl;
    for (int i = 0; i < 3; i++)
    {
        meta[i] = new Dog();
        std::cout << meta[i]->getType() << ": ";
        meta[i]->makeSound();
        std::cout << std::endl;
    }
    std::cout << "\n\n[ Loading Cats... ]" << std::endl;
    for (int i = 3; i < 6; i++)
    {
        meta[i] = new Cat();
        std::cout << meta[i]->getType() << ": ";
        meta[i]->makeSound();
        std::cout << std::endl;
    }

    std::cout << "\n\n[ Deleting table... ]" << std::endl;
    for (int i = 0; i < 6; i++)
    {
        delete meta[i];
        std::cout << std::endl;
    }

    std::cout << "\n\n[ Testing copy constructor... ]" << std::endl;
    Dog a;
    {
        Dog b = a;
        std::cout << "\nAddress of Dog a : " << &a << std::endl;
        std::cout << "Address of Dog b : " << &b << std::endl << std::endl;
        a.getBrain();
        b.getBrain();
    }
}