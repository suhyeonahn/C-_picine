#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

# define RESET   "\033[0m"
# define RED     "\033[31m"      /* Red */
# define CYAN    "\033[36m"      /* Cyan */
# define YELLOW  "\033[33m"      /* Yellow */

class Bureaucrat;
class Form
{

	public:

		Form();
		Form( std::string name, std::string target, const int gradeToSign, const int gradeToExcute );
		Form( Form const & src );
		virtual	~Form();

		Form &		operator=( Form const & rhs );

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

		class NotSignedException : public std::exception
		{
			public:
				virtual const char *	what()	const throw();
		};

		void				beSigned( const Bureaucrat & b );
		virtual void		execute( Bureaucrat const & executor )	const = 0;

		const std::string	getName()			const;
		std::string			getTarget()			const;
		bool				getIsSigned()		const;
		int					getGradeToSign()	const;
		int					getGradeToExcute()	const;

	private:

		const std::string	_name;
		std::string			_target;
		bool				_isSigned;
		const int			_gradeToSign;
		const int			_gradeToExcute;

		void				checkGrade( int grade );
};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */