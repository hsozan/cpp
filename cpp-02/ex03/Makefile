NAME =Bsp
SRC =main.cpp Fixed.cpp Point.cpp Bsp.cpp
OBJ =$(SRC:.cpp=.o)
INCLUDES =Fixed.hpp Point.hpp
CC =g++
CFLAGS =-Wall -Wextra -Werror -std=c++98
RM =rm -f

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) -I .

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@ -I .

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re