SRCS	= block_gen.c main.c ft_atoi.c ft_split.c ft_strlen.c reader.c

OBJS	= ${SRCS:.c=.o}

NAME	= rush-02

CC	= gcc

RM	= rm -f

CFLAGS	= -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME} :	${OBJS}
		${CC} -o ${NAME} ${OBJS}

all:		${NAME}

clean:
		${RM} ${OBJS}

fclean:		clean
		${RM} ${NAME}
