# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maquetn <maquetn@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/05 12:46:44 by maquetn           #+#    #+#              #
#    Updated: 2024/04/11 16:36:48 by maquetn          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ref

SRC		= main.cpp
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