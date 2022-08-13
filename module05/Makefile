NAME    =   bureaucrat

SRC     =   main.cpp Bureaucrat.cpp

FLAGS   =   -Wall -Werror -Wextra -std=c++98

CC      =   c++

OBJ     =   $(SRC:%.cpp=%.o)

.PHONY  =   all clean fclean re

all     :   $(NAME)

$(NAME) :   $(OBJ)
            $(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o     :   %.cpp
            $(CC0) $(FLAGS) $(OBJ) -o $(NAME)

clean   :   rm -f $(OBJ)

fclean  :   clean
            $(RM) $(NAME)

re      :   fclean all
