#include "Zombie.hpp"

Zombie*	testNewZombie( void ) {
	Zombie*	zombie = newZombie("Georges");
	return (zombie);
}

int main()
{

	{

		Zombie	robert = Zombie("Robert");
		robert.announce();
	}

	{
		//Zombie*	georges = testNewZombie();
		Zombie	*georges = newZombie("Georges");

		georges->announce();
		delete georges;
	}

	{
		randomChump("Mark");
	}
}