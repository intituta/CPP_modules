# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kferterb <kferterb@student.21-school.ru    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/04 17:50:12 by kferterb          #+#    #+#              #
#    Updated: 2022/08/07 17:15:45 by kferterb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	main

SRC		=	main.cpp

FLAGS	=	-Wall -Wextra -Werror -std=c++98

OBJ		=	$(SRC:%.cpp=%.o)

CC		=	c++

.PHONY	:	all clean fclean re

all		:	$(NAME)

$(NAME)	:	$(OBJ)
			$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o 	:	%.cpp
			$(CC) $(FLAGS) -c $< -o $@

clean	:
			rm -f $(OBJ)

fclean	:	clean
			@$(RM) $(NAME)

re		:	fclean all