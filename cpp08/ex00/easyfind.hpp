#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <string>
# include <algorithm>

class NotFoundException : public std::exception
{
	virtual const char * what() const throw()
	{
		return "No occurrence is found.";
	}
};

template<typename T>
typename	T::iterator	easyfind(T & container, const int element)	
{
	// STL algorithm : find()
	typename T::iterator it = std::find(container.begin(), container.end(), element);

	if (it != container.end())
	{
        std::cout << "Element [" << element <<"] found at position : " << it - container.begin() << std::endl;
		return it;
	}
	else
        throw NotFoundException();
}

#endif /* ******************************************************** EASYFIND_H */