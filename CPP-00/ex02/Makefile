NAME = App2
SRC = Account.cpp tests.cpp
OBJ =$(SRC:.cpp=.o)
CC =g++
CFLAGS =-Wall -Wextra -Werror
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