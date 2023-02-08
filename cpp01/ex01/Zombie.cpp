#include "Zombie.hpp"

Zombie::Zombie() {
    std::cout << "[ Constructor is called. ]" << std::endl;
}

Zombie::Zombie(std::string name) :_name(name) {
    std::cout << "[ Constructor is called. ]" << std::endl;
}

Zombie::~Zombie() {
    std::cout << "[ Destructor is called. ]" << std::endl;
}

void Zombie::announce(void) const {
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::set_name(std::string name) {
    _name = name;
}