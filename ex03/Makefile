C++ = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

NAME = attack

SRC = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp 

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