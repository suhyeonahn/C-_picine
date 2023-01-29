#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{

	public:

		Animal( Animal const & src );
		virtual	~Animal();

		Animal &		operator=( Animal const & rhs );

		void		setType( std::string type );
		std::string	getType( void ) const;

		virtual void	makeSound( void ) const = 0;

	protected:
	
		std::string	_type;
		Animal();

};

#endif /* ********************************************************** ANIMAL_H */