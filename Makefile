# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/12 18:26:21 by taboterm          #+#    #+#              #
#    Updated: 2023/09/13 20:58:51 by taboterm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minishell

RUN = ./minishell

SRC = parser.c 

INCLUDE = parser.h

OBJ = $(SRC:.c=.o)

## colours ##
# add colurs#

CC = gcc

CFLAGS = -Wall -Wextra -Werror -g -fsanitize=address

RM = rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $(OBJ) -lreadline

clean:
	$(RM) *.o

fclean: clean
	$(RM) $(NAME)

re: flean all

.PHONY: all bonus clean fclean re
