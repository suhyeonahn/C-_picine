#include <iostream>

int main() {
    std::string str = "HI THIS IS BRAIN";
    std::string* strPtr = &str;
    std::string& strRef = str;

    std::cout << "[ Memory address of string ] " << &str << "\n"
        << "[ Memory address held by stringPTR ] " << &(*strPtr) << "\n"
        << "[ Memory address held by stringREF ] " << &strRef << std::endl << std::endl;
    
    std::cout << "[ Value of string variable ] " << str << "\n"
        << "[ Value pointed to by stringPTR ] " << *strPtr << "\n"
        << "[ Value pointed to by stringREF ] " << strRef << std::endl;
}