#include "easyfind.hpp"
#include <vector>
#include <deque>
#include <stack>

#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */
#define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */

int main()
{
    std::cout << BOLDGREEN << "[ TEST1 ] Vector container" << std::endl << RESET;
    {
        std::vector<int> numbers;
        numbers.push_back(10);
        numbers.push_back(90);
        numbers.push_back(120);
        try
        {
            easyfind(numbers, 90);
        }
        catch(const std::exception& e)
        {
            std::cerr << RED << e.what() << '\n' << RESET;
        }
        try
        {
            easyfind(numbers, 0);
        }
        catch(const std::exception& e)
        {
            std::cerr << RED << e.what() << '\n' << RESET;
        }
        try
        {
            easyfind(numbers, 150);
        }
        catch(const std::exception& e)
        {
            std::cerr << RED << e.what() << '\n' << RESET;
        }
    }
    std::cout << BOLDGREEN << "[ TEST2 ] Deque container" << std::endl << RESET;
    {
        std::deque<int> numbers;
        numbers.push_back(10);
        numbers.push_back(90);
        numbers.push_back(120);
        try
        {
            easyfind(numbers, -10);
        }
        catch(const std::exception& e)
        {
            std::cerr << RED << e.what() << '\n' << RESET;
        }
                try
        {
            easyfind(numbers, 10);
        }
        catch(const std::exception& e)
        {
            std::cerr << RED << e.what() << '\n' << RESET;
        }
                try
        {
            easyfind(numbers, 900);
        }
        catch(const std::exception& e)
        {
            std::cerr << RED << e.what() << '\n' << RESET;
        }
    }
}