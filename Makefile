NAME = push_swap

SRCS = ps.c \
 	commands/push.c \
 	commands/rev_rot.c \
 	commands/rotate.c \
	commands/swap.c \
	etc/arg_checker.c \
	etc/arg_checker_2.c \
	etc/indexer.c \
	etc/init_a.c \
	etc/is_sorted.c \
	etc/sort.c \
	etc/unexpected.c \
	etc/mini_sort.c \
	utils/lst_utils.c \
	utils/str_utils.c \
	utils/str_utils_2.c \
	utils/split.c \


CC = gcc

CFLAGS = -Wall -Wextra -Werror

OBJS = $(SRCS:.c=.o)
RM = rm -f

all: ${NAME}
 
${NAME}: ${OBJS}
	@${CC} ${CFLAGS} ${OBJS} -o ${NAME}

clean: 
	@${RM} ${OBJS}

fclean: clean
	@${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re