# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abechcha <abechcha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/14 07:44:02 by abechcha          #+#    #+#              #
#    Updated: 2024/11/30 15:27:11 by abechcha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp \
	  deserialize.cpp\

OBJ = $(SRC:.cpp=.o)
NAME = Serializer
HEDER = deserialize.hpp Data.hpp
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