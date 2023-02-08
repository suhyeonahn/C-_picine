#include "Span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span() : _size(0)
{}

Span::Span( unsigned int size ) : _size(size)
{}

Span::Span( const Span & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span()
{}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span &				Span::operator=( Span const & rhs )
{
	if ( this == &rhs )
		return *this;
	_size = rhs._size;
	_container = std::vector<int>(rhs._container);
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

const char * Span::OverSizeException::what() const throw()
{
	return "Overflow.";
}

const char * Span::NoSpanException::what() const throw()
{
	return "No span is found.";
}

unsigned int	Span::shortestSpan() const
{
	if (_container.size() <= 1)
		throw NoSpanException();
	std::vector<int> tmp(_container);
	std::sort(tmp.begin(), tmp.end()); // STL algorithm
	int span = tmp[1] - tmp[0];
	for (std::vector<int>::iterator it = tmp.begin(); it != tmp.end() - 1; ++it)
	{
		if (span > *(it + 1) - *(it))
			span = *(it + 1) - *(it);
	}
		return span;
}

unsigned int	Span::longestSpan()	const
{
	if (_container.size() <= 1)
		throw NoSpanException();
	return *std::max_element(_container.begin(), _container.end()) - *std::min_element(_container.begin(), _container.end()); // STL algorithms
}

void	Span::addNumber( int N )
{
	if ( _container.size() == _size)
		throw OverSizeException();
	_container.push_back(N);
	
}

void			Span::fillAll(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	for (std::vector<int>::iterator it = begin ; it != end; ++it)
		addNumber(*it);
}

void			Span::print()
{
	std::cout << "| ";
	std::copy(_container.begin(), _container.end(), std::ostream_iterator<int>( std::cout, " | " ));
	std::cout << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::vector<int> & Span::getContainer()
{
	return _container;
}


/* ************************************************************************** */