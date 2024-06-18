NAME        = zombie
SRC         = main.cpp Zombie.cpp zombieHorde.cpp
OBJ         = $(addprefix obj/, $(SRC:.cpp=.o))
CPP         = c++
CPPFLAGS    = -Wall -Wextra -Werror -std=c++98

obj/%.o : %.cpp
	@mkdir -p obj
	@$(CPP) $(CPPFLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	@$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

all : $(NAME)

clean :
	@rm -rf obj

fclean : clean
	@rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
