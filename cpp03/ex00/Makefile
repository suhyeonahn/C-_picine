NAME = ClapTrap

SRC = ClapTrap.cpp \
	main.cpp
	
OBJS = $(SRC:.cpp=.o)

CC = c++

CFLAGS = -std=c++98 -Wall -Wextra -Werror

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@ 

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) -I.

all : $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : re clean fclean all