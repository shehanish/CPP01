
C++ = c++

C++FLAGS = -Wall -Werror -Wextra -std=c++98

NAME = zombie_horde

SRC = main.cpp zombie.cpp zombieHorde.cpp

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
