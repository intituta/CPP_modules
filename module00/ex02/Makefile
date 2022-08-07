# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kferterb <kferterb@student.21-school.ru    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/04 18:12:49 by kferterb          #+#    #+#              #
#    Updated: 2022/08/07 10:57:56 by kferterb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	account

HEADER	=	Account.hpp

SRC		=	tests.cpp Account.cpp

FLAGS	=	-Wall -Wextra -Werror -std=c++98

OBJ		=	$(SRC:%.cpp=%.o)

CC		=	c++

.PHONY	:	all clean fclean re

all		:	$(NAME)

$(NAME)	:	$(OBJ) $(HEADER)
			$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o 	:	%.cpp $(HEADER)
			$(CC) $(FLAGS) -c $< -o $@

clean	:
			rm -f $(OBJ)

fclean	:	clean
			@$(RM) $(NAME)

re		:	fclean all