
C++ = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

NAME = zombie

SRC = main.cpp zombie.cpp newZombie.cpp randomChump.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME) : $(OBJ)
	$(C++) $(C++FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
