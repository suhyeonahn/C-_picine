#include "Span.hpp"

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
    std::cout << BOLDGREEN << "[ TEST1 ]" << std::endl << RESET;
    {
        Span sp = Span(5);
        try
        {
            sp.addNumber(6);
            sp.addNumber(3);
            sp.addNumber(17);
            sp.addNumber(9);
            sp.addNumber(11);
        }
        catch(const std::exception& e)
        {
            std::cerr << RED << e.what() << '\n' << RESET;
        }
        std::cout << "Elements of container 'sp' : ";
        sp.print();
        std::cout << "Shortest span is : '"  << sp.shortestSpan() << "'" << std::endl;
        std::cout << "Longest span is : '" << sp.longestSpan() << "'" <<std::endl;

        Span spCopy = Span(5);
        spCopy.fillAll(sp.getContainer().begin(), sp.getContainer().end());
        std::cout << "Elements of container 'spCopy' : ";
        spCopy.print();
    }
    std::cout << BOLDGREEN << "[ TEST2 ] Error case(1)" << std::endl << RESET;
    {
        Span sp = Span(5);
        try
        {
            sp.addNumber(6);
            sp.addNumber(3);
            sp.addNumber(17);
            sp.addNumber(9);
            sp.addNumber(11);
            sp.addNumber(12);
        }
        catch(const std::exception& e)
        {
            std::cerr << RED << e.what() << '\n' << RESET;
        }
    }
    std::cout << BOLDGREEN << "[ TEST3 ] Error case(2)" << std::endl << RESET;
    {
        Span sp = Span();
        try
        {
            std::cout << sp.shortestSpan() << std::endl;
            //std::cout << sp.longestSpan() << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << RED << e.what() << '\n' << RESET;
        } 
    }
    /*std::cout << BOLDGREEN << "[ TEST4 ] Big vector container" << std::endl << RESET;
    {
        std::vector<int> container(1000000, 999);
        Span sp = Span(1000000);
        std::cout << "Elements of container 'sp' : ";
        sp.fillAll(container.begin(), container.end());
        sp.print();
        try
        {
            std::cout << sp.shortestSpan() << std::endl;
            //std::cout << sp.longestSpan() << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << RED << e.what() << '\n' << RESET;
        } 
    }*/
}