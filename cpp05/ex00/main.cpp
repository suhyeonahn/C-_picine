#include "Bureaucrat.hpp"

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
    std::cout << BOLDGREEN << "TEST1 [ increment grade suceeds ]" << std::endl << RESET;
    try
    {
        Bureaucrat  i = Bureaucrat("James", 40);
        std::cout << i;
        i.incrementGrade(30);
        std::cout << i;
    }
    catch (std::exception & e)
    {
        std::cout << RED << "can't increment because " 
        << e.what() << std::endl;
    }
    std::cout << BOLDBLUE << "\nTEST2 [ increment grade too high ]" << std::endl << RESET;
    try
    {
        Bureaucrat  i = Bureaucrat("James", 40);
        std::cout << i;
        i.incrementGrade(50);
        std::cout << i;
    }
    catch (std::exception & e)
    {
        std::cout << RED << "can't increment because " 
        << e.what() << std::endl;
    }

    std::cout << BOLDMAGENTA << "\nTEST3 [ construct with too high grade ]" << std::endl << RESET;
    try
    {
        Bureaucrat  i = Bureaucrat("Naomi", 0);
        std::cout << i;
    }
    catch (std::exception & e)
    {
        std::cout << RED << "can't construct because "
        << e.what() << std::endl;
    }

    std::cout << BOLDYELLOW << "\nTEST4 [ construct with too low grade ]" << std::endl << RESET;
    try
    {
        Bureaucrat  i = Bureaucrat("Rose", 151);
        std::cout << i;
    }
    catch (std::exception & e)
    {
        std::cout << RED << "can't construct because "
        << e.what() << std::endl << RESET;
    }

}