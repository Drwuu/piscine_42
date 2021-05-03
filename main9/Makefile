NAME		= libft.a

SRCS		= ./srcs/ft_putchar.c ./srcs/ft_swap.c ./srcs/ft_putstr.c ./srcs/ft_strlen.c ./srcs/ft_strcmp.c

OBJS		= ${SRCS:.c=.o}

FLAGS		= -Wall -Wextra -Werror

${NAME}:	${OBJS}
			ar rcs ${NAME} ${OBJS}

.c.o:		
			gcc ${FLAGS} -I./includes -c $< -o ${<:.c=.o}

all:		${NAME}

clean:		
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
