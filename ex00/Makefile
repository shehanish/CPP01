
C++ = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

NAME = zombie

SRC = main.cpp zombie.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME) : $(OBJ)
	$(C++) $(C++FLAGS) $(OBJ) -0 $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
