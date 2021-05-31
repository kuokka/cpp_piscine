# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/31 16:00:14 by seunghoh          #+#    #+#              #
#    Updated: 2021/05/31 19:03:21 by seunghoh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = identify
CC = clang++
#CFLAGS = -Wall -Werror -Wextra --std=c++98

SRCS = main.cpp \
	   Base.cpp \
	   A.cpp \
	   B.cpp \
	   C.cpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

%.o : %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all
