#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{

	public:

		Form();
		Form( std::string name, const int gradeToSign, const int gradeToExcute );
		Form( Form const & src );
		~Form();

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

		const std::string	getName()			const;
		bool				getIsSigned()		const;
		int					getGradeToSign()	const;
		int					getGradeToExcute()	const;

		void				beSigned(const Bureaucrat & b );

	private:

		const std::string	_name;
		bool				_isSigned;
		const int			_gradeToSign;
		const int			_gradeToExcute;

		void				checkGrade( int grade );

};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */