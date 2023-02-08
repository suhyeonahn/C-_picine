#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

class outOfBoundsException : public std::exception
{
	public:
		virtual const char *	what()	const throw()
		{
			return "Index is out of Bounds.";
		}
};

template<class T>
class Array
{

	public:

		/*
		** ------------------------------- CONSTRUCTOR --------------------------------
		*/
		Array() : arr(NULL), _size(0) {}
		Array( unsigned int n) : arr(new T[n]), _size(n) {}
		Array( const Array & src ) : arr(NULL), _size(0)
		{
			*this = src;
		}
		/*
		** -------------------------------- DESTRUCTOR --------------------------------
		*/
		~Array()
		{
			if (this->arr)
				delete[] arr;
		}
		/*
		** --------------------------------- OVERLOAD ---------------------------------
		*/
		Array &		operator=( const Array & rhs )
		{
			if (this == &rhs)
				return *this;
			if (arr)
				delete[] arr;
			if (rhs._size == 0)
				return *this;
			_size = rhs._size;
			arr = new T[_size];
			for (int i = 0; i < _size; i++)
				arr[i] = rhs.arr[i];
			return *this;
		}
		// Any value on the left hand side of an assignment statement must be an l-value (which is a variable that has an actual memory address). Because the result of operator[] can be used on the left hand side of an assignment
		// (e.g. list[2] = 3), the return value of operator[] must be an l-value. As it turns out, references are always l-values, because you can only take a reference of variables that have memory addresses. So by returning a reference,
		// the compiler is satisfied that we are returning an l-value.
		// Consider what would happen if operator[] returned an integer by value instead of by reference. list[2] would call operator[], which would return the value of list.m_list[2]. For example,
		// if m_list[2] had the value of 6, operator[] would return the value 6. list[2] = 3 would partially evaluate to 6 = 3, which makes no sense! If you try to do this, the C++ compiler will complain.
		T	&		operator[]( int index )
		{
			if (index < 0 || index >= _size)
				throw outOfBoundsException();
			return arr[index];
		}
		/*
		** --------------------------------- ACCESSOR ---------------------------------
		*/
		int	size() const
		{
			return _size;
		}

	private:

		T * arr;
		int _size;

};

#endif /* *********************************************************** ARRAY_H */