NAME		= do_op

SRCS		= ft_atoi.c ft_putnbr.c ft_math.c do_op.c

OBJS		= ${SRCS:.c=.o}

FLAGS		= -Wall -Wextra -Werror

${NAME}:
			gcc ${FLAGS} *.c -o ${NAME}

all:		${NAME}

clean:		
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
