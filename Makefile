LIB = ar -rcs

RM = rm -f

CC = gcc

CCFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

SRC = ft_printf.c ft_utils.c

OBJ = $(SRC:.c=.o)

INCLUDE = ft_printf.h Makefile

all: $(NAME)

$(NAME):	$(OBJ) $(INCLUDE)
			$(LIB) $(NAME) $(OBJ)

%.o: %.c	$(INCLUDE)
			$(CC) $(CCFLAGS) -c -o $@ $<

clean:		
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY: all clean fclean re
