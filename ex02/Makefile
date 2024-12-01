# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abechcha <abechcha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/14 18:17:53 by abechcha          #+#    #+#              #
#    Updated: 2024/11/14 18:20:52 by abechcha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC = main.cpp\
	  Base.cpp\

OBJ = $(SRC:.cpp=.o)
NAME = Identify
HEDER = A.hpp B.hpp  C.hpp Base.hpp
CFLAGS =  -Wall -Wextra -Werror -std=c++98

all : $(NAME)

%.o : %.cpp ${HEDER} Makefile
	c++ ${CFLAGS} -c $< -o $@

$(NAME) : $(OBJ) ${HEDER}
	 c++ ${CFLAGS} $(OBJ) -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : clean