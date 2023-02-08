#include "MutantStack.hpp"

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
    std::cout << BOLDBLUE << "[ TEST1 ] Create mstack" << std::endl << RESET;
    {
        MutantStack<int> mstack;
        std::cout << GREEN << "Pushing '5' and '17' in 'mstack'..." << std::endl << RESET;
        mstack.push(5);
        mstack.push(17);
        std::cout << "Value at top of 'mstack' : " << mstack.top() << std::endl;
        std::cout << GREEN << "Poping out a value on the top of 'mstack'..." << std::endl << RESET; 
        mstack.pop();
        std::cout << "Size of 'mstack' : " << mstack.size() << std::endl;
        std::cout << GREEN << "Pushing '3', '5', '737' and '0' in 'mstack'..." << std::endl << RESET;
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        mstack.push(0);
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        ++it;
        --it;
        std::cout << "Printing all values in 'mstack'..." << std::endl;
        std::cout << GREEN << "| ";
        while (it != ite)
        {
            std::cout << *it << " | ";
            ++it;
        }
        std::cout << std::endl << std::endl << RESET;
    }
    std::cout << BOLDBLUE <<  "[ TEST2 ] Create list with same values of mstack" << std::endl << RESET;
    {
        std::list<int> list;
        std::cout << GREEN << "Pushing '5' and '17' in 'list'..." << std::endl << RESET;
        list.push_back(5);
        list.push_back(17);
        std::cout << "Value at top of 'list' : " << list.back() << std::endl;
        std::cout << GREEN << "Poping out a value on the top of 'list'..." << std::endl << RESET; 
        list.pop_back();
        std::cout << "Size of 'list' : " << list.size() << std::endl;
        std::cout << GREEN << "Pushing '3', '5', '737' and '0' in 'list'..." << std::endl << RESET;
        list.push_back(3);
        list.push_back(5);
        list.push_back(737);
        list.push_back(0);
        std::list<int>::iterator it = list.begin();
        std::list<int>::iterator ite = list.end();
        ++it;
        --it;
        std::cout << "Printing all values in 'list'..." << std::endl;
        std::cout << GREEN << "| ";
        while (it != ite)
        {
            std::cout << *it << " | ";
            ++it;
        }
        std::cout << RESET << std::endl << std::endl;
    }
    std::cout << BOLDBLUE <<  "[ TEST3 ] Mstack with more iterating" << std::endl << RESET;
    {
        MutantStack<int> mstack;
        std::cout << GREEN << "Pushing 6 numbers '100', '56', '3', '5', '73' and '0' in 'mstack'..." << std::endl << RESET;
        mstack.push(100);
        mstack.push(56);
        mstack.push(3);
        mstack.push(5);
        mstack.push(73);
        mstack.push(0);
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        std::cout << "iterting..." << std::endl;
        ++it;
        --it;
        ++it;
        ++it;
        std::cout << GREEN << "Printing values of 'mstack'... after iterting" << std::endl << RESET;
        std::cout << "| ";
        while (it != ite)
        {
            std::cout << *it << " | ";
            ++it;
        }
    }
}