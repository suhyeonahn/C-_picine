#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
# include "Form.hpp"

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
    std::cout << BOLDGREEN << "TEST1 [ Tries to execute Shrubbery Creation Form but fails cuz it's not signed ]" << std::endl << RESET;
    {
        Bureaucrat *i = new Bureaucrat("Leo", 50);
        Form  *j = new ShrubberyCreationForm("Paris");

        i->executeForm(*j);
        delete i;
        delete j;
    }
    std::cout << BOLDBLUE << "\nTEST2 [ Attempt to sign Shrubbery Creation Form fails so excute fails also ]" << std::endl << RESET;
    {
        Bureaucrat *i = new Bureaucrat("Leo", 149);
        Form  *j = new ShrubberyCreationForm("Paris");

        i->signForm(*j);
        i->executeForm(*j);
        delete i;
        delete j;
    }
    std::cout << BOLDMAGENTA << "\nTEST3 [ Tries to excute Shrubbery Creation Form and suceeds ]" << std::endl << RESET;
    {
        Bureaucrat *i = new Bureaucrat("Leo", 50);
        Form  *j = new ShrubberyCreationForm("Paris");

        i->signForm(*j);
        i->executeForm(*j);
        delete i;
        delete j;
    }
    std::cout << BOLDYELLOW << "\nTEST4 [ Bureaucrat failes to excute Robotomy Reauest Form ]" << std::endl << RESET;
    {
        Bureaucrat *i = new Bureaucrat("Leo", 100);
        Form  *j = new RobotomyRequestForm("Paris");

        i->signForm(*j);
        i->executeForm(*j);
        delete i;
        delete j;
    }
    std::cout << BOLDGREEN << "\nTEST5 [ Bureaucrat suceeds to excute Robotomy Reauest Form ]" << std::endl << RESET;
    {
        Bureaucrat *i = new Bureaucrat("Leo", 40);
        Form  *j = new RobotomyRequestForm("Paris");

        i->signForm(*j);
        i->executeForm(*j);
        delete i;
        delete j;
    }
    std::cout << BOLDBLUE << "\nTEST6 [ Bureaucrat fails to excute Presidential Pardon Form ]" << std::endl << RESET;
    {
        Bureaucrat *i = new Bureaucrat("Leo", 20);
        Form  *j = new PresidentialPardonForm("Paris");

        i->signForm(*j);
        i->executeForm(*j);
        delete i;
        delete j;
    }
    std::cout << BOLDMAGENTA << "\nTEST7 [ Bureaucrat suceeds to excute Presidential Pardon Form ]" << std::endl << RESET;
    {
        Bureaucrat *i = new Bureaucrat("Leo", 1);
        Form  *j = new PresidentialPardonForm("Paris");

        i->signForm(*j);
        i->executeForm(*j);
        delete i;
        delete j;
    }
}