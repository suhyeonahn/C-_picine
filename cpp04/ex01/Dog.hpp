#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{

	public:

		Dog();
		Dog( Dog const & src );
		~Dog();

		Dog &		operator=( Dog const & rhs );

		void	makeSound( void ) const;
		void	getBrain(){std::cout << _brain << std::endl;}
	private:

		Brain *	_brain;

};

#endif /* ************************************************************* CAT_H */