NAME = push_swap.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

FILES = ps.c \
		commands/push.c \
		commands/rev_rot.c \
		commands/rotate.c \
		commands/swap.c \
		commands/utils.c \ 


RM = rm -rf


OBJ = $(FILES:.c=.o)

$(NAME):
	make -C libft/
	gcc -Wall -Wextra -Werror -c $(FILES)
	ar -r -c $(NAME) $(OBJ)

all: $(NAME)

clean:
	make clean -C libft/
	rm -f $(OBJ)

fclean: clean
	make fclean -C libft/
	rm -f $(NAME)

re: fclean all

.PHONY : all, clean, fclean, re


