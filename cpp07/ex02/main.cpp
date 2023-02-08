#include <iostream>
#include <cstdlib>
#include "Array.hpp"

#define RESET   "\033[0m"
#define RED     "\033[31m"      /* Red */
#define CYAN    "\033[36m"      /* Cyan */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */

#define MAX_VAL 50
int main(int, char**)
{
    std::cout << BOLDGREEN << "Creating a empty array..." << std::endl << RESET;
    Array<int> vide = Array<int>();
    std::cout << CYAN << "It's good. empty array has been created =)\n" << std::endl << RESET;
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    std::cout << BOLDGREEN << "Creating a " << MAX_VAL << " size of int array..." << std::endl  << RESET;
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
        std::cout << numbers[i]; 
        if (i != MAX_VAL-1)
            std::cout << ", ";
    }
    std::cout << std::endl << std::endl;
    // SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
        std::cout << BOLDGREEN << "Copying the original array to other arrays" << std::endl << RESET;
        for (int i = 0; i < MAX_VAL; i++)
        {
           std::cout << test[i];
            if (i != MAX_VAL-1)
                std::cout << ", ";
        }
        std::cout << std::endl << std::endl;
    }//
    std::cout << BOLDGREEN << "Checking if the original array saved the right values..." << std::endl << RESET;
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << RED <<  "didn't save the same value!!" << std::endl << RESET;
            return 1;
        }
    }
    std::cout << CYAN << "It has the right values =)\n"  << std::endl << RESET;
    std::cout << BOLDGREEN << "Testing subscript opertor([]) with out of bounds index...\n" << BOLDYELLOW << "***It should print error messages!***" << std::endl << RESET;
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << RED << e.what() << '\n' << RESET;
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << RED << e.what() << '\n' << RESET;
    }
    delete [] mirror;
    return 0;
}