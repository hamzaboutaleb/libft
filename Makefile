
SRC = $(wildcard *.c)
OBJ = $(SRC:%.c=%.o)
CFLAGS = -Wall -Wextra -Werror
CC = cc

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJ)
	ar -crs $@ $^

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(NAME);

.PHONY: all fclean clean re