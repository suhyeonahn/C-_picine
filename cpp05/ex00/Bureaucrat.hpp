#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <stdexcept>

class Bureaucrat
{

	public:

		Bureaucrat();
		Bureaucrat( std::string name, int grade );
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat();

		Bureaucrat &		operator=( Bureaucrat const & rhs );

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *	what()	const throw();
		};
		
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *	what()	const throw();
		};

		void				incrementGrade( int num);
		void				decrementGrade( int num );

		const std::string	getName()	const;
		int					getGrade()	const;
		
	private:

		const std::string	_name;
		int					_grade;

		void				checkGrade( int grade );

};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

#endif /* ****************************************************** BUREAUCRAT_H */