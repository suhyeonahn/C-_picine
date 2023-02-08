NAME = Intern

SRC = Bureaucrat.cpp \
	Form.cpp \
	ShrubberyCreationForm.cpp \
	RobotomyRequestForm.cpp \
	PresidentialPardonForm.cpp \
	Intern.cpp \
	main.cpp
	
OBJS = $(SRC:.cpp=.o)
DEPS = $(OBJS:.o=.d)

CC = c++

CFLAGS = -std=c++98 -Wall -Wextra -Werror

%.o: %.cpp
	$(CC) $(CFLAGS) -MMD -c $< -o $@ 

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) -I.

all : $(NAME)

clean :
	rm -rf $(OBJS) $(DEPS)

fclean : clean
	rm -rf $(NAME)

re : fclean 
	make all

-include $(DEPS)


.PHONY : re clean fclean all