# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmaquet <nmaquet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/19 15:29:32 by nmaquet           #+#    #+#              #
#    Updated: 2024/02/19 15:39:19 by nmaquet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= zombie

SRC		= main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
OBJ		= $(SRC:.cpp=.o)

CPP		=	c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98


%.o : %.cpp
	@$(CPP) $(CPPFLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	@$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

all : $(NAME)


clean :
	@rm -rf $(OBJ)

fclean : clean
	@rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re