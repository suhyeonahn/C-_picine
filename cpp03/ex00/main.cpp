#include "ClapTrap.hpp"

int main() {
    ClapTrap    louisTrap = ClapTrap("Louis");
    ClapTrap    alexTrap = ClapTrap("Alex");

    for (int i = 0; i < 11; i++) { 
        louisTrap.attack(alexTrap.getName());
        if ( louisTrap.getHitPoints() > 0 && louisTrap.getEnergyPoints() > 0 )
            alexTrap.takeDamage(louisTrap.getAttackDamage());
    }

    louisTrap.beRepaired(5);

    louisTrap.attack(alexTrap.getName());
    if ( louisTrap.getHitPoints() > 0 && louisTrap.getEnergyPoints() > 0 )
        alexTrap.takeDamage(louisTrap.getAttackDamage());
}