#include "whatever.hpp"

#define RESET   "\033[0m"
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define CYAN    "\033[36m"      /* Cyan */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */

int main()
{
    {
        int a, b;
        a = 5;
        b = 10;
        std::cout << BOLDGREEN << "[ TEST1 ] argument as integer" << std::endl << RESET; 
        std::cout << "Value of a is '" << a << "', value of b is '" << b << "'" << std::endl;
        std::cout << GREEN << "Function template swap() is called." << std::endl << RESET;
        ::swap(a, b);
        std::cout << "=> Value of a is '" << a << "', value of b is '" << b << "'" << std::endl;
        std::cout << GREEN << "Function template min() is called." << std::endl << RESET;
        std::cout << "=> Return value is '" << min(a, b) << "'" << std::endl;
        std::cout << GREEN << "Function template max() is called." << std::endl << RESET;
        std::cout << "=> Return value is '" << max(a, b) << "'" << std::endl << std::endl;
    }
    {
        char c1, c2;
        c1 = 'a';
        c2 = 'z';
        std::cout << BOLDYELLOW << "[ TEST2 ] argument as char" << std::endl << RESET; 
        std::cout << "Value of c1 is '" << c1 << "', value of c2 is '" << c2 << "'" << std::endl;
        std::cout << YELLOW << "Function template swap() is called." << std::endl << RESET;
        ::swap(c1, c2);
        std::cout << "=> Value of c1 is '" << c1 << "', value of c2 is '" << c2 << "'" << std::endl;
        std::cout << YELLOW << "Function template min() is called." << std::endl << RESET;
        std::cout << "=> Return value is '" << min(c1, c2) << "'" << std::endl;
        std::cout << YELLOW << "Function template max() is called." << std::endl << RESET;
        std::cout << "=> Return value is '" << max(c1, c2) << "'" << std::endl << std::endl;
    }
    {
        std::string str1, str2;
        str1 = "string one";
        str2 = "string two";
        std::cout << BOLDCYAN << "[ TEST3 ] argument as string" << std::endl << RESET; 
        std::cout << "Value of str1 is '" << str1 << "', value of str2 is '" << str2 << "'" << std::endl;
        std::cout << CYAN << "Function template swap() is called." << std::endl << RESET;
        ::swap(str1, str2);
        std::cout << "=> Value of str1 is '" << str1 << "', value of str2 is '" << str2 << "'" << std::endl;
        std::cout << CYAN << "Function template min() is called." << std::endl << RESET;
        std::cout << "=> Return value is '" << min(str1, str2) << "'" << std::endl;
        std::cout << CYAN << "Function template max() is called." << std::endl << RESET;
        std::cout << "=> Return value is '" << max(str1, str2) << "'" << std::endl;
    }
}