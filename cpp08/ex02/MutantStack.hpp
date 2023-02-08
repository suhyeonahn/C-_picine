#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <stack>
# include <list>

template<typename T>
class MutantStack : public std::stack<T>
{

	public:

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/
		MutantStack(){}
		MutantStack( MutantStack const & src )
		{
			*this = src;
		}
/*
** -------------------------------- DESTRUCTOR --------------------------------
*/
		~MutantStack(){}
/*
** --------------------------------- OVERLOAD ---------------------------------
*/
		MutantStack &		operator=( MutantStack const & rhs )
		{
			(void)rhs;
			return *this;
		}
/*
** --------------------------------- METHODS ----------------------------------
*/
	// *** Stack class ***
	//template<class _Ty,
	//class _Container = deque<_Ty> >
	//class stack
	//{ 
    // ...
    //
    //protected:
	//_Container c;	// the underlying container
	//};
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator	begin()
		{
			return std::stack<T>::c.begin();
		}
		iterator	end()
		{
			return std::stack<T>::c.end();
		}
};

#endif /* ***************************************************** MUTANTSTACK_H */