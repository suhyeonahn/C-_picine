#include "ScavTrap.hpp"

int main() {
    {
        ScavTrap    louisTrap = ScavTrap("Louis");
        ScavTrap    alexTrap = ScavTrap("Alex");

        for (int i = 0; i < 5; i++) { 
            louisTrap.attack(alexTrap.getName());
            if ( louisTrap.getHitPoints() > 0 && louisTrap.getEnergyPoints() > 0 )
                alexTrap.takeDamage(louisTrap.getAttackDamage());
        }
        
        alexTrap.attack(louisTrap.getName());
        if ( alexTrap.getHitPoints() > 0 && alexTrap.getEnergyPoints() > 0 )
            louisTrap.takeDamage(alexTrap.getAttackDamage());

        alexTrap.beRepaired(5);

        louisTrap.attack(alexTrap.getName());
        if ( louisTrap.getHitPoints() > 0 && louisTrap.getEnergyPoints() > 0 )
            alexTrap.takeDamage(louisTrap.getAttackDamage());
        louisTrap.guardGate();
    }

    std::cout << std::endl;
    {
        ClapTrap    louisTrap = ClapTrap("Louis");
        ScavTrap    alexTrap = ScavTrap("Alex");

        for (int i = 0; i < 5; i++) { 
            louisTrap.attack(alexTrap.getName());
            if ( louisTrap.getHitPoints() > 0 && louisTrap.getEnergyPoints() > 0 )
                alexTrap.takeDamage(louisTrap.getAttackDamage());
        }

        alexTrap.attack(louisTrap.getName());
        if ( alexTrap.getHitPoints() > 0 && alexTrap.getEnergyPoints() > 0 )
            louisTrap.takeDamage(alexTrap.getAttackDamage());

        alexTrap.beRepaired(5);

        louisTrap.attack(alexTrap.getName());
        if ( louisTrap.getHitPoints() > 0 && louisTrap.getEnergyPoints() > 0 )
            alexTrap.takeDamage(louisTrap.getAttackDamage());
    }

}