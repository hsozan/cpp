NAME =Phonebook
SRC =main.cpp PhoneBook.cpp Contact.cpp GetLine.cpp 
OBJ =$(SRC:.cpp=.o)
INCLUDES =PhoneBook.hpp Contact.hpp GetLine.hpp 
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