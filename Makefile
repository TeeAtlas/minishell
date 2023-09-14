# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/12 18:26:21 by taboterm          #+#    #+#              #
#    Updated: 2023/09/14 10:29:20 by taboterm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#target output
NAME = minishell

#compiling info
CC = gcc
RUN = ./minishell
CFLAGS = -Wall -Wextra -Werror -g
DEBUG = -fsanitize=address
LEAKS = leaks -atExit -- ./minishell

LIBRARIES = libft/libft.a
INCLUDE = parser.h

#source and object files
SRC = quote_separators.c 

OBJ = $(SRC:.c=.o)

# add colurs#
## colours ##

RM = rm -rf


#make desired object = rules
all: $(NAME)

#make target executable
$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $(OBJ) -lreadline

clean:
	$(RM) *.o

fclean: clean
	$(RM) $(NAME)

re: flean all

.PHONY: all bonus clean fclean re
