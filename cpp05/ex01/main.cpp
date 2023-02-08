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
    std::cout << BOLDGREEN << "TEST1 [ Construct From with too low grade to sign ]" << std::endl << RESET;
    try
    {
        Form  i = Form("Paris Project", 151, 100);
        std::cout << i;
    }
    catch (std::exception & e)
    {
        std::cout << RED << "coudn't construct because "
        << e.what() << std::endl;
    }


    std::cout << BOLDBLUE << "\nTEST2 [ Construct Form with too high grade to excute ]" << std::endl << RESET;
    try
    {
        Form  i = Form("Seoul Project", 100, 0);
        std::cout << i;
    }
    catch (std::exception & e)
    {
        std::cout << RED << "coudn't construct because "
        << e.what() << std::endl;
    }

    std::cout << BOLDMAGENTA << "\nTEST3 [ Bureaucrat tries to sign but fails]" << std::endl << RESET;
    {
        Bureaucrat i = Bureaucrat("Sophie", 100);
        Form    j = Form("Form", 80, 100);

        std::cout << RED;
        i.signFrom(j);
        std::cout << RESET;

    }

     std::cout << BOLDYELLOW << "\nTEST4 [ Bureaucrat suceeds to sign ]" << std::endl << RESET;
    {
        Bureaucrat i = Bureaucrat("Leo", 100);
        Form    j = Form("Form", 120, 140);

        std::cout << CYAN;
        i.signFrom(j);
        std::cout << RESET;

    }
}