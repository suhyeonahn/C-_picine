#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>

class AMateria
{
    private:

        AMateria();

    protected:

        std::string _type;

    public:

        AMateria( std::string const & type);
        AMateria( AMateria const & other );
        AMateria & operator=( AMateria const & other );
        virtual ~AMateria();

        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use() = 0;

};

#endif