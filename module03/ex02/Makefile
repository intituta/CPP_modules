# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kferterb <kferterb@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/04 17:50:12 by kferterb          #+#    #+#              #
#    Updated: 2022/08/10 17:28:50 by kferterb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	fragTrap

SRC		=	main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

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
