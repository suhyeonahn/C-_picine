#include "Base.hpp"

int main()
{
    {
        std::cout << YELLOW << "[ TEST1 ]Generating a random class..." << std::endl;
        Base * p = generate();
        std::cout << BOLDCYAN << "...Identify the object type with Base pointer..." << std::endl << RESET; 
        identify(p);
        std::cout << BOLDBLUE << "...Identify the object type with Base reference..." << std::endl << RESET;
        identify(*p);
        delete p;
    }

    {
        std::cout << YELLOW << "\n[ TEST2 ]Generating a random class..." << std::endl;
        Base * p = generate();
        std::cout << BOLDCYAN << "...Identify the object type with Base pointer..." << std::endl << RESET;
        identify(p);
        std::cout << BOLDBLUE << "...Identify the object type with Base reference..." << std::endl << RESET;
        identify(*p);
        delete p;
    }

    {
        std::cout << YELLOW << "\n[ TEST3 ]Generating a random class..." << std::endl;
        Base * p = generate();
        std::cout << BOLDCYAN << "...Identify the object type with Base pointer..." << std::endl << RESET; 
        identify(p);
        std::cout << BOLDBLUE << "...Identify the object type with Base reference..." << std::endl << RESET;
        identify(*p);
        delete p;
    }

    {
        std::cout << YELLOW << "\n[ TEST4 ]Generating a random class..." << std::endl;
        Base * p = generate();
        std::cout << BOLDCYAN << "...Identify the object type with Base pointer..." << std::endl << RESET; 
        identify(p);
        std::cout << BOLDBLUE << "...Identify the object type with Base reference..." << std::endl << RESET;
        identify(*p);
        delete p;
    }

    {
        std::cout << YELLOW << "\n[ TEST5 ]Generating a random class..." << std::endl;
        Base * p = generate();
        std::cout << BOLDCYAN << "...Identify the object type with Base pointer..." << std::endl << RESET;
        identify(p);
        std::cout << BOLDBLUE << "...Identify the object type with Base reference..." << std::endl << RESET;
        identify(*p);
        delete p;
    }

    {
        std::cout << YELLOW << "\n[ TEST6 ]Generating a random class..." << std::endl;
        Base * p = generate();
        std::cout << BOLDCYAN << "...Identify the object type with Base pointer..." << std::endl << RESET;
        identify(p);
        std::cout << BOLDBLUE << "...Identify the object type with Base reference..." << std::endl << RESET;
        identify(*p);
        delete p;
    }




}