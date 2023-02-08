#include "DiamondTrap.hpp"

int main() {
    std::cout << std::endl;
    {
        DiamondTrap    alexTrap = DiamondTrap("Alex");
        DiamondTrap    martinTrap = alexTrap;
        //DiamondTrap*    martinTrap  = new DiamondTrap("Martin");

        std::cout << alexTrap.ClapTrap::getEnergyPoints() << std::endl;
        std::cout << alexTrap.FragTrap::getEnergyPoints() << std::endl;
        std::cout << alexTrap.getEnergyPoints() << std::endl;

        std::cout << martinTrap.ClapTrap::getEnergyPoints() << std::endl;
        std::cout << martinTrap.FragTrap::getEnergyPoints() << std::endl;
        std::cout << martinTrap.getEnergyPoints() << std::endl;

            alexTrap.attack(martinTrap.getName());
            if ( alexTrap.getHitPoints() > 0 && alexTrap.getEnergyPoints() > 0 )
                martinTrap.ScavTrap::takeDamage(alexTrap.getAttackDamage());
        
        martinTrap.attack(alexTrap.getName());
        if ( martinTrap.getHitPoints() > 0 && martinTrap.getEnergyPoints() > 0 )
            alexTrap.ScavTrap::takeDamage(martinTrap.getAttackDamage());

        alexTrap.ScavTrap::beRepaired(5);

        alexTrap.attack(martinTrap.getName());
        if ( alexTrap.getHitPoints() > 0 && alexTrap.getEnergyPoints() > 0 )
            martinTrap.ScavTrap::takeDamage(alexTrap.getAttackDamage());

        martinTrap.guardGate();
        alexTrap.highFivesGuys();
        martinTrap.whoAmI();
        alexTrap.whoAmI();
    }
}