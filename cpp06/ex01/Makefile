# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/01 02:04:41 by seunghoh          #+#    #+#              #
#    Updated: 2021/06/01 02:04:43 by seunghoh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = serializer
CC = clang++
CFLAGS = -Wall -Werror -Wextra --std=c++98

SRCS = main.cpp \
	   Data.cpp

OBJS = $(SRCS:.cpp=.o)

%.o : %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all
