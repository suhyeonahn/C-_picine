#include "Harl.hpp"

Harl::Harl( void ) {
    complainList[DEBUG].level = "DEBUG";
    complainList[DEBUG].funcPtr = &Harl::debug;
    complainList[INFO].level = "INFO";
    complainList[INFO].funcPtr = &Harl::info;
    complainList[WARNING].level = "WARNING";
    complainList[WARNING].funcPtr = &Harl::warning;
    complainList[ERROR].level = "ERROR";
    complainList[ERROR].funcPtr = &Harl::error;
}

Harl::~Harl() {}

void        Harl::debug( void ) {
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger." << std::endl;
    std::cout << "I really do!" << std::endl << std::endl;
}

void        Harl::info( void ) {
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
    std::cout << "You didn’t put enough bacon in my burger!" << std::endl;
    std::cout << "If you did, I wouldn’t be asking for more!" << std::endl << std::endl;
}

void        Harl::warning( void ) {
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
    std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl << std::endl;
}
void        Harl::error( void ) {
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable!" << std::endl;
    std::cout << "I want to speak to the manager now." << std::endl << std::endl;
}

void        Harl::complain( std::string level ){
    for (int i = 0; i < TOTAL_LEVEL; i++) {
        if (complainList[i].level == level)
            return (this->*complainList[i].funcPtr)();
    }
}
