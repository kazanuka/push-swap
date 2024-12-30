NAME = push_swap
SRCS = ps.c \
 	commands/push.c \
 	commands/rev_rot.c \
 	commands/rotate.c \
	commands/swap.c \
	etc/arg_checker.c \
	etc/indexer.c \
	etc/init_a.c \
	etc/is_sorted.c \
	etc/sort.c \
	etc/utils.c \
	etc/mini_sort.c \
	utils/ft_atoi.c \
	utils/ft_isdigit.c \
	utils/ft_lstadd_back_bonus.c \
	utils/ft_lstadd_front_bonus.c \
	utils/ft_lstlast_bonus.c \
	utils/ft_lstnew_bonus.c \
	utils/ft_lstsize_bonus.c \
	utils/ft_putendl_fd.c \
	utils/ft_putstr_fd.c \
	utils/ft_split.c \
	utils/ft_strdup.c \
	utils/ft_strlen.c \
	utils/ft_substr.c \
	utils/ft_memcpy.c \


	 
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