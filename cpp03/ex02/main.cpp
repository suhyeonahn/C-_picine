#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    std::cout << std::endl;
    {
        FragTrap    alexTrap = FragTrap("Alex");
        ScavTrap    martinTrap  = ScavTrap("Martin");

        for (int i = 0; i < 5; i++) { 
            alexTrap.attack(martinTrap.getName());
            if ( alexTrap.getHitPoints() > 0 && alexTrap.getEnergyPoints() > 0 )
                martinTrap.takeDamage(alexTrap.getAttackDamage());
        }
        
        martinTrap.attack(alexTrap.getName());
        if ( martinTrap.getHitPoints() > 0 && martinTrap.getEnergyPoints() > 0 )
            alexTrap.takeDamage(martinTrap.getAttackDamage());

        alexTrap.beRepaired(5);

        alexTrap.attack(martinTrap.getName());
        if ( alexTrap.getHitPoints() > 0 && alexTrap.getEnergyPoints() > 0 )
            martinTrap.takeDamage(alexTrap.getAttackDamage());

        martinTrap.guardGate();
        alexTrap.highFivesGuys();
    }
}