NAME = Bureaucrat
SRC = Bureaucrat.cpp main.cpp Form.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	g++ -Wall -Wextra -Werror -std=c++98 -o $(NAME) $(OBJ)

%.o: %.cpp
	g++ -Wall -Wextra -Werror -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re