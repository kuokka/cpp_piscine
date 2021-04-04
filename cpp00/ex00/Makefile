# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/03 14:24:45 by seunghoh          #+#    #+#              #
#    Updated: 2021/04/03 17:09:51 by seunghoh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
CC = clang++
CFLAGS = -Wall -Wextra -Werror

SRCS = megaphone.cpp

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
