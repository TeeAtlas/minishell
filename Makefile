# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/12 18:26:21 by taboterm          #+#    #+#              #
#    Updated: 2023/09/12 19:12:59 by taboterm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minishell

SRC = parser.c 

INCLUDE = minishell.h

OBJ = $(SRC:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror -g

RM = rm -fclean

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $(OBJ) -I $(HOME)/goinfre/.brew/opt/readline/include/ -L $(HOME)/goinfre/.brew/opt/readline/lib/ -l readline

clean:
	$(RM) *.o

fclean: clean
	$(RM) $(NAME)

re: flean all

.PHONY: all bonus clean fclean re
