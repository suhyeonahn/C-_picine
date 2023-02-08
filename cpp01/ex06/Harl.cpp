#include "Harl.hpp"

Harl::Harl( std::string level) {
    complainList[DEBUG] = "DEBUG";
    complainList[INFO] = "INFO";
    complainList[WARNING] = "WARNING";
    complainList[ERROR] = "ERROR";

    _level = -1;
    for (int i = 0; i < TOTAL_LEVEL; i++) {
        if ( complainList[i] == level)
            _level = i;
    }
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

void        Harl::silence( void ) {
    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

void        Harl::complain( void ) {

    switch ( _level ) {
        case DEBUG: {
            this->debug();
        }
        case INFO: {
            this->info();
        }
        case WARNING: {
            this->warning();
        }
        case ERROR: {
            this->error();
            break;
        }
        default:
            this->silence();
    }
}