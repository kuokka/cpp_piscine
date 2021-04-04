# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seunghoh <seunghoh@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/03 17:06:05 by seunghoh          #+#    #+#              #
#    Updated: 2021/04/04 16:58:39 by seunghoh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
CC = clang++
CFLAGS = -Wall -Werror -Wextra

SRCS = main.cpp \
	   PhoneBook.cpp \
	   Address.cpp 

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
