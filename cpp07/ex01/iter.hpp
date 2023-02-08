#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>
# include <cctype>
# include <iterator>
# include <vector>

template<typename T>
void	iter(T * const array, const std::size_t len, void (*f)(T &))
{
	for (std::size_t i = 0; i < len; i++)
		f(array[i]);
}

template<typename T, int N>
void    printArray(const T (&array)[N])
{
   for (int i = 0; i < N; i++)
   {
        std::cout << array[i];
        if (i != N -1)
            std:: cout << ", ";
   }
    std::cout << std::endl;
}

#endif /* ************************************************************ ITER_H */