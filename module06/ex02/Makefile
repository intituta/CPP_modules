# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kferterb <kferterb@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/14 09:16:28 by kferterb          #+#    #+#              #
#    Updated: 2022/08/15 16:58:46 by kferterb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	a.out

SRCS	=	main.cpp Base.cpp A.cpp B.cpp C.cpp

OBJS	=	$(SRCS:.cpp=.o)

CFLAGS	=	-Wall -Wextra -Werror -std=c++98

CC		=	c++

.PHONY	:	all clean fclean re

all		:	$(NAME)

$(NAME)	:	$(OBJS)
			$(CC) $(CFLAGS) $(OBJS) -o $@

clean	:
			$(RM) $(OBJS)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean all