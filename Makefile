# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/12 18:26:21 by taboterm          #+#    #+#              #
#    Updated: 2023/09/14 17:01:00 by taboterm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#target output
NAME = minishell

#compiling info
CC = gcc
RUN = ./minishell
CFLAGS = -Wall -Wextra -Werror -g
LEAKS = leaks -atExit -- ./minishell

# Libraries
LIBFT_A = libft/libft.a


# Paths
SRC_PATH = src/
OBJ_PATH = obj/
LIBFT = libft

# Source and object files
SRCS = separators.c

OBJS = $(SRCS:%.c=%.o)

# Make desired targets = Rules
all: $(OBJ_PATH) $(NAME)

$(OBJ_PATH):
	mkdir $(OBJ_PATH)

# Make target executable
$(NAME): $(OBJS)
	$(MAKE) -C $(LIBFT)
	$(CC)  $(CFLAGS) $(OBJS) $(LIBFT_A) -o $(NAME) -fsanitize=address
	mv $(OBJS) $(OBJ_PATH)

clean:
	rm -rf $(OBJ_PATH)
	$(MAKE) clean -C $(LIBFT)

fclean: clean
	rm -rf $(NAME)
	$(MAKE) clean -C $(LIBFT)

re: fclean all

.PHONY: all clean fclean re