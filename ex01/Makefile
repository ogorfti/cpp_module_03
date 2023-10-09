# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/09 12:08:20 by ogorfti           #+#    #+#              #
#    Updated: 2023/10/09 15:59:57 by ogorfti          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Hunter

SRCS = main.cpp\
		ClapTrap.cpp\
		ScavTrap.cpp\

OBJS = $(SRCS:.cpp=.o)

CXXFLAGS =  -Wall -Wextra -Werror -std=c++98

CC = c++

RM = rm -f

all : $(NAME) clean

$(NAME) : $(OBJS)
	$(CC) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean : 
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all