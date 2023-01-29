#include "Zombie.hpp"

Zombie::Zombie(std::string name) :_name(name) {
    std::cout << _name << " [ Constructor is called. ]" << std::endl;
}

Zombie::~Zombie() {
    std::cout << _name << " [ Destructor is called. ]" << std::endl << std::endl;
}

void Zombie::announce(void) const {
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}