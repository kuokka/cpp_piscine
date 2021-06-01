# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/02 00:48:50 by seunghoh          #+#    #+#              #
#    Updated: 2021/06/02 00:55:03 by seunghoh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = iter
CC = clang++
CFLAGS = -Wall -Wextra -Werror --std=c++98

SRCS = main.cpp

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
