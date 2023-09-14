NAME = libft.a

SRC = ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_strlen.c\
	ft_memmove.c ft_memset.c ft_bzero.c ft_memcpy.c ft_strlcpy.c\
	ft_tolower.c ft_toupper.c ft_strchr.c ft_memchr.c ft_memcmp.c ft_strnstr.c\
	ft_atoi_mod.c ft_calloc.c ft_strlcat.c ft_substr.c ft_strjoin.c ft_putchar_fd.c\
	ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_striteri.c ft_itoa.c ft_strmapi.c\
	ft_strdup.c ft_strrchr.c ft_strncmp.c ft_split.c ft_strtrim.c\
	ft_printstr.c ft_putnum_mod.c ft_uitoa.c ft_printchar.c  ft_printptr.c\
	get_next_line.c\
	ft_printf.c\
	ft_lstnew.c ft_lstnew_mod.c ft_lstlast.c ft_lstsize.c ft_lstadd_back.c\
	ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c\
	
OBJS = $(SRC:.c=.o)

CC = gcc

CFLAGS = -Wall -Werror -Wextra

$(NAME): $(OBJS) 
	ar rcs $(NAME) $(OBJS)

all: $(NAME)

	
clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f *.o $(NAME)

re: fclean all

.PHONY: clean fclean all re  