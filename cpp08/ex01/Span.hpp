#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>
# include <algorithm>
# include <iterator>

class Span
{

	public:

		Span();
		Span( unsigned int size );
		Span( Span const & src );
		~Span();

		Span &		operator=( Span const & rhs );

		class	OverSizeException : public std::exception
		{
			virtual const char * what() const throw();
		};
		class	NoSpanException : public std::exception
		{
			virtual const char * what() const throw();
		};
		
		unsigned int	shortestSpan() const;
		unsigned int	longestSpan() const;
		void			addNumber( int N );
		void			fillAll(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		void			print();

		std::vector<int> & getContainer();

	private:
		std::vector<int>	_container;
		unsigned int		_size;

};

#endif /* ************************************************************ SPAN_H */