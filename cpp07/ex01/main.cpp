#include "iter.hpp"

#define RESET   "\033[0m"
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */

void    square(int & n)
{
    n *= n;
}

void    upperChar(char & c)
{
    c = toupper(c);
}

int main()
{   
    {
        std::cout << BOLDGREEN << "[ TEST1 ] argument as integer" << std::endl << RESET;
        int t1[3] = {1 ,2, 3};
        std::cout << GREEN << " Original Int Array is\n => " << RESET;
        printArray(t1);
        iter(t1, sizeof(t1)/sizeof(int), square);
        std::cout << GREEN << " Array after iter() is called\n => " << RESET;
        printArray(t1);
    }
    {
        std::cout << BOLDYELLOW << "\n[ TEST2 ] argument as char" << std::endl << RESET; 
        char t2[4] = {'a', 'b', 'c', 'd'};
        std::cout << YELLOW << " Original Char Array is\n => " << RESET;
        printArray(t2);
        iter(t2, sizeof(t2)/sizeof(char), upperChar);
        std::cout << YELLOW << " Array after iter() is called\n => " << RESET;
        printArray(t2);
    }
}