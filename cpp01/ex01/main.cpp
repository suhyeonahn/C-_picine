#include "Zombie.hpp"

int main()
{
	{
        Zombie *robertHorde = zombieHorde(5, "Robert");
		
        for (int i = 0; i < 5; i++) {
            robertHorde[i].announce();
        }

        delete[] robertHorde;
	}
}