# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kferterb <kferterb@student.21-school.ru    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/04 17:50:12 by kferterb          #+#    #+#              #
#    Updated: 2022/08/09 10:32:52 by kferterb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	fixed

SRC		=	main.cpp Fixed.cpp

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