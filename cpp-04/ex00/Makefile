NAME =Animals
SRC =main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp
OBJ =$(SRC:.cpp=.o)
INCLUDES =Animal.hpp Dog.hpp Cat.hpp WrongAnimal.hpp WrongCat.hpp
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